// prime number


#include<stdio.h>

void main(){
    int i,j,count;

    for(i=1;i<=50;i++){
        count = 0;
        {
        for(j=1;j<=i;j++)
           if(i%j==0)
               count++;
        }
            if(count==2)
               printf("%d \n",i);
    }
    
}




// this was so much funnnnnnnnnn!


















// a prime number has only two factors(can be divided by only 2 numbers completely), 1 and itself.




//4%1
//4%2
//4%3
//4%4

//5%1
//5%2
//5%3
//5%4
//5%5 and i appears only twice, then prime
