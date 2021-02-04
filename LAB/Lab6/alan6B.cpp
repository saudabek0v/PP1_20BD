#include <iostream>
using namespace std;
int difference(int n){
    int a[n], b[n], d=0, x;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    for(int i=0; i<n; i++){
        x = a[i] - b[i];
        if(x<0) x *= -1;
        cout << x << ' ';
    }  
}int main(){
        int n;
        cin >> n;
        difference(n);
}