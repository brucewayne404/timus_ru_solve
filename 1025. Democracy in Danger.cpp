#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum  = 0, i, a[1000];
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    if(n%2 == 0){
        n = n/2 + 1;
    }
    else{
        n = (n+1)/2;
    }
    for(i = 0; i < n; i++){
        if(a[i]%2 == 0){
            sum = sum + (a[i]/2) + 1; 
        }
        else 
        sum = sum + (a[i]+1)/2;
    }
    cout << sum;
}
