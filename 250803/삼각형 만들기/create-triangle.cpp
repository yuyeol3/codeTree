#include <iostream>
#include <algorithm>
using namespace std;

int N;
int x[105], y[105];
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    long long answer = 0;
    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N -1; j++) {
            for (int k = j +1; k < N; k++) {

                int tx[] = {x[i], x[j], x[k]};
                int ty[] = {y[i], y[j], y[k]};

                long long l, h;
                l = h = 0;
                for (int i1 = 0; i1 < 2; i1++) {
                    for (int i2 = i1+1; i2 < 3; i2++) {
                        if (tx[i1] - tx[i2] == 0) {
                            h = abs(ty[i1] - ty[i2]);
                        }

                        if (ty[i1] - ty[i2] == 0)  {
                            l = abs(tx[i1] - tx[i2]);
                        }
                    }
                }
                answer = max(answer, l*h);
            }
        }
    }

    cout << answer << '\n';
    

    return 0;
}