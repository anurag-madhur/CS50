#include<stdio.h>
//#include<conio.h>
  
     void w_water()
     {
       int min;
        printf("enter the number of minutes used for bathing :");
        scanf("%d",&min);

        printf("\namount of water used for bathintg is :%d",min*12);

     }

    void  main()
     {
      // printf("amount of water used for bathing is :");
        w_water(); 
     }     
