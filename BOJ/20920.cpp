#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int N,M,i,k,c;string s;vector<pair<int,string>>V;vector<pair<int,pair<int,string>>>U;
main(){cin.sync_with_stdio(0);cin.tie(0);cin>>N>>M;
    V.reserve(N);
    for(;i!=N;++i)if(cin>>s,s.size()>=M)
        V.push_back(make_pair(-(int)s.length(),s));
    U.reserve(N=V.size());
    sort(V.begin(),V.end());
    for (i=0;c=0,(k=i)<N;U.push_back(make_pair(-c,V[k])))
        do c++,i++;while(i<N&&V[k].second==V[i].second);
    sort(U.begin(),U.end());
    for (auto&o:U)cout<<o.second.second<<'\n';
}