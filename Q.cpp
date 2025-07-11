#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    
    int n;
    cin >> n;

    int x, y;

    for(int i = 0; i < n; i++)
    {
        int results = 0, result_1;
        cin >> x >> y;
        results = x / (y + 1);
        result_1 = x - y * results;
        cout << result_1 << endl;
    }

    return 0; 
}