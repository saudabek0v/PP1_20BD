#include <iostream>
using namespace std;
void valid2(string s, int n){
    int cnt = 0, max = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9') cnt++;
        else{
            if(cnt > max) max = cnt;
            cnt = 0;
        }
    }if(max >= n) cout << "Valid";
    else cout << "Not valid"; 
}
int main(){
    string s;
    int n;
    cin >> s >> n;
    valid2(s, n);
}