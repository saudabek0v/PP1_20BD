#include <iostream>
using namespace std;
int main()
{
    int g;
    cin>>g;
    int x, max;
    
    for (int i = 1; i < g && cin >> x; i++)
    {
        if (max < x)
            max = x;
    }
    cout<< max << endl;
}