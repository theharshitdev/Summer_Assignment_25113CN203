#include<stdio.h>
int main(){
    int number;
    int count=0;
    printf("enter a number:");
    scanf("%d",&number);
    while(number!=0){
      number=number/10;
      count ++;  
    }
    printf("The number of digits in given numberis:%d",count);
    return 0;
}