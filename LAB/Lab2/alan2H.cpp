#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin>>n;
    int  even=0, odd=0;
    for (int i = 1; i <= n ; i++)
    {
        cin>>x;
        if (x%2==1){
            odd += 1;
        }else if(x%2==0){
            even += 1;
        }
    }
    cout<< even <<" "<< odd<< endl;
}