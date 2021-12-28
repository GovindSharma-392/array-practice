#include<stdio.h>
int main()
{
 int size;
 scanf("%d",&size);
 int x[size],i;
 for(i=0;i<size;i++)
 {
     scanf("%d",&x[i]);
 }
 
 for(i=size-1;i>=0;i--)
 {
     printf("%d",x[i]);
 }
 return 0;
}