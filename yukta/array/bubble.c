#include<stdio.h>
int main()
{
int a[5],i,j,temp;
printf("enter array elements");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<4;i++)
{
 for(j=0;j<4-i;j++)
{
  if(a[j]>a[j+1])
{ 
  temp=a[j];
  a[j]=a[j+1];
  a[j+1]=temp;
}
}
}
printf("sorted array-");
for(i=0;i<5;i++)
printf("%d",a[i]);
return 0;
}
