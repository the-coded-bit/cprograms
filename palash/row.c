#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the rows");
scanf("%d",&n);


for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		printf("%d",j);
	}

	printf("\n");
}

return 0;
}