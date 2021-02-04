#include <iostream>
#include <cmath>
using namespace std;
void PrimeFactorization(int n, int i){
    if(n == 1) return;
    if(i>sqrt(n) && n>1){
        cout << n;
        return;
    }
    bool ch = true;
    for(int j=2; j<=sqrt(i); j++){
        if(i % j == 0) ch = false;
    }if(ch){
        while(n % i == 0){
            cout << i << ' ';
            n /= i;
        }
    }PrimeFactorization(n, i+1);
}
int main(){
    int n;
    cin >> n;
    int i = 2;
    PrimeFactorization(n, i);
}