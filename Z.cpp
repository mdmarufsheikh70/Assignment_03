#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    
    int n;
    cin >> n;

    vector<int>A(3);
    vector<int>B(3);

    int x1, y1, z1, x2, y2, z2;

    while (n--)
    {
        cin >> A[0] >> A[1] >> A[2] >> B[0] >> B[1] >> B[2];
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3 - 1 - i; j++)
            {
                if(A[j] < A[j+1])
                {
                    int tem = A[j+1];
                    A[j+1] = A[j];
                    A[j] = tem;
                }
            }
        }


         for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3 - 1 - i; j++)
            {
                if(B[j] < B[j+1])
                {
                    int tem = B[j+1];
                    B[j+1] = B[j];
                    B[j] = tem;
                }
            }
        }

        int results_1 = A[2] + (A[1] * 10) + (A[0] * 100);
        int results_2 = B[2] + (B[1] * 10) + (B[0] * 100);

        if(results_1 > results_2)
        {
            cout << "Alice" << endl;
        }
        else if(results_1 < results_2)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    
}