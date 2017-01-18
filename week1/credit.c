#include<stdio.h>
#include<math.h>
 int main()
   {
    	 int sum1=0,sum2=0,count=0,temp;
     	 long long int card,card2,card3;
    	 printf("enter the card number :");
    	 scanf("%lld",&card);
    	 card2=card;
         card3=card;
         while(card2!=0)
     		{
                  	card2=card2/10;
                  	count++;
     		}
     
    
         while(card!=0)
     		{
          		sum1=sum1+card%10;
         		card=card/10;
            
          		temp=2*(card%10);
         	       
		 if(temp>=10)
	          {
        	
			  temp=temp/10+temp%10;
	          }
	
	          sum2=sum2+temp;
	          card=card/10;
	    
	          }
   	
	printf("%d\n",sum1+sum2);
      
     
	if((sum1+sum2)%10==0)
		     {
		         if(count==15&&(card3/10^13==34||card3/10^13==37))
	   
                            printf("Amex\n");
           
          		if(count==16&&(card3/10^14==51||card3/10^14==52||card3/10^14==53||card3/10^14==54||card3/10^14==55))
            		
                             printf("Master Card\n");
          
         		
			if((count==13||count==16)&&(card3/10^12==4||card3/10^15==4))
             
		             printf("Visa\n"); 
        
      
    		     }
     
	else
      
			printf("error\n");

  }
