#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N, count = 0;
    bool is_notDivisible;
    cin >> N;
    vector<int> A_s(N);
    for(int k = 0; k < N; k++) cin >> A_s.at(k);
    sort(A_s.begin(), A_s.end());
    reverse(A_s.begin(), A_s.end());
    for(int i = N - 1; i >= 0 ; i--){
        is_notDivisible = true;
        for(int j = N - 2; j >= 0; j--){
              if (A_s.at(i) % A_s.at(j) == 0){
                  is_notDivisible = false;
                  break;
              }

        }
        if(is_notDivisible == true) count++;
        N--;
    }
    cout << count << endl;
}
