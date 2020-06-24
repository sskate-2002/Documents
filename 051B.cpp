#include<iostream>
using namespace std;
int main(){
    int K, S, count = 0, Z;
    cin >> K >> S;
    for(int X = 0; X <= K; X++){
        for(int Y = 0; Y <= K ; Y++){
            Z = S - X - Y;
            if(Z <= K && Z >= 0) count++;
        }
    }
    cout << count << endl;
}
