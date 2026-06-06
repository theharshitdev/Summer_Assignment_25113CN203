#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int inputbinary;
    cout<<"Enter the binary number:";
    cin>>inputbinary;
    int decimal =0;
    int i=0;
    while(inputbinary>0)
    {
        int digit=inputbinary%10;
        decimal+=digit*pow(2,i);
        inputbinary/=10;
        i++;
    }
    cout<<"Decimal Number="<<decimal;

    return 0;
}