#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }for(int i=1; i<=n; i++){
        if(a[i]<=437){
            cout << "Crash " << i;
            return 0;
        }
    }cout << "No crash";
}