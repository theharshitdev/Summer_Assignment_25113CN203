#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int number,i,sum=0;
    int enternumber,remainder,count;
    int numberofdigit=0;
    cout<<"Enter the number:";
    cin>>number;
    enternumber=number;
    count=number;

    while(count>0)
    {
    numberofdigit++;
    count=count/10;
    }

    while(number>0){
        int numberdigit=number%10;
        sum+=pow(numberdigit,numberofdigit);
        number/=10;
        

    }
    if(sum==enternumber){
        cout<<"It is a Armstrong Number";

    }
    else
    {
        cout<<"It is not an Armstring Number";
    }

    
    
    return 0;
}