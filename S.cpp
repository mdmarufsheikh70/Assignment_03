#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> round_numbers;
        int i = 0;

        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                round_numbers.push_back(digit * pow(10, i));
            }
            n /= 10;
            i++;
        }

        cout << round_numbers.size() << endl;
        for(int i = 0; i < round_numbers.size(); i++)
        {
            cout << round_numbers[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
