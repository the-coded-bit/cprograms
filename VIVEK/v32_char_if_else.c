#include<stdio.h>
int main(){
char ch;
scanf("%c",&ch);
if(ch>=65&&ch<=90){
printf("Charecter is capital");
}
else if(ch>=97&&ch<=122){
printf("Charecter is small");
}
else if(ch>=48&&ch<=57){
printf("Chacter is 0-9");
}
else{
printf("Charecter is special charter ");
}}
