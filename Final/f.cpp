#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> ff;
    for(int x=0; x<n; x++){
        string s, t;
        cin >> s >> t;
        reverse(s.begin(), s.end());
        reverse(t.begin(), t.end());
        int a = 0, b = 0;
        for(int i=0, k = s.size()-1; i<s.size(); i++){
            a += int(s[i]-'0') * pow(10, k);
            k--;
        }
        for(int i=0, k = t.size()-1; i<t.size(); i++){
            b += int(t[i]-'0') * pow(10, k);
            k--;
        }int cnt = a + b;
        string res;
        while(cnt > 0){
            res += cnt % 10 + '0';
            cnt /=10;
        }for(int i=0, k = res.size()-1; i<res.size(); i++){
            cnt += int(res[i]-'0') * pow(10, k);
            k--;
        }ff.push_back(cnt);
    }for(int i=0; i<ff.size(); i++)
        cout << ff[i] << '\n';
}