#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> v;
    string s;
    cin >> s;
    for(int i=s.size()-1; i>=0; i--){
        for(int j=i-1; j>=0; j--){
            if(s[i] == s[j] || s[i] == s[j] + 32 || s[i] == s[j] - 32){
                s.erase(i, 1);
                continue;
            }
        }
    }for(int i=0; i<s.size(); i++) if(s[i]>='A' && s[i]<='Z') s[i] += 32;
    cout << s.size() << '\n';
    sort(s.begin(), s.end());
    for(int i=0; i<s.size(); i++)
        cout << s[i] << ' ';
}