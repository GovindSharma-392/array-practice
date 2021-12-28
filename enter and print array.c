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
 for(i=0;i<size;i++)
 {
     printf("%d",x[i]);
 }
 return 0;
}