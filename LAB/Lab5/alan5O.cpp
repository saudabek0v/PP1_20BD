#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    char most=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>most) most=a[i];
    }cout << most;
}