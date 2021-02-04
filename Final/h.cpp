#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    char x[26][26];
    vector<char> v;
    for(int i=0; i<26; i++) v.push_back(i+'a');
    for(int i=0; i<26; i++){
        for(int j=0; j<26; j++){
            x[i][j] = v[j];
        }rotate(v.begin(), v.begin()+1, v.end());
    }
    int j=0;
    for(int i=0; i<s.size(); i++){
        cout << x[int(t[j]-'a')][int(s[i]-'a')];
        j++;
        if(j == t.size()) j = 0;
    }
}