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

        if(x<y)
        {
            cout << (y - x) * 2 << endl;;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    
    return 0;
}