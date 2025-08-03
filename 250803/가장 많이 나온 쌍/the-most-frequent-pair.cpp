#include <iostream>
using namespace std;

int N, M;
int a[105], b[105];
int main() {
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> a[i] >> b[i];
    }

    int answer = 0;


    // O(N^2 * M)
    for (int i = 1; i <= N - 1; i++) {
        for (int j = i+1; j <= N; j++) {
            int cnt = 0;
            for (int k = 0; k < M; k++) {
                if (
                    i == a[k] && j == b[k] ||
                    j == a[k] && i == b[k]
                ) cnt++;
            }
            answer = max(answer, cnt);
        }
    }
    cout << answer << '\n';

    return 0;
}