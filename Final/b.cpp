#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    char a[n*4-1];
    int mid1 = n*2-1, mid2 = n*2-1;
    for(int k=0; k<n; k++){
        for(int i=0; i<n*4-1; i++) a[i] = ' ';
        if(k == n-1){
            while(mid1 <= mid2){
                a[mid1] = '*'; a[mid2] = '*';
                mid1++;
                mid2--;
            }for(int i=0; i<n*4-1; i++) cout << a[i];
            cout << '\n';
        }else{
            a[mid1] = '*'; a[mid2] = '*';
            for(int i=0; i<n*4-1; i++) cout << a[i];
            cout << '\n';
            mid2++;
            mid1--;
        }
    }mid1 = n-1; mid2 = n-1;
    int mid11 = n*3-1, mid22 = n*3-1;
    for(int k=0; k<n; k++){
        for(int i=0; i<n*4-1; i++) a[i] = ' ';
        if(k == n-1){
            while(mid1 <= mid2){
                a[mid1] = '*'; a[mid2] = '*';
                a[mid11] = '*'; a[mid22] = '*';
                mid2--; mid1++;
                mid11++; mid22--;
            }for(int i=0; i<n*4-1; i++) cout << a[i];
            cout << '\n';
            return 0;
        }
        a[mid1] = '*'; a[mid2] = '*';
        a[mid11] = '*'; a[mid22] = '*';
        for(int i=0; i<n*4-1; i++) cout << a[i];
        cout << '\n';
        mid2++; mid1--;
        mid11--; mid22++;
    }
}