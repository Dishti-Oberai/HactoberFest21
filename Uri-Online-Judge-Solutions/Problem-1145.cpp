#include <iostream>
 
using namespace std;
 
int main() {
int X,Y;
cin>>X>>Y;
for(int i=1;i<=Y-X+1;i=i+X){
    for(int j=i;j<i+X;j=j+1){
        if(j<i+X-1){cout<<j<<" ";}
        if(j==i+X-1){cout<<j;}
    }
    cout<<endl;
}
    return 0;
}