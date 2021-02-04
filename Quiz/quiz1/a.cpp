#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int res;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    int max=a[1];
    int min=a[1];

    for(int i=1;i<=n;i++){
        if (a[i]>max){
            max = a[i];
        }
        if (a[i] < min){
            min = a[i];
        }
    }
    res = max - min;

    cout << res;

}
