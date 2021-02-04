#include <iostream>
using namespace std;
int main(){
    int n, m;
    int first, second;
    cin >> n >> m;
    first = m / 100;
    second = m % 10;
    cout << n + first + second; 
}
