#include<iostream>
using namespace std;
int main(){
    int a, b, x;
    cin >> a >> b;
    if((a + b) % 2 == 1) x = (a + b) / 2 + 1;
    else x = (a + b) / 2;
    cout << x << endl;
}
