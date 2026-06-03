#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i;
    
    cout<<"The Armstrong number beteen 1 to 1000"<<endl;
    for(i=1;i<=100000;i++)
    {
        int numberofdigit=0;
        int sum=0;
        int number=i;
        while(number>0){
             numberofdigit++;
            number/=10;

        }
        int checknumber=i;
        while(checknumber>0){
            int remainder=checknumber%10;
            sum+=pow(remainder,numberofdigit);
            checknumber/=10;


        }

        if(sum==i){
            cout<<i<<" ";
        }
        

    }


    return 0;
}
