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
        int result = (500 + x - 1) / x;
        cout << result << endl;
    }

    return 0;
}
