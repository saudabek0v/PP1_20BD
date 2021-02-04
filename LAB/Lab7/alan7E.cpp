#include <iostream>
using namespace std;
long long devider(long long n){
    if(n == 1){
        cout << "Yes";
        return 0;
    }if(n == 0|| n == 3){
        cout << "No";
        return 0;
    }devider(n/2);
}
int main(){
    int n;
    cin >> n;
    devider(n);
}