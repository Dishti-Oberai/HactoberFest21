#include <iostream>
 
using namespace std;
 
int main() {
int X,Y;
int min,max;
cin>>X>>Y;
if(X>Y){
    min=Y;
    max=X;
}
else{
    min=X;
    max=Y;
}
for(int i=(min+1);i<max;i++){
    if(i%5==2 || i%5==3){
        cout<<i<<endl;
    }
}
 
    return 0;
}