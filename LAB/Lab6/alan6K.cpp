#include <iostream>
using namespace std;
int summ(int a){
    int cnt = 0;
    while(a != 0){
        cnt += a % 10;
        a /= 10;
    }cout << cnt;
}
int main(){
    int a;
    cin >> a;
    summ(a);
}