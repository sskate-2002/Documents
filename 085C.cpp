#include<iostream>

using namespace std;

int main(){
    int N, Y;
    bool TF = false;
    cin >> N >> Y;
    for(int x = 0; x <= Y / 10000; x++){
        for(int y = 0; y <= (Y - 10000 * x) / 5000; y++){
            int z = N - x - y;
            if(x * 10000 + y * 5000 + z * 1000 == Y){
                cout << x << ' ' << y << ' ' << z << endl;
                TF = true;
                break;
                }
        }  
        if(TF == true) break;
    }
    if(TF == false) cout << -1 << ' ' << -1 << ' ' << -1 << endl;
}
