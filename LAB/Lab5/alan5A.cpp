#include <iostream>
using namespace std;
int main(){
    int a=0, a1=0;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=97 && s[i]<=122) a++;
        else a1++;
    }cout << a << " " << a1;
}