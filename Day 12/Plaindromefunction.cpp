#include<iostream>
using namespace std;
bool palindrome(int number){
    int check=number;
    int sum=0;
    int remainder;
    while (number>0){
    remainder=number%10;
    sum=sum*10+remainder;
    number/=10;
    }
if(check==sum){
    return true;
}
else{
    return false;
}
}


int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;

    if(palindrome(number)){
         cout << number << " is a Palindrome number." <<  endl;
    } else {
        cout << number << " is not a Palindrome number." <<  endl;
    }
    return 0;
    }
    

