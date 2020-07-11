#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    int N, z_integer;
    double z, z_decimal;
    cin >> N;
    vector<int> f(N + 1);
    for(int n = 6; n <= N; n++){
        for(int x = 1; x < sqrt(n); x++){
            for(int y = 1; y < sqrt(n); y++){
                if(- 3 * (pow(x, 2) + pow(y, 2)) - 2 * x * y + 4 * n < 0) continue;
                z = (-(y + x) + sqrt(- 3.0 * (pow(x, 2) + pow(y, 2)) - 2.0 * x * y + 4.0 * n)) / 2.0;
                z_integer = z;
                z_decimal = z - z_integer * 1.0;
                if(z_decimal != 0 or z <= 0) continue;
                if(pow(x, 2) + pow(y, 2) + pow(z_integer, 2) + x * y + y * z + z * x == n){
                    f[n]++;
                }
            }
        }
    }
    for(int n = 1; n <= N; n++) cout << f[n] << endl;
}
