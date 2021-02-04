#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, tobig, tosmall;
    cin >> n >> tobig >> tosmall;
    vector<char> v;
    for(int i=0; i<n; i++){
        char x;
        cin >> x;
        v.push_back(x);
    }int cnt_big = 0, cnt_small = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>='A' && v[i]<='Z') cnt_big++;
        else cnt_small++;
    }if(cnt_small == 0 || cnt_big == 0){
        cout << 0;
        return 0;
    }else{
        int money_big = tobig * cnt_big;
        int money_small = tosmall * cnt_small;
        if(money_small < money_big) cout << money_small;
        else cout << money_big;
    }
}