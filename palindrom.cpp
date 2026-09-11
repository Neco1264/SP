//izbrishi gi site palindrom
#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int temp=a[i];
        int prevrten=0;
        while(temp>0){
            int cifra=temp%10;
            prevrten=prevrten*10+cifra;
            temp=temp/10;
        }
        if(prevrten==a[i]){
            for(int k=i;k<n-1;k++){
                a[k]=a[k+1];
            }
            n--;
            i--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}