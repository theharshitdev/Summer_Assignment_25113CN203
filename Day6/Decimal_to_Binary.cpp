
//BINARY TO DECIMAL
#include<iostream>
using namespace std;
int main(){
    //INPUT NUMBER FROM USER
    int inputnumber;
    int binaryform=0;
    int place =1;
    cout<<"Enter the number:";
    cin>>inputnumber;
    while(inputnumber>0){
        int remainder=inputnumber%2;//FINDING REMAINDER OF GIVEN NUMBER
        binaryform=binaryform+remainder*place;
        place*=10;
        inputnumber/=2;//DIVIDING THE NUMBER TO CONTINUE BINARY CONVERSION
    }
    cout<<"Conversion of Decimal to binary of the given number is:"<<binaryform;


    return 0;

}