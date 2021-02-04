#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    if(n<k)
    {
        cout<< 2;
    }
    else if(n%k==0)
    {
        cout<< n/k*2;
    }
    else if(n%3==0 && k==2)
    {
        cout<<n;
    }
    else if(n%k!=0)
    {
        cout<< n/k*2+2;
    }
}