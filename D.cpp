#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();

    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<int> liked;
    for(int i = 1; liked.size() < 1000; i++) {
        if(i % 3 != 0 && i % 10 != 3) {
            liked.push_back(i);
        }
    }

    for(int i = 0; i < n; i++) {
        B[i] = liked[A[i] - 1];
    }

    for(int i = 0; i < n; i++) {
        cout << B[i] << endl;
    }

    return 0;
}