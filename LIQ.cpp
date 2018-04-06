/*#include <iostream>
#define MAX 1001
using namespace std;
int main()
{
    int n, A[MAX], f[MAX], res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        f[i] = 1;
        for (int j = 0; j < i; j++)
            if ((f[j] + 1 > f[i]) && (A[i] > A[j])) f[i] = f[j] + 1;
        if (f[i] > res) res = f[i];
    }
    cout << res << endl;
    return 0;
}

6
1 2 4 6 5 2

*/

#include <iostream>
#define MAX 1001
using namespace std;
int main()
{
    int a[MAX], f[MAX], res = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >>a[i];
        f[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (f[j] + 1 > f[i] && a[i] > a[j]) f[i] = f[j] + 1;
        }
        if (f[i] > res) res = f[i];
    }
    cout << res << endl;
    return 0;
}