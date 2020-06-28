#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N, M;
    int64_t K;
    int count = 0;
    bool can_read = true;
    cin >> N >> M >> K;
    vector<int64_t> A(N), B(M);

    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < M; i++) cin >> B[i];

    auto itr1 = A.begin();
    auto itr2 = B.begin();
    while(can_read){

        if(itr1 == A.end() && itr2 != B.end()){

            if(*itr2 <= K){
                K -= *itr2;
                itr2++;
                count++;
            }

            else can_read = false;

        }

        else if(itr2 == B.end() && itr1 != A.end()){

            if(*itr1 <= K){
                K -= *itr1;
                itr1++;
                count++;
            }

            else can_read = false;

        }

        else if(itr1 == A.end() && itr2 == B.end()) can_read = false;

        else if(*itr1 <= *itr2 && *itr1 <= K){
            K -= *itr1;
            itr1++;
            count++;
        }

        else if(*itr1 > *itr2 && *itr2 <= K){
            K -= *itr2;
            itr2++;
            count++;
        }

        else can_read = false;
    }

    cout << count << endl;
}
