#include<iostream>
#include<string>
using namespace std;
int main(){
    int N, num = 0, i = 0;
    string alp = "abcdefghijklmnopqrstuvwxyz", ans;
    cin >> N;
    while (num <= 1000000000000001){
        i++;
        num += 26 * i;
        if (N < num){
            N -= num - 26 * i;
            N -= 1;
            ans = alp[N % 26];
            N /= 26;
            while(N > 0){
                ans = alp[N % 26] + ans;
                N /= 26;
            }
            while(ans.size() != i){
                ans = 'a' + ans;
            }
            break;
        }
    }
    cout << ans << endl;

}
