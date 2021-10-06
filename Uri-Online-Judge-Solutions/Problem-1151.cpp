#include <iostream>
 
using namespace std;
 
int main() {
int N;
cin>>N;
int a1=0;
int a2=1;
int sum;
cout<<a1<<" "<<a2<<" ";
for(int i=0;i<N-2;i++){
    sum=a1+a2;
    if(i!=(N-3)){cout<<sum<<" ";}
    if(i==(N-3)){cout<<sum;}
    a1=a2;
    a2=sum;
    
}
cout<<endl;
 
    return 0;
}