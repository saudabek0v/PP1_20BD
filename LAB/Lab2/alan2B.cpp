#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    if(x % 2 == 0){
        if(x>1, x<6) cout<<"Not Super";
        if(x>5, x<=20) cout<<"Super";
        else cout<<"Not Super";
    }else cout<<"Super";
}