#include<iostream>
#include<vector>
using namespace std;
int Av(int a, int b){
    int c;
    c = a - b;
    if (c < 0) c = c * (-1);
    return c;
}

int main(){
    int X, N, sub = 101, ans = -1;
    cin >> X >> N;
    vector<int> p(N), counters(101);
    for(int i = 0; i < N; i++){
        cin >> p.at(i);
        counters.at(p.at(i))++;
    }
    for(int j = 100; j >= -1; j--){
        if(j >= 0){
            if(counters.at(j) == 0){
                if(Av(j, X) <= sub){
                    sub = Av(j, X);
                    ans = j;
                }
            }
        }
       else{
           if(Av(j, X) <= sub){
               sub = Av(j, X);
               ans = j;
           }
        }
    }
    cout << ans << endl;
}
