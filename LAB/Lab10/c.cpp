#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<char> sq;
    for(int i=0; i<s.size(); i++)
        sq.push(s[i]);
    while(true){
        bool ch = true;
        stack<char> x;
        while(!x.empty()){
            char top = x.top();
            x.pop();
            int n = int((x.top() - '0') * 10) + int(top - '0');
            for(int i=4; i<10; i++) if(n == i*i) ch = false;
        }
    }
}