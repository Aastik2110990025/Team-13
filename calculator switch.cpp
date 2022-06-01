#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"enter integer n1 and n2\n"<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"enter operator between two integers";
    cin>>op;
    switch(op){
     case'+':
        cout<<n1+n2<<endl;
        break;
     case'-':
        cout<<n1-n2<<endl;
         break;
     case'*':
         cout<<n1*n2<<endl;
          break;
     case'/':
         cout<<n1/n2<<endl;
          break;
     default:
        break;
    }
    return 0;
}
