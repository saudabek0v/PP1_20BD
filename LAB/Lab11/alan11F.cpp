#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> dev;
    for(int i=1; i<=a && i<=b; i++)
        if(a%i == 0 && b%i == 0) dev.push_back(i);
    reverse(dev.begin(), dev.end());
    cout << dev[k-1];
}