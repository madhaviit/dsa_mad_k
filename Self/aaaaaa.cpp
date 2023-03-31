#include <bits/stdc++.h>

using namespace std; /*The first line of the input contains an integer T denoting the number of test cases.
The description of T test cases follows.The first line of each test case contains four space separated 
integers N, K, E, M denoting the number of students, the maximal number of students who'll get enrolled,
the total number of entrance exams and maximal number of points for a single exam, respectively.
The following N-1 lines will contain E integers each, where the first E-1 integers correspond to the
scores of the exams conducted. The last integer corresponds to the score at the last exam, that 
was predicted by the fortune-teller. The last line contains E-1 integers denoting Sergey's score
for the first E-1 exams.
Output
For each test case, output a single line containing the minimum score Sergey should get in the last exam in
order to be enrolled. If Sergey doesn't have a chance to be enrolled, output "Impossible" (without quotes).*/
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
    if(0<stu<10001 && 0<suc<10001  && 0<exm<5 && 0<mark<1000000001 && 0<tc<6)
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
        sort(TOTAL,TOTAL+(size),greater<int>());
         for (int i = 0; i < size ; i++)
        {
            cout<<TOTAL[i]<<" ";
        }
        b=0;
        f= exm-1 ;
        while (f>0)
            {
                cin>>a ;
                b = b+a ;
                f--;
            }
        mytot = b;
        cout<< TOTAL[j-suc-1];
        cout<< mytot;
        p = TOTAL[j-suc-1]-mytot+1;
        if (mark>=p)
        {
            cout<<p<<endl;
        }
        else
        {
            cout<<"Impossible";
        }
        
        
        
        
    }
    tc--;
    }
return 0;
}