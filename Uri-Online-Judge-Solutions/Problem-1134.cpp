#include <iostream>
 
using namespace std;
 
int main() {
int X;
int a=0;
int g=0;
int d=0;
while(1){
    cin>>X;
    if(X<1 || X>4){
        cin>>X;
    }
    if(X==1){a+=1;}
    else if(X==2){g+=1;}
    else if(X==3){d+=1;}
    else if(X==4){break;}
}
cout<<"MUITO OBRIGADO"<<endl;
cout<<"Alcool: "<<a<<endl;
cout<<"Gasolina: "<<g<<endl;
cout<<"Diesel: "<<d<<endl;


 
    return 0;
}