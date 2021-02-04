#include <iostream>
using namespace std;
int maxx(){
    int a[4];
    for(int i=0; i<4; i++) cin >> a[i];
    int max = a[0];
    for(int i=1; i<4; i++){
        if(a[i] > max) max = a[i];
    }cout << max;
}
int main(){
    maxx();
}