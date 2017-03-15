#include <iostream>
using namespace std;
int main()
{
    int a,b=2,c,d,e[1000];
    cin>>a;
    e[0]=1;
    e[1]=1;
    while(b<a)
    {
        e[b]=e[b-1]+e[b-2];
        b++;
    }
    cout<<e[a-1];
    return 0;
}
