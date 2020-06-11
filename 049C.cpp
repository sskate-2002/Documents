#include<iostream>

using namespace std;

int main(){
    string S, T = "";
    int i = 0;
    cin >> S;
    
    while(i <= S.size() - 1){
        if(i + 5 <= S.size() - 1 && T.substr(i, 5) == "dream"){
            if(i + 7 <= S.size() - 1 && T.substr(i + 5, 2) == "er"){
                T += "dreamer";
                i += 7;
            }
            else{
                T += "dream";
                i += 5;
            }
        }
        else if(i + 6 <= S.size() - 1 && T.substr(i, 6) == "erase"){
            if(i + 6 <= S.size() - 1 && T.[i + 6] == 'r'){
                T += "eraser";
                i += 6;
            }
            else{
                T += "erase";
                i += 5;              }
        }
        else break;
    }
}
