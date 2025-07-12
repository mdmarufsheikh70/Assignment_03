#include<bits/stdc++.h> 
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    int n;
    cin >> n;

    int x, y, z;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        int results = (x * y) / 2;
        if(results < z)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}