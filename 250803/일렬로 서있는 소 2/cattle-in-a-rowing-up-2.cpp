#include <iostream>
using namespace std;

int N;
int arr[105];
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) 
        cin >> arr[i];

    int answer = 0;
    for (int i = 0; i < N - 2; i++) {
        for (int j = i+1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if ((i < j && j < k) && (arr[i] <= arr[j] && arr[j] <= arr[k])) 
                    answer++;
            }
        }
    }
    cout << answer << '\n';

    return 0;
}