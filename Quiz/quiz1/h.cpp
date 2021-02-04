#include <iostream>

using namespace std;
int main()
{
    int a;
    cin >> a;
    int even = 0;
    int odd = 0;
    while(a != 0){
        if(a%2==0){
            even += a%10 ;
            a = a/10;
        }else{
            odd += a%10 ;
            a = a/10;
        }
    }

    if(even > odd){  
        cout << even;
    }else if(even < odd){
        cout << odd;
    }else {
        cout << even + odd;
    }
}