#include<iostream>
using namespace std;

int sumofNnumber(int n)
{
    if(n==0)
    {
        return 0;
    }    
    else
    {
        return sumofNnumber(n-1)+n;
    }
}


int main()
{   
    int n=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<sumofNnumber(n)<<endl;
    return 0;
}