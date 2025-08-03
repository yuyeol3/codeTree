#include <iostream>
using namespace std;

int N;
int seats[25];
int main() {

    cin >> N;
    char c;
    for (int i = 0; i < N; i++) {
        cin >> c;
        seats[i] = c - '0';
    }

    int answer = 0;
    for (int i = 0; i < N; i++) {
        if (seats[i]) continue;

        seats[i] = 1;

        int minimum = 2000;
        int prev = -1;
        for (int j = 0; j < N; j++) {
            if (seats[j] == 0) continue;
            if (prev != -1) {
                minimum = min(minimum, j - prev);
            }
            prev = j;
        }
        answer = max(answer, minimum);
        seats[i] = 0;

    }

    cout << answer << '\n';


    return 0;
}