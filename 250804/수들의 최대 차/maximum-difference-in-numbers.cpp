#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int N, K;
int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int answer = 0;
    for (int b = 0; b < N; b++) {
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if ( arr[i] >= arr[b] && arr[i] <= arr[b] + K)
                cnt++;
        }
        answer = max(cnt, answer);
    }
    cout << answer << '\n';
    return 0;
}