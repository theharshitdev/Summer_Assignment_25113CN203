#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int primefactor;
    for(int i=2;i<=number;i++)
    {
        while(number%i==0)
        {
            primefactor=i;
            number=number/i;
            
        }
    }
    cout<<"Largest prime factor:"<<primefactor;
    return 0;
}
