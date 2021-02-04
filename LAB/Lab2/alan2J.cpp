#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a, c=0;

    for (int i = 1; i <= n; ++i)
    {
        cin>>a;
        while(a>0)
        {
            if(a%10==0)
            c++;
            a/=10;
        }   

    }
    cout<< c << endl;
}