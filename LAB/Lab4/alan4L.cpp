#include <iostream>
using namespace std;
int main()
{
    int n, m, x, y, sum=0;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) cin >> a[i][j];
    cout << "coordinates of min elements:\n";
    for(int j=0; j<m; j++){
        int min=a[0][j];
        x=0; 
        y=j;
        for(int i=0; i<n; i++){
            if(min>a[i][j]){
                min=a[i][j];
                x=i;
                y=j;
            }
        }
        cout << x+1 << ";" << y+1 << "\n";
        sum+=min;
    }cout << "Their sum:\n" << sum;
}