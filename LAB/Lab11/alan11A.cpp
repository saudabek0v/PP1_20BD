#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s == "SAT") cout << 1;
    if(s == "SUN") cout << 7;
    if(s == "MON") cout << 6;
    if(s == "TUE") cout << 5;
    if(s == "WED") cout << 4;
    if(s == "THU") cout << 3;
    if(s == "FRI") cout << 2;
}