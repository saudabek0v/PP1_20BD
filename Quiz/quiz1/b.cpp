#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int x, y;
    cin >> x >> y;
    int i, j;
    cin >> i >> j;
    if(a+x+i>b+y+j){
        cout << "Grats Yelnur";
    }else if(a+x+i<b+y+j){
        cout << "Hee Hee Losers";
    }else{
        cout << "Draw";
    }
}