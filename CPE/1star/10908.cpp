#include <string>
#include <iostream>
using namespace std;

int main() {
    int T;
    int M, N, Q;

    cin >> T;
    for(int cases = 0; cases < T; ++cases) {
        cin >> M >> N >> Q;
        cout << M << " " << N << " " << Q << endl;

        string array[M];
        for(int m = 0; m < M; ++m) {
            cin >> array[m];
        }

        int r, c;
        for(int q = 0; q < Q; ++q) {
            cin >> r >> c;
            
            char center = array[r][c];
            int height = (r < (M-r-1)) ? r : (M-r-1);
            int width = (c < (N-c-1)) ? c : (N-c-1);
            int maxBorderLength = (height < width) ? height : width;
            
            bool isSquare;
            int borderLength = 0;
            for(int k = 1; k <= maxBorderLength; ++k) {
                isSquare = true;
                for(int i = (r-k); i <= (r+k); ++i) {
                    for(int j = (c-k); j <= (c+k); ++j) {
                        if(array[i][j] != center) {
                            isSquare = false;
                            break;
                        }
                    }
                }
                if(isSquare) {
                    borderLength++;              
                } else {
                    break;
                }
            }
            cout << borderLength*2+1 << endl;
        }
    }
}