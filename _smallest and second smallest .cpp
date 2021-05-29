//Find the smallest and second smallest element in an array 
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
vector<int> minAnd2ndMin(int a[], int n) {
    int fm=INT_MAX,sm=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<fm){
            sm=fm;
            fm=a[i];
        }
        else if(a[i]<sm&&a[i]!=fm){
            sm=a[i];
        }
    }
    if(fm==INT_MAX&&sm==INT_MAX){
        return {-1,-1};
    }
    else if(fm!=INT_MAX&&sm==INT_MAX){
        return {-1};
    }
    else
        return {fm,sm};
}