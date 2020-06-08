#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N, count = -1;
  bool b = true;
  cin >> N;
  vector<int>A_s(N);
  for(int i = 0; i < N; i++){
    cin >> A_s[i];
  }
  while (b){
    for(int &j : A_s){
      if(j % 2 == 0) j = j / 2;
      else {
        b = false;
        break;
      }
    }
    count++;
  }
  cout << count << endl;
}
