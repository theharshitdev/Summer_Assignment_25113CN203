#include<stdio.h>
int main(){
    int number;
    int fact=1;
    printf("Enter a positive integer:");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        fact*=i;

    }
    printf("The facorial of the given number is:%d",fact);
    return 0;
}