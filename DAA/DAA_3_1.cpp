#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void countingSort(int mad[], int n){
    int freq[10]={0};
    forn(i,n){
        freq[mad[i]]+=1;
    }
    forn(i,n){
        if (i==0)
        {
            i++;
        }
        freq[i]+=freq[i-1];
    }
    int b[n];
    for (int i = n-1; i >= 0; i--)
    {
        b[freq[mad[i]]-1]=mad[i];
        freq[mad[i]]=freq[mad[i]]-1;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    return;
    
}

string* optimizedCountingSort(string mad[], int n, int ith){
    int freq[10]={0};
    vector<pair<int,string>> sad;
    for (int i = 0; i < n; i++)
    {
        sad.push_back(make_pair(int(mad[i][ith])-48,mad[i]));
    }
    

    forn(i,n){
        freq[int(mad[i][ith])-48]+=1;
    }
    forn(i,10){
        if (i==0)
        {
            i++;
        }
        freq[i]+=freq[i-1];
    }
    pair<int,string> b[n];
    for (int i = n-1; i >= 0; i--)
    {
        b[freq[int(mad[i][ith])-48]-1]=sad[i];
        freq[int(mad[i][ith])-48]=freq[int(mad[i][ith])-48]-1;
    }
    for (int i = 0; i < n; i++)
    {
        mad[i]=b[i].second;
    }
    
    return mad;
    
}


void solve()
{
    int n,k;
    cin>>n;
    cin>>k;
    string mad[n];
    for (int i = 0; i < n; i++)
    {
        cin>>mad[i];
    }
    string sad[n];
    string lad[n];
    forn(i,k){
        int a,b;
        cin>>a>>b;
        
        forn(j,n){
            sad[j]=mad[j].substr(mad[0].size()-b,b);
            lad[j]=mad[j].substr(mad[0].size()-b,b);
        }
       
    for (int lop = sad[0].size()-1; lop >=0 ; lop--)
    {
        optimizedCountingSort(sad,n,lop);
    }
    string lope = sad[a-1];
    bool az=1;
    int op=0;
    while(az){
        if (lad[op]==lope)
        {
            az=0;
        }
        op++;
    }
    cout<<op-1<<" ";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();

    return 0;
}