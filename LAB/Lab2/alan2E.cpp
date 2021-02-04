#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin>>x>>y;

    if(x==y)
    {
        cout<<"0";
    }
    if(x>y)
    {
        cout<<"1";
    }
    if(x<y)
    {
        cout<<"2";
    }
}