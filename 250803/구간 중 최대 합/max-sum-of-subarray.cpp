#include <iostream>
using namespace std;

int N, K;
int arr[105];
int main() {

    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int answer = 0;
    for (int i = 0; i < N - K + 1; i++) {
        int summation = 0;
        for (int j = i; j < i + K; j++) {
            summation += arr[j];
        }
        answer = max(answer, summation);
    }
    cout << answer << '\n';

    return 0;
}