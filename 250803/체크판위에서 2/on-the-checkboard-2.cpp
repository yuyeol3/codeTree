#include <iostream>
using namespace std;

int R, C;
char arr[20][20];
int main() {
    cin >> R >> C;

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> arr[i][j];

    if (arr[0][0] == arr[R-1][C-1]) {
        cout << 0 << '\n';
        return 0;
    }

    int answer = 0;
    for (int i = 1; i < R-2; i++) { 
        for (int j = 1; j < C-2; j++) {
            if (arr[0][0] == arr[i][j]) continue;

            for (int k = i+1; k < R-1; k++) {
                for (int l = j+1; l < C-1; l++) {
                    if (arr[i][j] == arr[k][l]) continue;
                    answer++;
                }
            }
        }
    }
    cout << answer << '\n';


    return 0;
}