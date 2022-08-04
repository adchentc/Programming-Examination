#include <string>
#include <vector>
#include <utility>
#include <iostream>
using namespace std;

int main() {
    int N, Q;
    string firstLine, secondLine;
    vector<pair<string, string>> v;
    cin >> N;
    cin.get();
    for(int n = 0; n < N; ++n) {
        getline(cin, firstLine);
        getline(cin, secondLine);
        pair<string, string> slogans (firstLine, secondLine);
        v.push_back(slogans);
    }
    cin >> Q;
    cin.get();
    string input;
    for(int n = 0; n < Q; ++n) {
        getline(cin, input);
        for(int s = 0; s < v.size(); ++s) {
            if(v[s].first == input) {
                cout << v[s].second << endl; break;
            }
        }
    }
    return 0;
}