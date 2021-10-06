#include <iostream>
 
using namespace std;
 
int main() {
    int Y,Z;
    int X=0;
    int Inter=0;
    int Gremio=0;
    int Empates=0;
    int grenais=0;
while(X!=2){
    cin>>Y>>Z;
    grenais+=1;
    if(Y>Z){Inter+=1;}
    else if(Y<Z){Gremio+=1;}
    else{Empates+=1;}
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    cin>>X;
}
cout<<grenais<<" grenais"<<endl;
cout<<"Inter:"<<Inter<<endl;
cout<<"Gremio:"<<Gremio<<endl;
cout<<"Empates:"<<Empates<<endl;
if(Inter>Gremio){cout<<"Inter venceu mais"<<endl;}
else if(Inter<Gremio){cout<<"Gremio venceu mais"<<endl;}
else{cout<<"Não houve vencedor"<<endl;}
    return 0;
}