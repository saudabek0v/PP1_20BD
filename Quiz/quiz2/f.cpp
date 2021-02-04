#include <iostream>
using namespace std;
int main()
{
    int n, m, x, cnt=0;
    cin >> n >> m >> x;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin >> a[i][j];
    }int p=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == x){
                p=1;
            }
        }if(p) cnt++;
        p=0;
    }cout << cnt;
}