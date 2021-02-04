#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(true){
        n++;
        int x = n, cnt = 0;
        set<int> s;
        while(x != 0){
            s.insert(x%10);
            x /= 10;
            cnt++;
        }if(s.size() == cnt){
            cout << n;
            return 0;
        }
    }
}