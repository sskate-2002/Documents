#include<iostream>
using namespace std;
int Av(int a, int b){
    int c;
    c = a - b;
    if (c < 0) return -c;
    else return c;
}
int main(){
    int x, y;
    cin >> x >> y;
    cout << Av(x, y) << endl;

}
