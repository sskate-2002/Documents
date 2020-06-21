#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N, X, ans;
    cin >> N >> X;
    vector<int> m(N);
    for(int i = 0; i < N; i++){
        cin >> m[i];
        X -= m[i];
    }
    sort(m.begin(), m.end());
    ans = N + X / m[0];
    cout << ans << endl;
}
