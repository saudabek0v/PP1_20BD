#include <iostream>
using namespace std;
int simple(int n){
    if(n == 0) return 0;
    simple(n-1);
    cout << n << ' ';
}
int main(){
    int n;
    cin >> n;
    simple(n);
}