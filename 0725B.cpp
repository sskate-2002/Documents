#include<iostream>
using namespace std;

int main(){
    int A, B, C, K;
    int count = 0;

    cin >> A >> B >> C >> K;
    while (A >= B){
        B *= 2;
        count++;
    }
    while (B >= C){
        C *= 2;
        count++;
    }
    if(count <= K){
        cout << "Yes" << endl;
    }

    else {
        cout << "No" << endl;
    }

}
