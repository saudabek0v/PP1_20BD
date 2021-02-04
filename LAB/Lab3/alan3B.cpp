#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin>>n;
    int pl =0;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(x > 0)
        {
        pl +=1;
        
        }
    }
    cout<<pl<<endl;
}