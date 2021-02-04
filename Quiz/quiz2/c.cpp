#include <iostream>
using namespace std;
int b[1001];
int main()
{
    int n, a; 
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        b[a]+=1;
    }int max = 0;
    for(int i=0; i<1001; i++)
        if(max<b[i]) max = b[i];
    for(int i = 1000; i>=0; i--)
        if(b[i] == max) cout << i << ' ';
}