#include <bits/stdc++.h>
using namespace std;
vector <int> tree(1e5,0);
int treesize=1;

int minh,minw;
void hcut(int index)
{
    if(index>treesize)
    {
        cout<<"out of bound"<<endl;
    }
    else if (tree[index]==0)
    {
        cout<<"no node with this index"<<endl;
    }
    else
    {
        treesize=max(treesize,2*index+1);
        tree[index]=-1;
        tree[2*index]=1;
        tree[2*index+1]=1;
    }
}
void vcut(int index)
{
    if(index>treesize)
    {
        cout<<"out of bound"<<endl;
    }
    else if (tree[index]==0)
    {
        cout<<"no node with this index"<<endl;
    }
    else
    {
        treesize=max(treesize,2*index+1);
        tree[index]=-2;
        tree[2*index]=1;
        tree[2*index+1]=1;
    }
}
int finalh=0,finalw=0;
pair<int,int> finalrect(int ind){
    pair<int,int> ans;
    if(tree[ind]==1)
    {
        ans.first=minh;
        ans.second=minw;
        return ans;
        
    }
    else if(tree[ind]==-1)
    {
        ans.first=(finalrect(2*ind).first+finalrect(2*ind+1).first);
        ans.second=max(finalrect(2*ind).second,finalrect(2*ind+1).second);
    }
    else if(tree[ind]==-2)
    {
        ans.second=(finalrect(2*ind).second+finalrect(2*ind+1).second);
        ans.first=max(finalrect(2*ind).first,finalrect(2*ind+1).first);
    }
    return ans;
} 






int main()
{
    tree[1]=1;
    cout<<"enter min height of rectangle unit"<<endl;
    cin>>minh;
    cout<<"enter min width of rectangle unit"<<endl;
    cin>>minw;
    cout<<"index of tree starts with 1 and tree follows array implementation that is children are at 2*index and 2*index+1"<<endl;
    int cut=1;
    while(cut)
    {
        cout<<"enter index to cut and 0 to not"<<endl;
         
        cin>>cut;
        if(cut)
        {
            int type=0;
            cout<<"enter -1 for horizontal cut and -2 for vertical cut"<<endl;
            cin>>type;
            if(type)
            {
                if(type==-1)
                {
                    hcut(cut);
                }
                else
                {
                    vcut(cut);
                }
            }
            
        }
    }
    
    
    pair<int,int> ans=finalrect(1);
    cout<<"height of final rectangle is "<<ans.first<<" width is "<<ans.second<<endl;
    
    
return 0;
}