#include<stdio.h>
int main() {
    int number;
    int table=0;
    printf("Enter a postive integer: ");
    scanf("%d",&number);
    for(int i=1;i<=10;i++){
        table=number*i;
        printf("%d*%d=%d\n",number,i,table);

    }
    return 0;
}