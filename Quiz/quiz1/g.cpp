#include <iostream>
using namespace std;
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int high=0;
    int days=0;
    if(a<n && a<=b){
        cout << "NO";
        return 0;
    }else{
        while(n>=high){
            high+=a;
            days++;
            if(high>=n){
                cout << days;
                return 0;
            }high-=b;
        }
    }
}