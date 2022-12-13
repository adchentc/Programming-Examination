#include <iostream>
#include <iomanip>
using namespace std;
const int base = 100;
const int MAX = 100000000;
long long ans[MAX];

int main() {
    int input;
    while(cin >> input) {
        if(input == 0) break;
        ans[0] = 1;
        int len = 0;
        for(int i = input+2; i <= input*2; i++) {
            int tmp = 0;
            for(int j = 0; j <= len; j++) {
                ans[j] = ans[j] * i + tmp;
                tmp = ans[j] / base;
                ans[j] = ans[j] % base;
            }
            if(tmp > 0) {
                len++;
                ans[len] = tmp;
            }
        }
        for(int i = len; i >= 0; i--) {
            if(ans[i] == 0) {
                cout << "00";
            } else {
                cout << ans[i];
            }
        }
        cout << endl;
    }
    return 0;
}