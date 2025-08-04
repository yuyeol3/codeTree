#include <iostream>
using namespace std;

bool vis[10];
int arr[10];
int N;

void rec(int step) {
    if (step == N) {
        for (int i = 0; i < N; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (vis[i]) continue;
        arr[step] = i;
        vis[i] = true;
        rec(step+1);
        vis[i] = false;
    }
}

int main() {
    cin >> N;
    rec(0);
    return 0;
}