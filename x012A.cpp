//実行時エラー
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N, cp, k;
    int64_t M = 0, sum;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < 3 * N; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    a.erase(a.begin(), a.begin() + N - 1);
    for(int i = 0; i < 2 * N; i++){
        cp = a[0];
        a.push_back(cp);
        a.erase(a.begin());
        vector<vector<int> > teams(N, vector<int>(2));
        sum = 0;
        for(int j = 0; j < N; j++){
            k = j * 2;
            for(int l = 0; l < 2; l++){
                teams.at(j).at(l) = a[k];
                k++;
            }
            sort(teams.at(j).begin(), teams.at(j).end());
            sum += teams.at(j).at(0);
        }
        if(sum > M) M = sum;
    }
    cout << M << endl;
}
