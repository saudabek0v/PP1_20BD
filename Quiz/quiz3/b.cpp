#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> vec;
    vector<string> cheaters;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        vec.push_back(s);
    }for(int i=1; i<vec.size(); i++){
        bool a = false;
        for(int j=i-1; j>=0; j--) if(vec[i] == vec[j]) a = true;
        if(a){
            bool check = true;
            if(cheaters.size() == 0) cheaters.push_back(vec[i]);
            else{
                for(int k=0; k<cheaters.size(); k++) if(cheaters[k] == vec[i]) check = false;
                if(check) cheaters.push_back(vec[i]);
            }
        }
    }if(cheaters.size() == 0) cout << "Understandable, have a great day";
    else for(int i=0; i<cheaters.size(); i++) cout << cheaters[i] << '\n';
}