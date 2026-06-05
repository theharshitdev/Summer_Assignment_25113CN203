#include<stdio.h>
int main(){
    int number,original;
    printf("Enter the positive integer:");
    scanf("%d",&number);
      original=number;
    int reverse=0;
    while(number!=0){
        int remainder=number%10;
        reverse=remainder+reverse*10;
        number/=10;
    }
    if(original==reverse){
        printf("The number given is a  palindrome number");
    }
    else{
        printf("It is not a palindrome number");
    }
    return 0;
}