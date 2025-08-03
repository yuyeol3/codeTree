#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int arr[105][105];

int N;
int main() {
    cin >> N;

    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];


    int answer = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

                int cnt = 0;
                for (int dir = 0; dir < 4; dir++) {
                    int nx = i + dx[dir];
                    int ny = j + dy[dir];

                    if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;

                    if (arr[nx][ny]) cnt++;
                }
                if (cnt >= 3) answer++;
        }
    }
    
    cout << answer << '\n';
    return 0;
}
