#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int N, m = 0, d2;
    double ans;
    cin >> N;
    vector<int> x(N), y(N);
    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            d2 = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            if(m < d2){
                m = d2;
            }
        }
    }
    ans = sqrt(m);
    cout << ans << endl;
}
