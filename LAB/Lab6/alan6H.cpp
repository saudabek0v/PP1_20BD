#include <iostream>
using namespace std;
void even(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9'){
            cout << "Not valid";
            return 0;
        }cout << "Valid";
    }
}
int main(){
    string s;
    cin >> s;
    even(s);
}