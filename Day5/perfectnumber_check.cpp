#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum+=i;
        }
    }
    if(sum==number){
        cout<<"The number is a perfect number.";
    }
    else 
    {
        cout<<"The number is not a perfect number.";
    }
    return 0;
}