#include<iostream>
using namespace std;
int main(){
    //INPUT OF POWER N
    int x;
    int product=1;
    cout<<"Enter the value of x:";
    cin>>x;
    int n;//FOR X^N IPUT X FROM USER
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        product=product*x;
    }
    cout<<"The value of the x^n is:"<<product;

    return 0;
}