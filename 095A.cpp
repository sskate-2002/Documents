#include<iostream>
using namespace std;

int main(){
    string S;
    int count = 0, y;
    cin >> S;
    for(int i = 0; i < 3; i++){
        if(S[i] == 'o') count++;
    }
    y = 700 + 100 * count;
    cout << y << endl;
}
