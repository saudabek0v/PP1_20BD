#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    string b = a;
    sort(a.begin(),a.end());
    if(a == b){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}