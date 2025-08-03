#include <iostream>
using namespace std;

int N;
int x[105], y[105];
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    long long answer = 40000 * 40000 + 10;
    for (int i = 0; i < N; i++) {
        int min_x, min_y;
        int max_x, max_y;

        min_x = min_y = 40005;
        max_x = max_y = 1;
        for (int j = 0; j < N; j++) {
            if (j == i) continue;

            min_x = min(min_x, x[j]);
            min_y = min(min_y, y[j]);

            max_x = max(max_x, x[j]);
            max_y = max(max_y, y[j]);
        }

        long long h = max_y - min_y;
        long long w = max_x - min_x;

        answer = min(answer, h*w);
    }
    cout << answer << '\n';

    return 0;
}