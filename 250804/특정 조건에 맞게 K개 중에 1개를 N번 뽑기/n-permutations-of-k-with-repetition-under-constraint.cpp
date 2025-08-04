#include <iostream>
using namespace std;

int K, N;
int arr[15];
void rec(int step) {
    if (step == N) {
        for (int i = 0; i < N; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= K; i++) {
        if (step >= 2 && arr[step-1] == arr[step-2] && arr[step-1] == i) {
            continue;
        }
        arr[step] = i;
        rec(step+1);
    }
}


int main() {
    cin >> K >> N;
    rec(0);
    return 0;
}