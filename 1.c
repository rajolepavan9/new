#include<stdio.h>

int squ(int n)
{
int p;
p=n*n;
return p;
}




int main()
{
int *q=NULL,p,n;
printf("enter value for n\n");
scanf("%d",&n);
p=squ(n);
printf("%d",p);
//printf("%d",*q);
}



