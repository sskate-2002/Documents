#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N, count = 0;
    cin >> N;
    vector<int> m(N);
    vector<int> single;
    for(int i = 0; i < N; i++) cin >> m.at(i);
    single.push_back(m.at(0));

    for(int j : m){
        bool a = true;
        for(int k : single){
            if(j == k) a = false;
        }
        if(a == true) single.push_back(j);
    }

    cout << single.size() << endl;
}
