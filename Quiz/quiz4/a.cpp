#include <iostream>
#include <map>
#include <vector>
using namespace std;
map< pair<int, int>, int> m;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        if(a != b){
            pair<int, int> p1 (a, b);
            pair<int, int> p2 (b, a);
            m[p1]++;
            m[p2]++;
            if(m[p1]>0) v.push_back(m[p1] - 1);
            else if(m[p2]>0) v.push_back(m[p2] - 1);
        }else{
            pair<int, int> p (a, b);
            m[p]++;
            if(m[p]>0) v.push_back(m[p] - 1);
        }
    }
    for(int i=0; i<v.size(); i++)
        cout << v[i] << '\n';
}