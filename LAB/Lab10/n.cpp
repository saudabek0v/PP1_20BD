#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v1, sorted;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v1.push_back(x);
        sorted.push_back(x);
    }sort(sorted.begin(), sorted.end());
    bool ch = false;
    do{
        vector<int> v2;
        v2 = sorted;
        reverse(v2.begin(), v2.end());
        if(v2 == sorted && v2 != v1){
            ch = true;
            for(int i=0; i<n; i++)
                cout << v2[i] << ' ';
        }
    }while(next_permutation(sorted.begin(), sorted.end()));
    if(ch == false) cout << "Impossible";
}