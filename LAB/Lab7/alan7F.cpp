#include <iostream>
using namespace std;
void sum_even(string s, int res, int indx){
    if(indx == s.size()){
        cout << res;
        return;
    }if( (int(s[indx])-48)%2==0) res++;
    sum_even(s, res, indx+1);
}
int main(){
    string s;
    cin >> s;
    int res = 0;
    sum_even(s, res, 0);
}