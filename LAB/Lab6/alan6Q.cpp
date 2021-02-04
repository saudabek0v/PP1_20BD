#include <iostream>
#include <iomanip>
using namespace std;
double per(double n, double m){
    double x = m / n * 100;
    cout << setprecision(6) << x;
}
int main(){
    int n, m;
    cin >> n >> m;
    per(n, m);
}