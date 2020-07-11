#include<iostream>
using namespace std;
int main(){
    int H, W, K, count_black;
    int count_black_original = 0, ans = 0;
    cin >> H >> W >> K;
    char c[H][W] c_copy[H][W];

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> c[i][j];
            if(c[i][j] == '#') count_black_original++;
        }
    }

    for(int i = 0; i < H; i++){
        count_black = 0;

        for(int j = 0; j < W; j++){
            if(c[i][j] == '#') c[i][j] = '.';
            count_black++;
        }

        if(count_black_original - count_black == K) ans++;

        for(int k = 0; k < )
    }

}
