#include <iostream>
using namespace std;
int main(){
    int n, x=0, y=0;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> a[i][j];
    int max=a[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(max<a[i][j]){
                max=a[i][j];
                x=i, y=j;
            }
        }
    }cout << x+1 << " " << y+1;
}