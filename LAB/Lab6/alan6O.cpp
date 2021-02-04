#include <iostream>
using namespace std;
int lucky(int n){
    int last = n % 10;
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }if(sum % last == 0) cout << "Yes";
    else cout << "No";
}
int main(){
    int n;
    cin >> n;
    lucky(n);
}