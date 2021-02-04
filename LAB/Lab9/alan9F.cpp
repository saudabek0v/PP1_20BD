#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char> v;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
        v.push_back(s[i]);
    int first = 0, second = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] == '(') first++;
        if(v[i] == ')') second++;
    }if(first == second && v[0] == '(' && v[v.size()-1] == ')') cout << "YES";
    else cout << "NO";
}