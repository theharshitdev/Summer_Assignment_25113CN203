#include<iostream>
using namespace std;

int main() 

{
    int number;
    cout<<"Enter the number:";
    cin>>number;

    cout<<"Prime Factor is:";

    for(int i=2;i<=number;i++)
    {
        while(number%i==0){
            cout<<i<<" ";
            number=number/i;
        }
    }
    return 0;
    
}
