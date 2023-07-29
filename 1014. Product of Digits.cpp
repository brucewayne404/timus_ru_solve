#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, j, m = 0, sum = 0;
    cin >> n;
    if(n == 0){
        cout << 10;
        return 0;
    }
    if(n == 1){
        cout << 1;
        return 0;
    }
    for(i = 9; i > 1; i--){
        while(n%i == 0){
            n = n/i;
            sum = sum + i*pow(10, m);
            m++;
        }
    }
    if(n > 1){
        cout << -1 << endl;
    }
    else cout << sum;
}
