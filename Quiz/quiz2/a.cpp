#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], sum=0;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]) swap(a[i], a[j]);
        }
    }for(int i=1; i<n; i++){
        sum += a[i] - a[i-1] -1;
    }cout << sum;
}