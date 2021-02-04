#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin >> a[i][j];
    }
    for(int j=n-1; j>=-n+1; j--){
        for(int i=0; i<n; i++){
            if(i+j<n && i+j>=0) cout << a[i][i + j] << ' ';
        }
        cout << "\n";
    }
}