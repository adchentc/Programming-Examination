// http://uva.onlinejudge.org/external/12/1210.html
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 10000+5;
int p[MAX];
vector<int> v;

int main() {
    v.push_back(2);
    for(int i = 3; i < MAX; i++) {
        // check is prime or not
        bool isPrime = true;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) isPrime = false;
        }
        if(isPrime) v.push_back(i);
    }

    int input;
    while(cin >> input) {
        if(input == 0) break;
        int count = 0;
        for(int i = 0; v[i] <= input; i++) {
            int sum = 0;
            for(int j = i; sum < input; j++) {
                sum += v[j];
                if(sum == input) {
                    count ++;
                    break;
                }
            }
        }
        cout << count << endl;
    }
}