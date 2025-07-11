#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    int x, y, z;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        if(x * y <= (24 * 60 * z))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}