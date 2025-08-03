#include <iostream>
using namespace std;

int N;
int arr[25][25];
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++) 
            cin >> arr[i][j];

    int answer = 0;
    for (int i = 0; i < N - 2; i++) {
        for (int j = 0; j < N - 2; j++) {
            int cnt=0;
            for (int x = i; x < i+3; x++) {
                for (int y = j; y < j+3; y++) {
                    if (arr[x][y]) cnt++;
                }
            }
            answer = max(answer, cnt);
        }
    }
    cout << answer << '\n';

    return 0;
}