#include <iostream>
#include <iomanip>
using namespace std;
int table[9] = {0, 10, 100, 1000, 10000, 10000, 1000000, 10000000, 100000000};

int main() {
    int digit;
    while(cin >> digit) {
        if(digit % 2 != 0) break; 
        for(int i = 0; i < table[digit]; i++) {
            int L = (i / table[digit/2]) + (i % table[digit/2]);
            if(L*L == i) {
                cout << setfill('0') << setw(digit) << i << endl;
            }
        }
    }
}