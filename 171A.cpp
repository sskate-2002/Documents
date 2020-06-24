#include<iostream>
using namespace std;
int main(){
    char a;
    bool small = false;
    cin >> a;
    string alp = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 26; i++){
        if(a == alp[i]){
            small = true;
            break;
        }
    }
    if(small) cout << 'a' << endl;
    else cout << 'A' << endl;
}
