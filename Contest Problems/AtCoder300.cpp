#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int S = A + B; 
    vector<int> choices(N); 

    for (auto &ci : choices) {
        cin >> ci;
    }

    for (int i = 0; i < N; i++) {
        if (choices[i] == S) {
            cout << (i + 1) << endl; 
            break;
        }
    }

    return 0;
}
