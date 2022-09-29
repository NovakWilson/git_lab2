#include <bits/stdc++.h>
using namespace std ;

signed main(){
    int n ;
    cin >> n ;
    vector <int> a(n);
    for(int i =0 ; i < n ;i++){
        a[i] = i + 1 ;
    }
    for(int i = 2 ; i < n ; i++) swap(a[i], a[i/2]);
    for(int i : a) cout << i << " ";
}