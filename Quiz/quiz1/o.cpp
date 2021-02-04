#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int first, second, third, forth;
    forth = a%10;
    a /=10;
    third = a%10;
    a /=10;
    second = a%10;
    a /=10;
    first= a%10;
    a /=10;
    if(first==forth && second==third){
        cout << "YES";
    }else{
        cout << "NO";
    }
}