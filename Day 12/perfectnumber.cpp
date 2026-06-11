#include<iostream>
using namespace std;
bool isPerfect(int number){
    int check=number;
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum+=i;
        }
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

    if(isPerfect(number)){
         cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }
    
    return 0;
}