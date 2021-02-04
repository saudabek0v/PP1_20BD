#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s; cin >> s;
    vector<char> v, sorted;
    for(int i=0; i<s.size(); i++) v.push_back(s[i]);
    sorted = v;
    sort(sorted.begin(), sorted.end());
    do{
        v = sorted;
        reverse(v.begin(), v.end());
        if(v == sorted){
            cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    }while(next_permutation(sorted.begin(), sorted.end()));
    cout << "JOJO";
}