#include<stdio.h>
int main()
{
      int n,count=0;
      int x;
      printf("enter the amount to be returned :");
      scanf("%d",&x);
if(x>0)
{
      while(x!=0)
{	
      if(x>=25)
        {
          n=x/25;
          x=x%25;
          count=count+n;
        }

      if(x>=10)
        {
          n=x/10;
          x=x%10;
          count=count+n;
        }

       if(x>=5)
       {
          n=x/5;
          x=x%5;

          count=count+n;

       }

       if(x<5)
       {
        count=count+x;
        x=0;
 }    
}
       printf("minimum number of coins are :%d\n",count);

}
else
printf("plzz enter valid amount.");
}
