
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }

        long long x = sqrt(sum);

        if(x * x == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
