#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    double a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin >> a[i][j];
    }for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(double(sqrt(a[i][j])) - int(sqrt(a[i][j])) == 0) a[i][j]=sqrt(a[i][j]);
        }
    }for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cout << a[i][j] << " ";
        cout << "\n";
    }
}