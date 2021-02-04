#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int x0, y0, n;
    pair<int, int> p[1000];
    pair<double, int> indx[1000];
    cin >> x0 >> y0 >> n;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        double res = sqrt(pow(x-x0, 2) + pow(y-y0, 2));
        indx[i].first = res;
        indx[i].second = i;
        p[i].first = x;
        p[i].second = y;
    }
    sort(indx, indx+n);
    for(int i=0; i<n; i++)
        cout << p[indx[i].second].first << ' ' <<  p[indx[i].second].second << '\n';
}