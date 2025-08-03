#include <iostream>
using namespace std;

int N, T;
int arr1[205], arr2[205];
int main() {

    cin >> N >> T;
    
    for (int i = 0; i < N; i++)
        cin >> arr1[i];

    for (int i = 0; i < N; i++)
        cin >> arr2[i];

    while (T--) {
        int temp1 = arr1[N-1];
        int temp2 = arr2[N-1];
        for (int i = N-1; i > 0; i--) {
            arr1[i] = arr1[i-1];
        }
        for (int i = N-1; i > 0; i--) {
            arr2[i] = arr2[i-1];
        }
        arr1[0] = temp2;
        arr2[0] = temp1;
    }

    
    for (int i = 0; i < N; i++) {
        cout << arr1[i] << ' ';
    }
    cout << '\n';
    for (int i = 0; i < N; i++) {
        cout << arr2[i] << ' ';
    }
    cout << '\n';
    

    return 0;
}