#include <iostream>
#include <set>
using namespace std;
int main(){
    string t, s;
    cin >> t >> s;
    set<int> same;
    int i = 0;
    while(t.find(s) != -1){
        same.insert(t.find(s));
        i = t.find(s);
        t[i] = '!';
    }set<int>::iterator it;
    for(it = same.begin(); it != same.end(); it++)
        cout << *(it) << ' ';
}