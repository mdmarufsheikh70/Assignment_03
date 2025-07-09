#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<int>A(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(A[i] >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if(A[i] <= 1899 && A[i] >= 1600)
        {
            cout << "Division 2" << endl;
        }
        else if(A[i] <= 1599 && A[i] >= 1400)
        {
            cout << "Division 3" << endl;
        }
        else if(A[i] <= 1399)
        {
            cout << "Division 4" << endl;
        }
    }
    return 0;
}