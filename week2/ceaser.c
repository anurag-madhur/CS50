#include<stdio.h>
int main(int k, char* args[])
{
	if(k==2)
	{
		int i=0,n;
		char ch[50];
		n=atoi(args[1])%26;
		printf("plaintext :");
		fgets(ch,50,stdin);
		printf("ciphertext :");
		while(ch[i]!='\0')
		{

			if(ch[i]>=97&&ch[i]<=122)
			{
				if((ch[i]+n)>122)
				printf("%c",(ch[i]+n-26));
				else
				printf("%c",ch[i]+n);
  			}
			else if(ch[i]>=65&&ch[i]<=90)
			{
				if((ch[i]+n)>90)
 				printf("%c",(ch[i]+n-26));
				else
				printf("%c",ch[i]+n);
			}
			else
			printf("%c",ch[i]);
			i++;
		}
		return 0;
	}
	else
	{
	printf("invalid argument.");
	printf("\n");
	return 1;
	}
}
