#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> name;
    vector<int> ball;
    for(int i=0; i<n; i++){
        int x;
        string s;
        cin >> s >> x;
        name.push_back(s);
        ball.push_back(x);
    }sort(name.begin(), name.end());
    sort(ball.begin(), ball.end());
    for(int i=0; i<name.size(); i++)
        cout << name[i] << ' ' << ball[i] << '\n';
}