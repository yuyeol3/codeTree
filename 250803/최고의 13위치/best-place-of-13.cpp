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
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 2; j++) {
            answer = max(answer, arr[i][j] + arr[i][j+1] + arr[i][j+2]);
        }
    }
    cout << answer << '\n';

    return 0;
}