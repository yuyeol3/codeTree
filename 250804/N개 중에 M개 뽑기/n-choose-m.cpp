#include <iostream>
using namespace std;

int N, M;
int arr[15];
void rec(int prev, int step) {
    if (step == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = prev+1; i <= N; i++) {
        arr[step] = i;
        rec(i, step+1);
    }
}

int main() {
    cin >> N >> M;
    rec(0, 0);

    return 0;
}