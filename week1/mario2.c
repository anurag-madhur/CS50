
#include<stdio.h>
int get_int()
{
	int height;	
	scanf("%d",&height);
	while(height<=0||height>=24)
	{
		printf("enter the height :");
		scanf("%d",&height);
	}
	return height;
}

int main()
{
	int height, i,j;
	printf("enter the height :");
		height=get_int();
		for(i=0;i<height;i++)
		{

			for(j=height+1;j>=0;j--)
			{
				if(i>=j)
				printf("#");
				else
				printf(" ");
			}
			for(j=0;j<2*height+1;j++)
			{
				if(j==height)
				printf("  ");
			}
			for(j=0;j<=height-1;j++)
			{
	
				if(j<=i)
				printf("#");
				else
				printf(" ");
			}
	
			printf("\n");
		}

}


