#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int A, B, count = 0, num;
    cin >> A >> B;
    for(int i = A; i <= B; i++){
        vector<int> a(5), b(5);
        num = i;
        for(int j = 0; j < 5; j++){
            a[j] = num % 10;
            num /= 10;
        }
        b = a;
        reverse(b.begin(), b.end());
        if(a == b) count++;
    }
    cout << count << endl;
}
