#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    int i = 1;
    while (n--)
    {
        int x, y;
        cin >> x >> y;

        cout << "Case "<< i << ": " << x + y << endl;
        i++;
    }
    return 0;
}