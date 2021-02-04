#include <iostream>
using namespace std;
int main()
{
    int k, x=0;
    cin >> k;
    int a[k][k];
    for(int i=0; i<k; i++)
        for(int j=0; j<k; j++) cin >> a[i][j];
    int max=a[0][0];
    for(int i=0; i<k; i++){
        if(max<a[i][i]){
            max=a[i][i];
            x=i;
        }
    }cout << "Maximum element is: " <<max<<" with coordinates: "<<x+1<<";"<<x+1;
}