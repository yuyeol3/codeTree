#include <iostream>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0,  -1, 1};

int N;
int arr[105][105];
int r, c;
int main() {
    cin >> N >> r >> c;
    r--; c--;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    int x = r, y = c;
    cout << arr[x][y] << ' ';
    while (true) {
        bool moved = false;
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;

            if (arr[nx][ny] > arr[x][y]) {
                x = nx;
                y = ny;
                cout << arr[x][y] << ' ';
                moved = true;
                break;
            }
        }
        if (!moved) break;
    }

    return 0;
}