#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char toreverse[], int a, int b); 


void main()
{

    char *toreverse="Hello There Learner";
    int len=strlen(toreverse);
    int a=0;
    int b=0;
    for(int i=0;i<=len;i++)
    {   
        if(toreverse[i]==' ' || toreverse[i]=='\0')        {
            b=i-1;
            reverse(toreverse,a,b);
            a=i+1;
        }

    }
}
void reverse(char toreverse[],int a,int b) {
    

    for (int i = b; i>=a; i--) {
      printf("%c", toreverse[i]);
  }
    printf("\t");
  
}

