#include <iostream>
#include <vector>
using namespace std;

vector<int64_t> vec(100, 0);

int64_t lucas(int n){
  if (n == 0) {
    vec.at(0) = 2;
    return vec.at(0);
  }
  else if (n == 1){
    vec.at(1) = 1;
    return vec.at(1);
  }
  else if (vec.at(n) != 0) {
    return vec.at(n);
  }
  else {
    vec.at(n) = lucas(n-1) + lucas(n-2);
    return vec.at(n);
  }
}

int main(){
  int N ;
  cin >> N;
  cout << lucas(N) << endl;
}
