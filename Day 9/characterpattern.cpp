#include<iostream>
using namespace std;
int main(){
    for( char ch=65;ch<70;ch++){
        for(char cj=65;cj<=ch;cj++){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}