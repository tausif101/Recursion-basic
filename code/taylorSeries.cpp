#include<iostream>
using namespace std;


double e(int x, int n)
{
    static double s = 1;
    if(n==0)
    {
        return s;
    }
    else
    {
        s = 1 + (x*s)/n;
    }
    return s;
}

int main()
{   
    //cout<<fixed;
    //cout<<std::s
    cout<<e(2,10);
    return 0;
}
