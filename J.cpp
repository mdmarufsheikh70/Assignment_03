#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    int n;
    cin >> n;

    vector<int>A(n);
    vector<int>B(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i] >> B[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(A[i] > B[i])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}