#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, j, a[10000000];
    i = 0;
    while(cin >> t){
        a[i] = t;
        i++;
    }
    for(j = i-1; j >= 0; j--){
        cout << fixed << setprecision(4) << sqrt(a[j]) << endl;
    }
}
