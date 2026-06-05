#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int primefactor;
    for(int i=1;i<number;i++)
    {
        if(number%i==0)
        {
            primefactor=i;
            
        }
    }
    cout<<"Largest prime factor:"<<primefactor;
    return 0;
}