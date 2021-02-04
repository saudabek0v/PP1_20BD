#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int x = 0;
long long gen(){
    x++;
    return pow(x-1, x-1);
}
int main(){
    int n;
    cin >> n;
    vector<long long> v(n+1); 
    generate(v.begin(), v.end(), gen);
    for(int i=0; i<v.size(); i++)
        cout << v[i] << ' ';
}  