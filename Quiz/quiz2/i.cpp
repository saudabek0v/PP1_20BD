#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int x=0, y=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'F') y+=1;
        else if(s[i] == 'B') y-=1;
        else if(s[i] == 'L') x-=1;
        else if(s[i] == 'R') x+=1;
    }if(x==0 && y==0){
        cout << "Chill Yelnur";
        return 0;
    }while(y != 0){
        if(y<0){
            cout << "F";
            y++;
        }else{
            cout << "B";
            y--;
        }
    }while(x != 0){
        if(x>0){
            cout << "L";
            x--;
        }else{
            cout << "R";
            x++;
        }
    }
}