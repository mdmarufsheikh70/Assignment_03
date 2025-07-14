#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    int w, x, y, z;

    while (n--)
    {
        cin >> w >> x >> y >> z;
        if(w+y < x+z)
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