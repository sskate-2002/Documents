#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N, sum_A = 0, sum_B = 0, ans;
  cin >> N;
  vector<int> cards(N);
  for(int i = 0; i < N; i++){
    cin >> cards.at(i);
  }
  sort(cards.begin(), cards.end());
  reverse(cards.begin(), cards.end());
  for(int j = 0; j < N; j += 2){
    sum_A += cards.at(j);
    if(j + 1 != N) sum_B += cards.at(j + 1);
  }
  ans = sum_A - sum_B;
  cout << ans << endl;
}
