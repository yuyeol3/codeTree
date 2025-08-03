#include <iostream>
using namespace std;

int N, C, G, H;
int ta[1005], tb[1005];
int main() {
    // Please write your code here.
    cin >> N >> C >> G >> H;

    for (int i = 0; i < N; i++)  {
        cin >> ta[i] >> tb[i];
    }

    int answer = 0;
    for (int t = -1; t <= 1001; t++) {
        int work = 0;
        for (int i = 0; i < N; i++) {
            if (t < ta[i]) {
                work += C;
            }
            else if (t >= ta[i] && t <= tb[i]) {
                work += G;
            }
            else if (t > tb[i]) {
                work += H;
            }
        }
        answer = max(work, answer);
    }
    cout << answer << '\n';

    return 0;
}