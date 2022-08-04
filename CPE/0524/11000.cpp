#include <vector>
#include <utility>
#include <iostream>
using namespace std;

int main() {
    int N;
    
    while(cin >> N) {
        vector<pair<long long, long long>> v;
        long long mbee = 0;
        long long fbee = 1;
        pair<long long, long long> initYear (mbee, fbee);
        v.push_back(initYear);
        if(N == -1) break;
        for(int n = 1; n <= N; n++) {
            fbee = v[n-1].first + 1;
            mbee = v[n-1].second + v[n-1].first;
            pair<long long, long long> newYear (mbee, fbee);
            v.push_back(newYear);
        }
        cout << v[N].first << " " << (v[N].first + v[N].second) << endl;
    }
    return 0;
}