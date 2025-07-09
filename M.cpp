#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    char a, b, c, d, e, f, g;
    int counts = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d >> e >> f;

        if (a == 'W' && b == 'W' && c == 'W')
        {
            counts++;
        }
        else if (b == 'W' && c == 'W' && d == 'W')
        {
            counts++;
        }
        else if (c == 'W' && d == 'W' && e == 'W')
        {
            counts++;
        }
        else if (d == 'W' && e == 'W' && f == 'W')
        {
            counts++;
        }

        if (counts >= 1)
        {
            cout << "YES" << endl;
            counts = 0;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}