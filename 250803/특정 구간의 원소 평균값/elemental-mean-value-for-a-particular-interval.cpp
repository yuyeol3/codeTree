#include <iostream>
using namespace std;

int N;
int arr[105];
int main() {

    cin >> N;
    for (int i = 0; i < N; i++) 
        cin >> arr[i];

    int answer = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            
            int nums = j - i + 1;
            int summation = 0;
            for (int idx = i; idx <= j; idx++) {
                summation += arr[idx];
            }

            int avg = (summation % nums == 0)  ? (summation / nums) : -1;

            for (int idx = i; idx <= j; idx++) {
                if (arr[idx] == avg) {
                    // cout << (i+1) << ' ' << (j+1) << '\n';
                    answer++;
                    break;
                }
            }

        }
    }

    cout << answer << '\n';

    return 0;
}