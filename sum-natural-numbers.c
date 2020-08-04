#include<stdio.h>

void main(){
    int i,sum=0;

    for(i=1;i<=10;i++)
        {
            
            printf("%d + %d = %d \n", sum, i, sum+i);
            sum+=i;
            
        }
    printf("Sum of the first 10 natural no. is: %d", sum);
}

