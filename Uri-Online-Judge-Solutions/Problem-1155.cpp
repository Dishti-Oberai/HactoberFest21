#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
float sum=0;
for(float i=1;i<=100;i++){
    sum+=1/i;
}
cout<<setprecision(3)<<sum<<endl;
    return 0;
}