#include <iostream>
using namespace std;

int K, N;
int arr[10];
void rec(int step) {
    if (step == N) {
        for (int i = 0; i < N; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= K; i++) {
        arr[step] = i;
        rec(step+1);
    }
}

int main() {
    cin >> K >> N;
    rec(0);
    return 0;
}