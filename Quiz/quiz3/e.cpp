#include <iostream>
#include <set>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    set<int> uniq;
    for(int i=0; i<n; i++){
        cin >> x;
        uniq.insert(x);
    }if(uniq.size() == n) cout << "YES";
    else cout << "NO";
}