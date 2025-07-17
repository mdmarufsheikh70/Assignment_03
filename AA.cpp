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
        int x;
        cin >> x;
        if(x == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if(x % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}