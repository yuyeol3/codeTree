#include <iostream>
using namespace std;

int N;
int a[15], b[15];
int main() {
    cin >> N; 
    for (int i = 0; i < N; i++) 
        cin >> a[i] >> b[i];

    for (int i = 1; i <= 5001; i++) {
        int num = i;
        bool valid = true;
        for (int j = 0; j < N; j++) {
            num *= 2;
            if (num < a[j] || num > b[j]) {
                valid = false;
                break;
            }
        }
        if (valid) {
            cout << i << '\n';
            return 0;
        }
    }
    // Please write your code here.
    return 0;
}