#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    cout << a[1] << " ";
    for(int i=2; i<=n; i++){
        if(a[i]!=a[i-1]){
            cout << a[i] << " ";
        }
    }
}