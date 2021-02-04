#include <iostream>
#include <cmath>
using namespace std;
void nthprime(int n){
    if(n == 1){
        cout << 2;
        return;
    }int nth = 1;
    int x = 3;
    for( ; ; ){
        bool prime = true;
        for(int i=2; i<=sqrt(x); i++){
            if(x % i == 0)
                prime = false;
        }if(prime) nth++;
        if(nth == n){
            cout << x;
            return;
        }x++;
    }
}
int main(){
    int n;
    cin >> n;
    nthprime(n);
}