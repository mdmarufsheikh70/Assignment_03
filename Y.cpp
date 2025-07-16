#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    int x, y, z;
    while (n--)
    {
        cin >> x >> y >> z;
        cout << (x / (5 * y)) + z << endl;
    }
    
    return 0;
}