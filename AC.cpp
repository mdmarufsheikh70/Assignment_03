#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int N, K, M;
    cin >> N >> K >> M;

    vector<int> A(N - 1);
    int sum = 0;

    for (int i = 0; i < N - 1; i++)
    {
        cin >> A[i];
        sum += A[i];
    }

    int need = (N * M) - sum;

    if (need > K)
        cout << -1 << endl;
    else if (need <= 0)
        cout << 0 << endl;
    else
        cout << need << endl;

    return 0;
}
