#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a0=0, a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0') a0++;
        if(s[i] == '1') a1++;
        if(s[i] == '2') a2++;
        if(s[i] == '3') a3++;
        if(s[i] == '4') a4++;
        if(s[i] == '5') a5++;
        if(s[i] == '6') a6++;
        if(s[i] == '7') a7++;
        if(s[i] == '8') a8++;
        if(s[i] == '9') a9++;
    }if(a0 != 0) cout << "0: " << a0 << endl;
    if(a1 != 0) cout << "1: " << a1 << endl;
    if(a2 != 0) cout << "2: " << a2 << endl;
    if(a3 != 0) cout << "3: " << a3 << endl;
    if(a4 != 0) cout << "4: " << a4 << endl;
    if(a5 != 0) cout << "5: " << a5 << endl;
    if(a6 != 0) cout << "6: " << a6 << endl;
    if(a7 != 0) cout << "7: " << a7 << endl;
    if(a8 != 0) cout << "8: " << a8 << endl;
    if(a9 != 0) cout << "9: " << a9 << endl;
}