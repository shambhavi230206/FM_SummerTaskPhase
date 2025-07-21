#include <stdio.h>
int main()
{


float a,b,c,sum;
int isPrime,i;
printf("enter the three numbers:");
scanf("%f %f %f",&a,&b,&c);
sum=a+b+c;
printf("sum of numbers is: %f",sum);
if (sum!=(int)sum)
{ 
    printf("\nbecause sum is a decimal number, it cant be even/odd or prime/composite");}
else {
    if((int)sum%2==0)
    {
        printf("\nsum is even");
    }
    else 
    {
        printf("\nsum is odd");
    }
    if(sum<=1){
        if(sum<0)
        {
            printf("\nsince negative numbers cant be prime/composite, sum is neither");
        }
        else {
            printf("\nsum is neither prime nor composite");
        }

    }
    else {
    isPrime=1;
        for(i=2;i<=sum/2;i++)
        {
            if((int)sum%i==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("\nsum is prime");
        }
        else {
            printf("\nsum is composite");
        }

    }
    
}
return 0;
}
