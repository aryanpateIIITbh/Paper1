#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    set<int>op;
    for(int i=0;i<n;i++){
        cin>>x;
        op.insert(x);
        if((i+1)%2!=0){
            int mid=(i+1)/2;
            auto it=op.begin();
            for(int i=0;i<mid;i++){
                it++;
            }
            cout<<*it<<" ";
        }
        else{
            int mid=(i+1)/2;
            auto it=op.begin();
            for(int i=0;i<mid;i++){
                it++;
            }
            int num=*it;
            it--;
            int result=(num+*it)/2;
            cout<<result<<" ";
        }
    }
    return 0;
}