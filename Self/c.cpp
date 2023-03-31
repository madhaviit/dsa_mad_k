#include <iostream>
using namespace std;
      int romanToInt(string s) {
         int a = 1000;
   int b = 500;
   int c = 100;
   int d = 50;
   int e = 10;
   int f = 5;
char M;
char D;
char C;
char L;
char X;
char V;
          a =M;
          b =D;
          c =C;
          d =L;
          e =X;
          f =V;

        char I;
        int strlen = s.length();
        char x = s[strlen-2];
        char y = s[strlen-1];
        int INT = 0;
        if(x==I && y!=I){
            int I = -1;
        }
        else{
            int I = 1;
        }
        for(int p = 0; p<strlen;p++){
            INT = INT+ s[p];
        }
        cout<<INT;
        
        
    };
int main() 
{
   
   string given;
   cin>>given;
   int soln= romanToInt(given);
   return 0;
}
