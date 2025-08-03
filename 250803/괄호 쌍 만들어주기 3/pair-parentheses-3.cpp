#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    int answer = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        for (int j = i + 1; j < s.length(); j++) {
            if (s[i] == '(' && s[j] == ')') answer++;
        }
    }

    cout << answer << '\n';

    return 0;
}