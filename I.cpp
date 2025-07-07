#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int>A(n);
    vector<int>B(n);
    vector<int>C(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i] >> B[i];
    }

    for(int i = 0; i < n; i++)
    {
        C[i] = A[i] - B[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << C[i] << endl;
    }
    return 0;
}