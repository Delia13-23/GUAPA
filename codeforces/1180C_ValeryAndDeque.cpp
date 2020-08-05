#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    typedef pair<int,int> p;
    int n,q,max = 0;
    long long c;
    deque<int> dq;
    vector<pair<int,int>> v;
    cin>>n>>q;

    for(int i = 0; i < n; ++i)
    {
        cin>>c;
        dq.push_back(c);
    }
    max = *max_element(dq.begin(),dq.end());
    int A,B,j = 0;
    
    while(dq[0] != max)
    {
    A = *dq.begin();
    dq.pop_front();
    B = *dq.begin();
    dq.pop_front();
    
    v.push_back(p(A,B));
    j++;
    if(A > B)
        dq.push_front(A),dq.push_back(B);
    else
        dq.push_back(A),dq.push_front(B);
    }
    
    for(int i = 0;i < q; ++i)
    {
        cin>>c;
        if(c <= j)
        {
            c--;
            cout<<v[c].first<<" "<<v[c].second<<endl;
        }
        else
        {
            c -= j;
            c %= (n-1);
            if(c != 0)
              cout<<max<<" "<<dq[c]<<endl;
            else
              cout<<max<<" "<<dq[n-1]<<endl;
        }
    }
    
    return 0;
}
