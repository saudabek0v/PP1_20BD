#include <iostream>
using namespace std;
void search(int a[], int n, int x, int indx){
    if(indx == n){
        cout << "No";
        return;
    }if(a[indx] == x){
        cout << "Yes";
        return;
    }search(a, n, x, indx+1);
}
int main(){
    int n, x;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    cin >> x;
    search(a, n, x, 0);
}