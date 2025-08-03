#include <iostream>
#include <vector>
using namespace std;

int x, y;
int main() {
    cin >> x >> y;

    int answer = 0;
    for (int n = x; n <= y; n++) {
        
        int summation = 0;
        int num = n;
        while (num) {
            summation += num % 10;
            num /= 10;
        }

        answer = max(answer, summation);
    }
    cout << answer << '\n';

    return 0;
}