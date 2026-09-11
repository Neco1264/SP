//najdi sovrsheni

#include<iostream>
using namespace std;
int main(){
    int n;
    int a[100];
    int zbir=0;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        zbir=0;
        for(int j=1;j<a[i];j++){
            if(a[i]%j==0){
                zbir+=j;
            }
        }
        if(zbir==a[i]){
            cout<<a[i];
        }
    }
    return 0;
}