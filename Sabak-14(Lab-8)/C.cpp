#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int l,r;
    cin >> l >> r;
    reverse(v.begin() + l , v.begin() + r + 1 );
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }


    return 0;
}