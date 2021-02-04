#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(x % 2 != 0)
        cout<<x<<" ";
    }
    
}