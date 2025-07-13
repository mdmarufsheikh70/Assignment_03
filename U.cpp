#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    int x, y;

    while (n--)
    {
        cin >> x >> y;
        int results = x / y;
        if(results > 20)
        {
            cout << 20 << endl;
        }
        else
        {
            cout << results << endl;
        }
    }
    
    return 0;
}