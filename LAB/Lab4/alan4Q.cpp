#include <iostream>
using namespace std;
int main()
{
    int n, m, p;
    cin >> n;
    m=2*n-1;
    p=n-1;
    char a[m];
    for(int i=0; i<m; i++) a[i]='.';
    for(int i=0; i<n; i++){
        a[p-i]='*';
        a[p+i]='*';
        for(int j=0; j<m; j++) cout << a[j];
        cout << "\n";
    }
}