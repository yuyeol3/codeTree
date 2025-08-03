#include <iostream>
using namespace std;

int arr[105];
int N;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) 
        cin >> arr[i];

    for (int t = 0; t < 2; t++) {
        int s, e;
        cin >> s >> e;
        s--; e--;
        int tarr[N] = {0,};
        int idx = 0;
        for (int i = 0; arr[i] != 0; i++) {
            if (i >= s && i <= e) continue;
            tarr[idx++] = arr[i];
        }

        fill(arr, arr+N, 0);
        for (int i = 0; i < idx; i++) {
            arr[i] = tarr[i];
        }

        if (t == 1) {
            cout << idx << '\n';
            for (int i = 0; i < idx; i++) {
                cout << arr[i] << '\n';
            }
        }
    }

    return 0;
}