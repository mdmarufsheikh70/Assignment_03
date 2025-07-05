#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    
    int n, s; 
    cin >> n >> s;

    int sum = 0;
    vector<int> A(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
        if(A[i] <= s)
        {
            sum += A[i];
        }
    }

    cout << sum << endl;
    return 0;
}