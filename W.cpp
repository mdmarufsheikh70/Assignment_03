#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    while (n--)
    {
        int x, y;
        cin >> x >> y;

        if(x >= y && x % 2 == y % 2)
        {
            cout << "YES" << endl;
            for(int i = 0; i < y - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << x - (1 * (y - 1));
        }
        else if(x >= 2 * y && x % 2 == 0)
        {
            cout << "YES" << endl;
            for(int i = 0; i < y - 1; i++)
            {
                cout << 2 << " ";
            }
            cout << x - (2 * (y - 1));
        }
        else
        {
            cout << "NO" << endl;
        }
        cout << endl;
    }
    
}