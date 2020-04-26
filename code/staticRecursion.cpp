#include<iostream>
using namespace std;


int u = 0;
int fun1(int n)
{   
    if(n>0)
    {   
        u++;
        return fun1(n-1)+u;

    }
    return 0;
}

int main()
{
    int x = 5;
    cout<<fun1(x);
    
    
    return 0;
}