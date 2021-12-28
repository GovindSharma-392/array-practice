#include<stdio.h>
int main()
{
 int size;
 scanf("%d",&size);
 int x[size],j,i,sum=0;
 float avg=0;
 for(i=0;i<size;i++)
 {
     scanf("%d",&x[i]);
 }
 
 for(i=0;i<size;i++)
 {
     
     sum+=x[i];
     
 }
 for(i=0;i<size;i++)
 {
     avg=sum/size;
 }
 printf("sum=%d",sum);
 printf("average=%f",avg);
 return 0;
}