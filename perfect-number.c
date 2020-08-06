// perfect numbers below 50

#include<stdio.h>

void main(){
    int i,j,sum;

    for(i=1;i<=50;i++){
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                sum=sum+j;
        }
        if(sum==i)
            printf("aye %d \n",i);
            
              
    }
}

// perfect number: a positive number, that is the sum of its positive divisors, exclduding the number itself.  i = sum of its postive divisors, excluding the number itself.

// trace; this is beautiful
// i j
// 1 does not enter the j loop, condition does not satisfy;(1<1)? nope
// 2 1 
// 3 1 2  
// 4 1 2 3  
// 5 1 2 3 4  
// 6 1 2 3 4 5  i=6 j= 1 2 3 4 5 6 perfect divisors: 1 2 3 sum = 6 Is the sum of perfect divisors == i(6). ahaa it does, got what we were looking for, yayayyaya. this goes on till i(50)
