#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    double a=s.size(), b=t.size();
    double c=b/a;
    int x=0;
    if(c - int(c) != 0){
        cout << "NO";
        return 0;
    }else{
        for(int k=1; k<=c; k++){
            for(int i=0; i<a; i++){
                if(s[i] != t[x]){
                    cout << "NO";
                    return 0;
                }x++;
            }
        }
    }cout << "YES";
}