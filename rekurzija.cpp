/*
//faktoriel so rekurzija

#include<iostream>
using namespace std;
int faktoriel(int broj){
    if(broj==0){
        return 1;
    }
    else return broj* faktoriel(broj-1);//dvizenje
}

int main(){
    int n;
    cin>>n;
    cout<<"Faktoriel= "<<faktoriel(n)<<" ";
}


// broj na stepen so rekurzija
#include<iostream>
using namespace std;
int broj_na_stepen(int broj,int stepen){
    if(stepen==0){
        return 1;
    }
    else{
        return broj*broj_na_stepen(broj,stepen-1);
    }
}
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    cout<<"f="<<broj_na_stepen(n,m)<<endl;
}


// da se najde zbirot na cifri na eden broj so rekurzija


#include <iostream>
#include <cstring>
using namespace std;
int ZbirNACifriteNAbroj(int broj){
    if(broj<10){ // stop uslov
        return broj;
    }
    else{
        return broj%10+ZbirNACifriteNAbroj(broj/10); //dvizenje ->ZbirNACifriteNAbroj(broj/10)
    }
}
int main(){
    int n;
    cin>>n;

    cout<<"f="<<ZbirNACifriteNAbroj(n) <<endl;

}


// 3.Da se napise funkciska programa koja kako vlez dobiva dva celi broja.
//Funkcijata proveruva dali sumite na cifrite od dvata broja se isti.
//Odreduvanjeto na sumata na cifrite eden broj da se izvrsi so pomos na posebna rekuzivna funkcija?

#include <iostream>
#include <cstring>
using namespace std;
int ZbirNACifriteNAbroj(int broj){
    if(broj<10){ // stop uslov
        return broj;
    }
    else{
        return broj%10+ZbirNACifriteNAbroj(broj/10); //dvizenje ->ZbirNACifriteNAbroj(broj/10)
    }
}
int sporedba(int a,int b){
    if(ZbirNACifriteNAbroj(a)==ZbirNACifriteNAbroj(b)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    if(sporedba(n,m)){
        cout<<"Broevite imaat isti zbir na cifri!"<<endl;
    }
    else{
        cout<<"Broevite Nemaat isti zbir na cifri!"<<endl;
    }

}



//zbir na site broevi od interval, na parni

#include<iostream>
using namespace std;
int zbir(int a,int b){
    if(a>b){
        return 0;
    }
    if(a==b){
        return b;
    }
    if(a%2==0){
        return a+zbir(a+1,b); //za paren sobirame i dvizime
    }else{
        zbir(a+1,b); //dvizenje
    }
}

int main(){
    int a,b;
    cout<<"Vnesi interval(pocetok i kraj): ";
    cin>>a>>b;
    cout<<zbir(a,b)<<" ";
}


//da se napravi brojac(za kolku cifri ima eden broj)

#include<iostream>
using namespace std;
int brojac(int broj){
    if(broj==0){
        return 0;
    }
    else{
        return 1+brojac(broj/10);
    }
}

int main(){
    int broj;
    cin>>broj;
    cout<<"Brojot ima: "<<brojac(broj)<<" cifri!";
}


//


#include<iostream>
using namespace std;
int zbir_cifri(int broj){
    if(broj<10){
        return broj;
    }
    else{
        return broj%10+ zbir_cifri(broj/10);
    }
}
int prost_broj(int n){
    int brojac=0;
    for(int i = 0;i<=n;i++){
        if(n%i==0){
            brojac++;
        }
    }
    if(brojac<=2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<n;i++){
        if(prost_broj(zbir_cifri(i))){
            cout<<i<<" "<<endl;
        }
    }
}


//da se napishe programa koja na vnesen cel broj go dodava
//brojot zapishan so istite cifri no vo obraten redosled
//potoa proveruvame dali noviot broj e palindrom

#include<iostream>
using namespace std;
int prevrten_broj(int broj,int pomosna) {
    pomosna += broj % 10;
    broj /= 10;
    if (broj != 0) {
        pomosna = prevrten_broj(broj, pomosna * 10);
    }
    return pomosna;
}
int main(){
    int n,rezultat;
    cin>>n;
    rezultat=n+ prevrten_broj(n,0);
    if(n== prevrten_broj(rezultat,0)){
        cout<<"Brojot e palindrom!"<<endl;
    }
    else{
        cout<<"Ne e palindrom!"<<endl;
    }
}

//DA se napise programa koja na vnesen cel broj go dodava brojot zapisan so istite cifri no
//vo obraten redosled. Potoa programata proveruva dali noviot broj e palindrom i na ekran pecati soodvetna poraka
//23 -> 23+32 =55 brojot e palindrom
//1753 -> 1753+3571=5324 brojot ne e palindrom
#include <iostream>
#include <string>
using namespace std;
int prevrten_broj(int broj,int pomosna){
    pomosna=pomosna+broj%10;
    broj=broj/10;
    if(broj!=0){
        pomosna=prevrten_broj(broj,pomosna*10);

    }
    return pomosna;
}

int main(){
    int broj,rezultat;
    cout<<"Vnesi broj:";
    cin>>broj;
    rezultat=broj+prevrten_broj(broj,0);
    if(rezultat==prevrten_broj(rezultat,0)){
        cout<<"Brojot e palindrom!"<<endl;
    }
    else{
        cout<<"Brojot ne e palindrom!"<<endl;
    }
}
*/
//Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
//На почетокот се внесуваат димензиите на матрицата, а потоа и
//елементите на матрицата кои се само вредностите 1 и 0.
//Програмата треба да изброи и отпечати на СИ во колку од редиците и
//колоните има барем 3 последователни елементи со вредност 1.

// i  j
//[0][0] [0][1] [0][2]
//[1][0] [1][1] [1][2]
//[2][0] [2][1] [2][2]


