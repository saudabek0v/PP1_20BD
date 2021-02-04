#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;
multimap<string, string> list;
int main(){
    int n; cin >> n;
    string our;
    vector<string> shop;
    set<string> acc;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        shop.push_back(s);
    }int m; cin >> m;
    for(int i=0; i<m; i++){
        string s, t;
        cin >> s >> t;
        list.insert(make_pair(s, t));
    }cin >> our;
    multimap<string, string>::iterator it;
    for(it = list.begin(); it != list.end(); it++){
        if(it->first == our || it->second == our){
            if(it->first != our){
                for(int i=0; i<shop.size(); i++){
                    if(shop[i] == it->first){
                        acc.insert(it->first);
                        break;
                    }
                }
            }else{
                for(int i=0; i<shop.size(); i++){
                    if(shop[i] == it->second){
                        acc.insert(it->second);
                        break;
                    }
                }
            }
        }
    }set<string>::iterator i;
    cout << acc.size() << '\n';
    for(i = acc.begin(); i != acc.end(); i++)
    cout << *i << ' ';
}