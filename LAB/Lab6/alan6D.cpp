#include <iostream>
using namespace std;
int book(int n){
    int a[n], x;
    for(int i=0; i<n; i++) cin >> a[i];
    cin >> x;
    for(int i=0; i<n; i++){
        if(a[i] == x){
            cout << "Yes";
            return 0;
        }
    }cout << "No";
}
int main(){
    int n;
    cin >> n;
    book(n);
}