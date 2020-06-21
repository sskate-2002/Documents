#include<iostream>
using namespace std;
int main(){
    string s;
    int a, b;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            a = i;
            break;
        }
    }
    for(int j = s.size() - 1; j >= 0; j--){
        if(s[j] == 'Z'){
            b = j;
            break;
        }
    }
    cout << b - a + 1 << endl;
}
