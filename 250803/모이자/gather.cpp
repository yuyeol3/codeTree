#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[105];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];

    int answer = 510000;
    for (int i = 0; i < N; i++) {
        int dist = 0;

        for (int j = 0; j < N; j++) {
            dist += A[j] * abs(i - j);
        }
        answer = min(answer, dist);
    }
    cout << answer << '\n';

    return 0;
}