#include<stdio.h>
int main()
{
	char ch[50];
	int i=0;
	printf("enter the string :\n");
	fgets(ch,50,stdin);
	while(ch[i]!='\0')
		{
		if(ch[i]!=' ')
		{ 	
			if(i==0||ch[i-1]==' ')
				{
					if(ch[i]>=97&&ch[i]<=122)
						printf("%c",ch[i]-32);
				

					else
						printf("%c",ch[i]);
				}
		}	
		i++;
}
	 printf("\n");
}

