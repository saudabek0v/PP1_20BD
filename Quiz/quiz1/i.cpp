#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int h, m, s;
    h = a/3600;
    a = a - h*3600;
    m= a/60;
    a = a - m*60;
    s = a;
    if(h<10){
        cout<<0<<h<<":";
    }else{
        cout<<h<<":";
    }
    if(m<10){
        cout<<0<<m<<":";
    }else{
        cout<<m<<":";
    }
    if(s<10){
        cout<<0<<s;
    }else{
        cout<<s;
    }


}