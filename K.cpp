#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    int K, G, M;
    cin >> K >> G >> M;

    int glass = 0, mug = 0;

    for (int i = 0; i < K; i++)
    {
        if (glass == G)
        {
            glass = 0;
        }
        else if (mug == 0)
        {
            mug = M;
        }
        else
        {
            int empty_space = G - glass;
            int transfer;
            if (empty_space < mug)
            {
                transfer = empty_space;
            }
            else
            {
                transfer = mug;
            }

            glass = glass + transfer;
            mug = mug - transfer;
        }
    }

    cout << glass << " " << mug << endl;

    return 0;
}
