#include <iostream>
using namespace std;
void scanner(int n, int x, int y, char a[][]){

}
int main(){
    int n, x, y, res = 1;
    cin >> n >> x >> y;
    char a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) cin >> a[i][j];
    scanner(n, x, y, a);
}