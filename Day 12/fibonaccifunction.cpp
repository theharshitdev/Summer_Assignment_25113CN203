#include<iostream>
using namespace std;

int fibonacci(int number){
    if(number==0)
        return 0;
    if(number==1)
        return 1;

        int prev2 = 0; 
    int prev1 = 1; 
    int current = 0;

    for (int i = 2; i <= number; i++) {
        current = prev1 + prev2;
        prev2 = prev1;          
        prev1 = current;        
    }
    return current;
}

int main(){
    int number;
    cout << "Enter n: ";
    cin >> number;

    cout << "Fibonacci number at position " << number << " is " << fibonacci(number);

    return 0;
}
//0 1 1 2 3 5 8 13