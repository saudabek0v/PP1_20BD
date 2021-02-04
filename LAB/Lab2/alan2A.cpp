#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if(x % 2 == 0){
        if(2<=x<=5) cout << "Not Super";
        if(6<=x<=20) cout << "Super";
        else cout << "Not Super";   
    }else cout<< "Super";
}