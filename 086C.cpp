#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;
int main(){
    int N;
    int64_t time, d;
    bool can = true;
    cin >> N;
    vector <int> t(N), x(N), y(N);

    for(int i = 1; i <= N; i++){
        cin >> t[i] >> x[i] >> y[i];
    }

    for(int j = 0; j < N; j++){
        time = t[j+1] - t[j];
        d = abs(x[j+1] - x[j]) + abs(y[j+1] - y[j]);
        if(time < d){
            can = false;
            break;
        }
        if ((time - d) % 2 == 1){
            can = false;
            break;
        }
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
}
