#include <iostream>
#include <vector>
using namespace std;
void bakery(int n, int a[]){
    string s, t;
    for(int x=0; x<n; x++){
        cin >> s >> t;
        if(s.size() == t.size()){
            bool ch = true;
            for(int i=0; i<s.size(); i++){
                if(s[i]=='b' || s[i]=='B' || s[i]=='p' || s[i]=='P'){
                    if(t[i]=='b' || t[i]=='B' || t[i]=='p' || t[i]=='P') continue;
                    else ch = false;
                }if(s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I'){
                    if(t[i]=='e' || t[i]=='E' || t[i]=='i' || t[i]=='I') continue;
                    else ch = false;
                }if(s[i]!='b' && s[i]!='B' && s[i]!='p' && s[i]!='P' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I'){
                    if(s[i]>='A' && s[i]<='Z'){
                        if(s[i]==t[i] || s[i]==toupper(t[i])) continue;
                        else ch = false;
                    }else if(s[i]>='a' && s[i]<='z'){
                        if(s[i]==t[i] || s[i]==tolower(t[i])) continue;
                        else ch = false;
                    }
                }
            }if(ch) a[x]++;
        }
    }
    for(int x=0; x<n; x++){
        if(a[x] == 0) cout << "No\n";
        else cout << "Yes\n";        
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) a[i] = 0;
    bakery(n, a);
}