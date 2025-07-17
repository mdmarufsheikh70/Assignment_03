#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        vector<int> A(x), B(x);

        for (int i = 0; i < x; i++)
        {
            cin >> A[i] >> B[i];
        }

        int max_score = -1;
        int index = -1;

        for (int i = 0; i < x; i++)
        {
            if (A[i] <= 10 && B[i] > max_score)
            {
                max_score = B[i];
                index = i;
            }
        }

        cout << index + 1 << endl;
    }

    return 0;
}
