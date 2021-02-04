#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x, seven=0;

    for (int i = 1; i <= n; ++i)
    {
        cin>>x;
        if (x%10==7)
            seven = seven+1;
          
            
    }
    cout<< seven << endl;
}