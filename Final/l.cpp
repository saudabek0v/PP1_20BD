#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int t; cin >> t;
    vector<int> res;
    for(int a=0; a<t; a++){
        int n; cin >> n;
        vector<int> pl;
        map<int, int> cnt;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            pl.push_back(x);
            cnt[x]++;
        }map<int, int>::iterator it;
        bool ch = false;
        for(it = cnt.begin(); it != cnt.end(); it++){
            if(it->second == 1){
                for(int i=0; i<pl.size(); i++)
                    if(it->first == pl[i]) res.push_back(i+1);
                ch = true;
                break;
            }
        }if(ch == false) res.push_back(0);
    }
    for(int i=0; i<res.size(); i++){
        if(res[i] != 0) cout << res[i] << '\n';
        else cout << "ZA WARUDO\n";
    }
}