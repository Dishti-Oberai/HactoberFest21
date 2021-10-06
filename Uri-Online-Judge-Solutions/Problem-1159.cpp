#include <iostream>
 
using namespace std;
 
int main() {
int X;
while(1){
    cin>>X;
    if(X!=0){
        int sum=0;
        int k=0;
        while(k<5){
            if(X%2==0){
                sum+=X;
                k++;}
            X=X+1;}
        cout<<sum<<endl;}
    if(X==0)
    break;
}
    return 0;
}