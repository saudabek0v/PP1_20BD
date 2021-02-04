#include <iostream>
using namespace std;
void max_dig(string s, int indx, char max){
    if(indx == s.size()){
        cout << max;
        return;
    }if(max < s[indx]) max = s[indx];
    max_dig(s, indx+1, max); 
}
int main(){
    string s;
    cin >> s;
    char max = s[0];
    max_dig(s, 0, max);
}