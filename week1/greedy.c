#include<stdio.h>
#include<stdlib.h>
int main()
{
      int n,count=0;
      char str[50];
      float x;
      do
      {
        printf("o hai! How much change is owed?\n");
      	fgets(str,50,stdin);
      	x=atof(str);
      	if(x==0)
        printf("retry\n");
      }while(x<=0);

	  while(x>0.000001)
	  {
		if(x>=.25)
		{
		    x=x-.25;
			count++;
		}
		if(x>=.10&&x<.25)
		{
			x=x-.10;
			count++;
		}
		if(x>=.05&&x<.10)
		{
			x=x-.05;
			count++;
		}
		if(x>=.009999&&x<.05)
		{
			x=x-.01;
			count++;
		}
		printf("%f",x);
	  }
   	printf("minimum number of coins are :%d\n",count);

    else
    printf("plzz enter valid amount.");

}
