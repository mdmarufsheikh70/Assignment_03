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
    vector<int>D(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i] >> B[i];
        C[i] = (B[i] + 100 - 1) / 100;
    }

    for(int i = 0; i < n; i++)
    {
        if(A[i] > C[i])
        {
            D[i] = 0;
        }
        else
        {
            D[i] = C[i] - A[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << D[i] << endl;
    }
    return 0;
}