#include<iostream>
#include<vector>
using namespace std;
int main(){
  int N, K, section = 0;
  cin >> N >> K;
  vector<double> vec(N * 3);
  vector<int> counters(N * 3);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  for(int j = 0; j < K; j++){
    for(int k = 0; k < N; k++){
      section = vec.at(k) + 0.5;
      if(k + 1 - section < 0){
        for(int l = 0; l <= k + 1 + section ; l++){
          counters.at(l) += 1;
        }
      }
      else{
        for(int l = k + 1 - section; l <= k + 1 + section ; l++){
          counters.at(l) += 1;
        }
      }
    }
    for(int m = 0; m < N; m++){
      vec.at(m) = counters.at(m);
    }
  }
  for(int n = 0; n < N; n++) cout << vec.at(n) << " ";
  cout << endl;
}
