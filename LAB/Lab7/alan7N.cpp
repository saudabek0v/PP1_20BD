#include <iostream>
#include <algorithm>
using namespace std;
void cheater(int a[], int n, int i, int k){
    if(i == n - 1){
        cout << "no";
        return;
    }if(a[i] + k > a[i+1]){
        cout << "cheater";
        return;
    }cheater(a, n, i+1, k);
}
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    cheater(a, n, 0, k);
}