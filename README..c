#include <stdio.h>
#include <stdlib.h>

int main()
{

     int n=1;
     int max=0;
   int sum=0;
   int input;
   n++;

   printf("%d Enter the number  :",n);
    scanf("%d",&input);


   while(n!=0)
    {
        if(input>max){
            max=input;
        }

        sum+=input;

    if(input==0){
        break;
    }
     printf("%d Enter the number  :",n);
    scanf("%d",&input);

    n++;
   }
   printf("Sum of the values is %d",sum);
   printf("\nmaximum is %d",max);



    return 0;
}
