#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int cnt = 0, max = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            if(cnt > max) max = cnt;
            cnt = 0;
        }else cnt++;
    }
    string res;
    for(int i=0; i<s.size(); i++){
        if(s[i] != ' ')
            res += s[i];
        else{
            if(res.size() == max){
                cout << res;
                return 0;
            }res.erase();
        }
    }
}