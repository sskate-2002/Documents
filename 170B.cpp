#include<iostream>
using namespace std;
int main(){
  int X, Y, cranes, turtles;
  bool is_true = false;
  cin >> X >> Y;
  for(cranes = 0; cranes <= X; cranes++){
    turtles = X - cranes;
    if(cranes * 2 + turtles * 4 == Y){
      is_true = true;
      break;
    }
  }
  if(is_true == true) cout << "Yes" << endl;
  else cout << "No" << endl;
}
