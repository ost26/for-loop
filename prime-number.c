// prime number

#include<stdio.h>

void main(){
    int i,j;

    for(i=2;i<=50;i++)
        for(j=2;j<=i;j++)
            if(i==j)
                printf("%d \n",i);
            else if(i%j==0)
                break;
}
