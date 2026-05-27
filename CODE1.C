#include<stdio.h>
int main(){
    int sum=0,number;
    printf("enter a postive integer: ");
    scanf("%d",&number);
    for(int i=1;i<=number;++i){
        sum +=i;
    }
    printf("Sum of first N natural number is:%d",sum);
    return 0;

}
