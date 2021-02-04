#include <iostream>
using namespace std;
void inf(long long res){
    int x;
    cin >> x;
    if(x == 0){
        cout << res;
        return;
    }
    inf(res + x);
}
int main(){
    long long res = 0;
    inf(res);
}