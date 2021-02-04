#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a, b;
    a.push_back(2);
    a.push_back(3);
    for(int i=5; i<1000; i++){
        bool ch = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i % j == 0){
                ch = false;
                break;
            }
        }if(ch) a.push_back(i);
    }b = a;
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i] + b[j] == n){
                cout << a[i] << ' ' << b[j];
                return 0;
            }   
        }
    }
}