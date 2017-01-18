
#include<stdio.h>
int main()
{
int height,i,j;
printf("enter the height :");
scanf("%d",&height);

for(i=height;i>0;i--)
{
for( j=0;j<=height+2;j++)
{
if(j>i)
{
printf("#");
}
else
printf(" ");
}
printf("\n");
}
}
