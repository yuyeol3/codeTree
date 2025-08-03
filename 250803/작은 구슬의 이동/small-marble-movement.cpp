#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

unordered_map<char, int> mapping = {
    {'U', 2},
    {'D', 0},
    {'R', 1},
    {'L', 3}
};

int N, T;
int r, c;
char d;
int main() {
    cin >> N >> T >> r >> c >> d;
    r--; c--;
    int dir = mapping[d];
    for (int t = 0; t < T; t++) {
        int nx = r + dx[dir];
        int ny = c + dy[dir];

        if (nx < 0 || nx >= N || ny < 0 || ny >= N) {
            dir = (dir + 2) % 4;
            nx = r;
            ny = c;
        }

        r = nx;
        c = ny;
        // cout << r << ' ' << c << '\n';

    }
    r++; c++;
    cout << r << ' ' << c << '\n';

    return 0;
}