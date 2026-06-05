#include<iostream>
using namespace std;
int main(){
    int number;
    int sum=0;
    
    cout<<"Enter the number:";
    cin>>number;

    int digit=number;
    while(digit>0){
        int remainder=digit%10;
        int factorial=1;
        for(int i=1;i<=remainder;i++){
            factorial*=i;
        }
        sum+=factorial;
        digit/=10;
    }
    if(sum==number){
        cout<<"The number is a strong number";
    }
    else
    {
        cout<<"The number is not a strong number";
    }
    return 0;
}