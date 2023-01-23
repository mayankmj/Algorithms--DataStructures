#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<endl  
#define debug3(x,y,z) cout<<x<<endl<<y<<endl<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int m=0;

class Graph {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
 
    // function to add an edge to graph
    void addEdge(int v, int w);
 
    // DFS traversal of the vertices
    // reachable from v
    int DFS(int v);
};
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
int Graph::DFS(int v)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    m=max(m,v);
 
    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
    return(m);
}
int32_t main(){
fast
ll t=1;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>vec;
    ll aa[m],bb[m];
    ll ori=m;
    Graph g;
    if(m==0)
    cout<<"1"<<endl;
    else{
        ll j=0;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        a--,b--;
        aa[j]=a,bb[j]=b;
        g.addEdge(a,b);
        j++;
    }
    ll final,maxx=0;
    for(int i=0;i<ori;i++)
    {
        ll temp=bb[i];
        ll c=g.DFS(temp);
        maxx=max(maxx,c); 
       // cout<<maxx<<" ";
    }
    cout<<endl;
    if(maxx==(n-1))
    cout<<"0"<<endl;
    else
    {
        cout<<maxx<<endl;
        cout<<(n-1-maxx)<<endl;
    }
    }
}
return 0;
}
