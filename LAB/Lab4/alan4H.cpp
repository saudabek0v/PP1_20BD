#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int min=0, p=1, next;
    for(int j=0; j<m; j++) min+=a[0][j];
    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            next+=a[i][j];
        }
        if(min>next){
                p=i+1;
                min=next;
        }next=0;
    }cout << p;
}