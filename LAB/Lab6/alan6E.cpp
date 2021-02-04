#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int hypo(int a, int b){
    double c = sqrt(a*a + b*b);
    cout << setprecision(4) << c;
}
int main(){
    int a, b;
    cin >> a >> b;
    hypo(a, b);
}