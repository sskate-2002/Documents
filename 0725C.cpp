#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i = K; i < A.size(); i++){
        if((double) A[i] / A[i - K] > 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
