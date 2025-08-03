#include <iostream>
using namespace std;

int N, M, T;
int r[405], c[405];
int arr[25][25], tarr[25][25];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void print_arr() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << tarr[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

int main() {
    cin >> N >> M >> T;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];

    for (int i = 0; i < M; i++)  {
        int rt, ct;
        cin >> rt >> ct;
        r[i] = rt - 1;
        c[i] = ct - 1;
    }
    
    int answer = M;
    for (int t = 0; t < T; t++) {
        for (int i = 0; i < M; i++) {
            if (r[i] == -1 && c[i] == -1) continue;
            int max_dir = 0, max_val = 0;
            int x = r[i], y = c[i];
            for (int dir = 0; dir < 4; dir++) {
                int nx = x + dx[dir];
                int ny = y + dy[dir];

                if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                if (arr[nx][ny] > max_val) {
                    max_dir = dir;
                    max_val = arr[nx][ny];
                }
            }

            r[i] += dx[max_dir];
            c[i] += dy[max_dir];
            tarr[r[i]][c[i]]++;
        }

        // print_arr();

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (tarr[i][j] > 1) {
                    for (int k = 0; k < M; k++) {
                        if (r[k] == i && c[k] == j) {
                            r[k] = -1;
                            c[k] = -1;
                            answer--;
                        }
                    }
                }
                tarr[i][j] = 0;
            }
        }
    }
    cout << answer << '\n';

    return 0;
}