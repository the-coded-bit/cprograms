#include<stdio.h>
int main(){
int i,j,a[3][3]={1,2,3,4,5,6,7,8,9};
for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    printf("a[%d][%d]is%d\n",i,j,a[i][j]);
} 
}
for(i=0;i<3;i++){
  for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
  printf("\n");
}
}
