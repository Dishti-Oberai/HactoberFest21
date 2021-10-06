#include <iostream>
 
using namespace std;
 
int main()
{
    int X, N, a,b=0;
    cin>>X>>N;
    while(N<=0)
        cin>>N;
    for(a=X; a<X+N; a++)
    {
        b+=a;
    }
    cout<<b<<endl;
    return 0;
}