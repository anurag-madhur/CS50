#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"
typedef uint8_t  BYTE;
typedef uint32_t DWORD;
typedef int32_t  LONG;
typedef uint16_t WORD;

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./copy infile outfile\n");
        return 1;
    }
    char *infile = argv[1];
    FILE *inptr = fopen(infile, "r");
    FILE *inptr2=fopen(infile,"r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }
    BYTE buffer[512],buffer2[512];
    int flag=0;
    int count =0,x=0;
    while(fread(buffer,512,1,inptr)!=0)
    {   
        int flag=0;
        if(buffer[0]==0xff && buffer[1]==0xd8 && buffer[2]==0xff && (buffer[3] & 0xf0)==0xe0)
        {
          //  printf("AAA");
            char temp[10];
            sprintf(temp, "%03i.jpg", count++);
            FILE *image = fopen(temp , "w");
            if (image == NULL)
            {
            //    printf("#\n");
                fprintf(stderr, "Could not open %s.\n", temp);
                return 2;
            }
       
            fwrite(buffer, 512, 1, image);
            fread(buffer, 512, 1, inptr);
            //fread(buffer2, 512, 1, inptr);
            while(!(buffer[0]==0xff && buffer[1]==0xd8 && buffer[2]==0xff && (buffer[3] & 0xf0)==0xe0)) 
            {
                //flag=1;
                fwrite(buffer, 512, 1, image);
                if(fread(buffer, 512, 1, inptr)<1)
                    break;
            }
            fseek(inptr,-512,SEEK_CUR);
            //if(flag==1)  
           // printf("%d",x++);
            fclose(image);
        }
        //printf("%d\n",count);
    }
}
