#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int arr[105][105];
int N, M;
int main() {
    cin >> N >> M;

    int x = 0, y = 0, dir = 0;
    for (int i = 0; i < N * M; i++) {
        arr[x][y] = i+1;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (arr[nx][ny] || nx < 0 || nx >= N || ny < 0 || ny >= M) {
            dir = (dir+1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    for (int x = 0; x < N; x++) {
        for (int y = 0; y < M; y++) {
            cout << arr[x][y] << ' ';
        }
        cout << '\n';
    }
    return 0;
}