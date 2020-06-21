#include<iostream>
using namespace std;
int main(){
  int A_1, V, B_1, W, T, A_2, B_2;
  cin >> A_1 >> V >> B_1 >> W >> T;
  if(A_1 > B_1){
    A_2 = A_1 - (V * T);
    B_2 = B_1 - (W * T);
    if(A_2 <= B_2){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
  else{
    A_2 = A_1 + (V * T);
    B_2 = B_1 + (W * T);
    if(A_2 >= B_2){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
}
