#include <iostream>
using namespace std;
int main()
{
    int y;
    cin >> y;
    if((y%4 == 0 && y%100 != 0) || y%400 == 0){
        if(y<10){
            cout<<"12/09/000"<<y;
        }
        if(y<100 && y>=10){
            cout<<"12/09/00"<<y;
        }
        if(y<1000 && y>=100){
            cout<<"12/09/0"<<y;
        }
        if(y<1000 && y>=1000){
            cout<<"12/09/"<<y;
        }
    }else{
        if(y<10){
            cout<<"13/09/000"<<y;
        }
        if(y<100 && y>=10){
            cout<<"13/09/00"<<y;
        }
        if(y<1000&& y>=100){
            cout<<"13/09/0"<<y;
        }
        if(y<1000&& y>=1000){
            cout<<"13/09/"<<y;
        }
    }
}