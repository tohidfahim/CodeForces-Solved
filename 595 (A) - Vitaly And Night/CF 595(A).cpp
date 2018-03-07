#include<iostream>
using namespace std;

int main()
{
    int n, m, a[100000], b=0, i, j;
    cin >> n >> m;

    for(i=1; i<=n*2*m; i++)
    {
        cin >> a[i];
    }

    for(i=1; i<=n*2*m; i=i+2)
    {
        if(a[i]==1 || a[i+1]==1) b++;
    }

    cout << b;


}
