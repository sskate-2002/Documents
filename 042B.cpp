#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N, L;
    string ans = "";
    cin >> N >> L;
    vector<string> S(N);
    for(int i = 0; i < N; i++){
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    for(int i = 0; i < N; i++){
        ans += S[i];
    }
    cout << ans << endl;
}
