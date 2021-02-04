#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    a[0][0]=0;
    for(int i=0, j=1; j<n; j++){
        a[i][j]=j;
    }for(int j=0, i=1; i<n; i++){
        a[i][j]=i;
    }for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            a[i][j]=i*j;
        }
    }for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }cout << "\n";
    }
}