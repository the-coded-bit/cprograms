#include<stdio.h>
int main()
{
 int i,j,k,l,n,s;
 printf("Enter the number of rows and columns=");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  s=n;

  for(j=n;j>i;j--)
  printf(" ");

  for(k=1;k<=i;k++)
  printf("%d",s--);

  s=s+2;

  for(l=1;l<i;l++)
  printf("%d",s++);

  printf("\n");
 }

 return 0;
}
