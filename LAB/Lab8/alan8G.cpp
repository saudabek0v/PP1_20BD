#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void isPrime(vector<int> v, int k, int res){
    for(int i=0; i<v.size(); i++){
        bool cnt = true;
        if(v[i] >= k){
            for(int x=2; x<=sqrt(v[i]); x++){
                if(v[i] % x == 0) cnt = false;
            }if(cnt == true) res++;
        }
    }cout << res;
}
int main(){
    int n, vec;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> vec;
        v.push_back(vec);
    }int k, res = 0;
    cin >> k;
    isPrime(v, k, res);
}