#include<stdio.h>
int main(){
    int number;
    long long product=1;
    printf("Enter a positive integer:");
    scanf("%d",&number);
    if(number==0){
        product=0;
    }
    while(number>0){
        int remainder=number%10;
        product*=remainder;
        number/=10;

    }
    printf("The product of the digis is :%d",product);
    
    return 0;
}