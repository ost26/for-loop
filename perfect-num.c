#include <stdio.h>

void  main(){
  int i,j,sum;
  for(i=1;i<=50;i++){
    sum = 0;
    for(j=1;j<i;j++){
      if(i%j==0)
           sum=sum+j;
    }
    if(sum==j)
      printf("%d \n",i);
  }
}

