#include <iostream>
using namespace std;
char up(char x){
    if(x >= 'a' && x <= 'z') x -= 32;
    cout << x;
}
int main(){
    char x;
    cin >> x;
    up(x);
}