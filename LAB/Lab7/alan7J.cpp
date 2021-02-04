#include <iostream>
using namespace std;
int heater(int n){
    if(n == 0) return 0;
    return (n % 10) / 2 + heater(n / 10);
}
int main(){
    int n;
    cin >> n;
    cout << heater(n);
}