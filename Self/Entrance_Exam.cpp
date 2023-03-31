#include <bits/stdc++.h>

using namespace std; 
int main ()
{
    int stu,suc,exm,mark,tc,a,b,c,d,e,f, mytot,p;
    cin>>tc ;
    while(tc>0)
    {
    cin>>stu>>suc>>exm>>mark;
    int size=stu-1;
    int j = stu ;
    int TOTAL[size];
    int i=0;
    if(0<suc<stu<10001&&0<exm<5&&0<mark<=1000000000&&0<tc<6)
    {
        while (stu>1)
        {
            b=0 ;
            f=exm;
            while (f>0)
            {
                cin>>a ;
                b = b+a ;
                f--;
            }
            
            TOTAL[i] = b ;
            i++;
            stu--;
        }
        sort(TOTAL,TOTAL+(size));
         
        b=0;
        f= exm-1 ;
        while (f>0)
            {
                cin>>a ;
                b = b+a ;
                f--;
            }
        mytot = b;
       
        p = TOTAL[j-suc-1]-mytot+1;
        if (mark>=p)
        {
            cout<<p<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
        
        
        
        
    }
    tc--;
    }
return 0;
}