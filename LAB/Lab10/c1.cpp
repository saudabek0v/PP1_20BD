#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<int> v;
    for(int i=0; i<s.size(); i++)
        v.push_back(s[i] - '0');
    while(true){
        bool ch = true;
        for(int i=0; i<v.size(); i++){
            int n = v[i]*10 + v[i+1];
            for(int j=4; j<10; j++){
                if(j*j == n){
                    v.erase(v.begin() + i, v.begin() + i + 2);
                    i-=2;
                    ch = false;
                }
            }
        }if(ch){
            reverse(v.begin(), v.end());
            if(v.empty()) cout << "Stack is empty";
            else for(int i=0; i<v.size(); i++) cout << v[i];
            return 0;
        }
    }
}