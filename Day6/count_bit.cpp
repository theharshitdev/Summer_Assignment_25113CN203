#include<iostream>
using namespace std;
int main(){
    int integer;
    int count =0;
    cout<<"Enter the number:";
    cin>>integer;
    while(integer>0){
       integer= integer&(integer-1);
        count++;

    }

    cout<<"The number of bits present in an integer:"<<count;




    return 0;
}