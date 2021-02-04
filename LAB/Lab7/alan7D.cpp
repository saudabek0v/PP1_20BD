#include <iostream>
using namespace std;
void sum_of_d(string s, long long res, int i){
    if(i == s.size()){
        cout << res;
        return;
    }res += int(s[i]) - 48;
    sum_of_d(s, res, i+1);
}
int main(){
    string s;
    cin >> s;
    long long res = 0;
    sum_of_d(s, res, 0);
}