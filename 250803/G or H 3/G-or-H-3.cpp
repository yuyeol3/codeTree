#include <iostream>
using namespace std;

int N, K;
int arr[10005];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int p; char c;
        cin >> p >> c;
        arr[p] = (c == 'G' ? 1 : 2);
    }

    int answer = 0;
    for (int i = 1; i <= 10000 - K + 1; i++) {
        int summation = 0;
        for (int j = i; j <= i+K; j++) {
            summation += arr[j];
        }
        answer = max(summation, answer);
    }
    cout << answer << '\n';


    return 0;
}