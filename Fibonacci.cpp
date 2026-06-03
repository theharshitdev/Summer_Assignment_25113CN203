#include<iostream>
using namespace std;
int main(){
    int number,i;
    int term1=0,term2=1;
    int nextterm;
cout<<"Enter the number of terms:";
cin>>number;
cout<<"Fibonacci  series:";
for ( i = 1; i <=number; i++)
{
    if(i==1){
        cout<< term1<<" ";
        continue;
    }
    if(i==2){
        cout<< term2<<" ";
        continue;
    }
    nextterm=term1+term2;
    term1=term2;
    term2=nextterm;
    cout<< nextterm<<" " ;
}

    return 0;

}