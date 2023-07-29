#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, r, pi, aa[50], bb[50], len = 0.0;
    long long n, i;
    pi = acos(-1);
    cin >> n >> r;
    for(i = 0; i < n; i++){
        cin >> a >> b;
        aa[i] = a;
        bb[i] = b;
    }
    aa[i] = aa[0];
    bb[i] = bb[0];
    for(i = 0; i < n; i++){
        len = len + sqrt(pow((aa[i] - aa[i+1]), 2) + pow((bb[i] - bb[i+1]), 2));
    }
    
    cout << fixed << setprecision(2) << len + (2*pi*r);
}
