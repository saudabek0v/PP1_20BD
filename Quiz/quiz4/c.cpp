#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
map<char, int> m;
int main(){
    string s;
    cin >> s;
    vector<char> v;
    for(int i=0; i<s.size(); i++)
        v.push_back(s[i]);
    sort(v.begin(), v.end());
    cout << "The anagram variants for string " << s << " are:\n";
    do{
        for(int i=0; i<v.size(); i++) cout << v[i];
        cout << '\n';
    }while(next_permutation(v.begin(), v.end()));
}