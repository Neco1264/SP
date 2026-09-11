/*

 //1.
 //da se najde zbir na cifri

#include<iostream>
using namespace std;
int zbir_cifri(int n){ //vo zagrada prima
    int cifra;
    int zbir=0;
    while(n>0){
        cifra=n%10;
        zbir+=cifra;
        n=n/10;
    }
    return zbir;
}
int main(){
    int broj;
    cout<<"Vnesi broj: "<<endl;
    cin>>broj;
    cout<<zbir_cifri(broj)<<" ";
}

//2.

//da se najde faktoriel

#include<iostream>
using namespace std;
int faktoriel(int n){
    int f=1;
    for(int i = 1;i<n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    cin>>n;
    cout<<faktoriel(n)<<endl;
}

//3.

//da se napravi funkcija powe() odnosno broj na stepen

#include<iostream>
using namespace std;
int pow(int broj,int stepen){
    int f=1;
    for(int i = 0;i<stepen;i++){
        f=f*broj;
    }
    return f;
}
int main(){
    int n;
    int stepen;
    cout<<"Vnesi broj: "<<endl;
    cin>>n;
    cout<<"Vnesi stepen: "<<endl;
    cin>>stepen;
    cout<<pow(n,stepen)<<endl;
}

//4.

//Da se najde najgolem i najmal element vo niza,
// vo posebni funkcii

#include<iostream>
using namespace std;
int najgolem(int a[100],int n){
    int max=-9999;
    for(int i =0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int najmal(int a[100],int n){
    int min=9999;
    for(int i = 0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int main(){
    int n;
    int a[100];
    cout<<"Vnesi elementi: "<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Najgolem e: "<<najgolem(a,n)<<endl;
    cout<<"Najmal e: "<<najmal(a,n);

}

//5.

//Da se najde najgolem i najmal i da se smenat mestata
//i da se vratat samo poziciite

#include<iostream>
using namespace std;
int najgolem(int a[100],int n){
    int max=a[0];
    int pozicija=0;
    for(int i =0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            pozicija=i;
        }
    }
    return pozicija;
}
int najmal(int a[100],int n){
    int min=a[0];
    int pozicija=0;
    for(int i = 0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            pozicija=i;
        }
    }
    return pozicija;
}
int main(){
    int n;
    int a[100];
    cout<<"Vnesi elementi: "<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int temp=a[najgolem(a,n)];
    a[najgolem(a,n)]=najmal(a,n);
    a[najmal(a,n)]=temp;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

//6.

//trite maximumi

#include<iostream>
using namespace std;
void najgolem(int a[100],int n){
    int max1=-9999;
    int max2=-9999;
    int max3=-9999;
    for(int i = 0;i<n;i++){
        if(a[i]>max1){
            max1=a[i];
        }
    }
    for(int i = 0;i<n;i++){
        if(a[i] != max1 && a[i]>max2){
            max2=a[i];
        }
    }
    for(int i = 0;i<n;i++){
        if(a[i] != max1 && a[i]!=max2 && a[i]>max3){
            max3=a[i];
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3<<endl;
}

int main(){
    int n;
    int a[100];
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    najgolem(a,n);
}


//7. DA se najde zbirot na site broevi od interval pocetok i kraj se vnesuvaat od tstatura koj sto se parni?

#include<iostream>
using namespace std;
int parni_broevi(int pocetok,int kraj){
    int zbir=0;
    for(int i = pocetok;i<=kraj;i++){
        if(i%2==0){
            zbir+=i;
        }
    }
    return zbir;
}
int main(){
    int pocetok,kraj;
    cin>>pocetok>>kraj;
    cout<<"Zbirot e: "<<parni_broevi(pocetok,kraj);
}


//8.

#include<iostream>
using namespace std;
int zbir_neparni_cifri(int n){
    int zbir=0;
    int cifra;
    for(int i = 0;i<n;i++){
        cifra=n%10;
        n=n/10;
        if(cifra%2!=0){
            zbir+=cifra;
        }
    }
    return zbir;
}
int main(){
    int n;
    cout<<"Vnesi broj: "<<endl;
    cin>>n;
    cout<<"Zbirot na neparnite e: "<<zbir_neparni_cifri(n);
}

*/


#include<iostream>
using namespace std;
int main(){

}