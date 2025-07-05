#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;

    string s = "L";

    for(int i = 0; i < n; i++)
    {
        s = s + "o";
    }

    s = s + "ng";

    cout << s << endl;
    return 0;
}