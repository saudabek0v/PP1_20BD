#include <iostream>
using namespace std;
int main()
{
    int n, k=1;
    cin >> n;
    int p=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==p){
                cout << k;
                k++;
                p--;
            }else{
                cout << ".";
            }
        }cout << "\n";
    }
}