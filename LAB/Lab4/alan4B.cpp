#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> a[i][j];
    int max1=a[0][0], max2=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(max1<a[i][j]) max1=a[i][j];
        }
    }for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(max2<a[i][j] && a[i][j]<max1) max2=a[i][j];
        }
    }cout << max2;
}