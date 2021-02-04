#include <iostream>
#include <queue>
using namespace std;
int main(){
    string s;
    cin >> s;
    queue<char> q;
    for(int i=0; i<s.size(); i++) q.push(s[i]);
    while(!q.empty()){
        if(q.front() == '0'){
            cout << q.front();
            q.pop();
        }if(q.front() == '1'){
            char x = q.front();
            q.pop();
            if(q.front() == '1') q.pop();
            else cout << x;
        }
    }
}