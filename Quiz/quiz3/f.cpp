#include <iostream>
#include <cmath>
using namespace std;
void PrimeFactorization(int n){
    for(int i=2; i<=sqrt(n); i++){
        bool ch = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i % j == 0) ch = false;
        }if(ch){
            while(n % i == 0){
                cout << i << ' ';
                n /= i;
            }
        }
    }if (n > 1) cout << n;
}int main(){
    int n;
    cin >> n;
    PrimeFactorization(n);
}