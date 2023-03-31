#include<iostream>
using namespace std;
int main(){
        bool done{false};
        int a,b,c,d;
        cin>>a,b,c,d;
        for(int i=0;i<=a && !done;++i){
            for(int j=0;j<=b && !done;++j){
                for(int k=0;k<=c && !done;++k){
                    for(int l=0;l<=d && !done;++l){
                            if (i*j*k*l==0){
                                done = true;   
                            }else 
                                cout<<i*j*k*l<<endl;
                    }
                }
            }
        }
        
return 0;
}
#include <iostream>
using namespace std;
int main(){
        int a,b;
        int c,d;
        cin>>a>>b>>c>>d;
        for(int i=1;i<=a;++i){
            for(int j=1;j<=b;++j){
                for(int k=1;k<=c;++k){
                    for(int l=1;l<=d;++l){
                            if (i*j*k*l<100)
                            goto madhav;
                        else 
                            cout<<i*j*k*l<<endl;
                    }
                }
            }
        } madhav:cout<<"Thanks"<<endl;
        
return 0;
}