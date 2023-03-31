#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"input string in smallcase : ";
    string mad;
    cin>>mad;
    int mad1=0;
    int mad2=0;
    char *p = &mad[0];
    while (*p!='\0')
    {
        if (*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
    {
        mad1++;
    }else
    {
        mad2++;
    }
    *p++;
    }
    
    
    cout<< " NO of vowels &x "<<mad1<<" no of consonants "<<mad2<<endl;
    
    
    
    return 0;
 
}