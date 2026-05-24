#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) 
        {
            cin >> a[i];
        }
        int mjy;
        if(a[0] == a[1]) 
        {
            mjy = a[0];
        } 
        else 
        {
            mjy = a[2];
        }
        for(int i=0; i<n; i++) 
        {
            if(a[i] != mjy) 
            {
                cout << i + 1 << endl;  
            }
        }
    }
    return 0;
}