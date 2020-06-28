#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int N, K, ans = 0;
    cin >> N >> K;
    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    map<int, int> numbers;
    for(int i = 0; i < N; i++){
        numbers[A[i]];
    }
    for(auto p : numbers){
        auto k = p.first;
        for(int i = 0; i < N; i++){
            if(k == A[i]) numbers[k]++;
        }
    }
    vector<int> vec;
    for(auto p : numbers){
        auto v = p.second;
        vec.push_back(v);
    }
    sort(vec.begin(), vec.end());
    if(numbers.size() > K){
        for(int i = 0; i < numbers.size() - K; i++){
            ans += vec[i];
        }
    }
    cout << ans << endl;
}
