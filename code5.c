#include<stdio.h>
int main(){
    int number,sum=0,digit;
    printf("enter a number:");
    scanf("%d",&number);
    while(number!=0){
        digit=number%10;
        sum =digit+sum;
      number=number/10;  
    }
    printf("The number of digits in given numberis:%d",sum);
    return 0;
}