#include <iostream>
using namespace std;


int N;
int x[105], y[105];
int main() {

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int answer = 2000050;
    for (int i = 0; i < N-1; i++) {
        int m_dist = 2000050;
        for (int j = i+1; j < N; j++) {
            m_dist = min(m_dist, (x[i]-x[j]) * (x[i]-x[j]) + (y[i]-y[j]) * (y[i]-y[j]));
        }
        answer = min(m_dist, answer);
    }
    cout << answer << '\n';
    return 0;
}