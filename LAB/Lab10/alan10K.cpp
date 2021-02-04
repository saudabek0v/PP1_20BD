#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector<int> v;
bool prime(int a){
    if(a < 0) a *= -1;
    if(a == 2 || a == 3) return true;
    if(a == 0 || a == 1) return false;
    for(int j = 2; j <= sqrt(a); j++)
        if(a % j == 0) return false;
    return true;
}
int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    cout << count_if(v.begin(), v.end(), prime);
}