#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); ){
        char x=s[0];
        int p=0;
        for(int j=1; j<s.size(); j++){
            if(s[j] == x){
                p=1;
                s = s.erase(j, 1);
                j--;
            }
        }if(p) cout << x;
        s = s.erase(0, 1);
    }
}