#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter the number:";
cin>>x;
int k =1;
for(int i =1; i<=x;i++){
    for(int j =1 ;j<=i;j++){
        cout<<k<<" ";
        k++;

    }
    cout<<endl;
}
}