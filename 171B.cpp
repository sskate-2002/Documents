#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N, K, sum = 0;
    cin >> N >> K;
    vector<int> p(N);
    for(int i = 0; i < N; i++){
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    for(int j = 0; j < K; j++){
        sum += p[j];
    }
    cout << sum << endl;
}
