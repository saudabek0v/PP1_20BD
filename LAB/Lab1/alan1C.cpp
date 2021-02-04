#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int y1, y2, y3, y4;
    y4 = x%2;
    x = x/2;
    y3 = x%2;
    x = x/2;
    y2 = x%2;
    x = x/2;
    y1 = x%2;

    cout << y4*8 + y3*4 + y2*2 + y1*1;
}