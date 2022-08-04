#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    while(cin >> n >> m) {
        vector<int> v;
        if(m == 0 || m == 1) {
            cout << "Boring!" << endl; 
            continue;
        }
        v.push_back(n);
        while(n > 1) {
            if(n%m != 0) {
                cout << "Boring!";
                v.clear();
                break;
            }
            n = n / m;
            v.push_back(n);
        }
        for(int n = 0; n < v.size(); ++n) {
            cout << v[n] << " ";
        }
        cout << endl;
    }
    return 0;
}