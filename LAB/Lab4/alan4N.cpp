#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, p=1;
    cin >> n;
    for(int i=2; i<=n; i++){
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
                p=0;
            }
        }if(p==1){
            cout << i << " is prime\n";
        }p=1;
    }
}