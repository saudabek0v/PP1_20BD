#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(double i=1; i<=sqrt(n); i++){
        if(n/i==i){
            cout<<"Yes";
            return 0;
        }

    }
    cout << "No";
}