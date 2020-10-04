#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll m;
    cin >> m;
    while (m--)
    {
        ll n, k, t = 0;
        cin >> n >> k;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                t++;
                arr[i + 1] += (arr[i] - k);
            }
            if (arr[i] < k)
                break;
        }
        if (i == n)
        {
            t += ((arr[n - 1] - k) / k);
        }
        cout << t+1 << endl;
    }
}
