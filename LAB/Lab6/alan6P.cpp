#include <iostream>
using namespace std;
int mod(int n){
    if(n<0) n *= -1;
    return n;
}
int main(){
    int n;
    cin >> n;
    cout << mod(n);
}