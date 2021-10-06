#include <iostream>
 
using namespace std;
 
int main() {
int N;
cin>>N;
int X,Y;
for(int i=0;i<N;i++){
    cin>>X>>Y;
    int sum=0;
    int k=0;
    while(k<Y){
        if(X%2!=0){
            sum+=X;
            k++;
        }
    X=X+1;
    }
    cout<<sum<<endl;
}
    return 0;
}