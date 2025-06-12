#include <iostream>
using namespace std; 
int main(){
    int n,anx,A[20];
    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n; 
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=1;i<n/2;i++){
        anx=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=anx;
    }
    for(int i=1;i<n;i++){
        cout<<A[i];
    }
    return 0; 
}
