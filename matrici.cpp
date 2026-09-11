//vnesuvanje i pecatenje na matrica

/*
#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n;
    int m;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


//i  j    i  j    i  j
//a[0][0] a[0][1] a[0][2]
//a[1][0] a[1][1] a[1][2]
//a[2][0] a[2][1] a[2][2]
//

//pecatenje na glavna diagonala
#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}


//pecatenje na sporedna diagonala

#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+j==n-1){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

//pecatenje na elementi nad i pod glavna dijagonala

#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i<j){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i>j){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}


//pecatenje na elemenite nad i pod  sporednata dijagonala

#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+j<n-1){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+j>n-1){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

 */
/*i  j    i  j    i  j
a[0][0] a[0][1] a[0][2]
a[1][0] a[1][1] a[1][2]
a[2][0] a[2][1] a[2][2]
*/
/*
DA se najde zbirot od sekoj red posebno i da se ispecati
3
3
1 2 3
4 5 6
7 8 9
6
15
24

// PROVERI!!!!!!!


#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int zbir=0;
        for(int j=0;j<m;j++){
            zbir=zbir+a[i][j];
        }
        cout<<zbir<<endl;
    }
}


//da se najde max u sekoj red

#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int max=0;
        for(int j=0;j<m;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        cout<<max<<endl;
    }
}


//da  se najdat max i min i da im se smenat poziciite

#include<iostream>
using namespace std;
int main(){
    int a[100][100],min=9999,max=-9999,pozimin,pozjmin,pozimax,pozjmax;
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>max){
                max=a[i][j];
                pozimax=i;
                pozjmax=j;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]<min){
                min=a[i][j];
                pozimin=i;
                pozjmin=j;
            }
        }
    }
    cout<<"min: "<<min<<" pozicija: "<<pozimin<<" "<<pozjmin<<endl;
    cout<<"max: "<<max<<" pozicija: "<<pozimax<<" "<<pozjmax<<endl;
    int temp=a[pozimin][pozjmin];
    a[pozimin][pozjmin]=a[pozimax][pozjmax];
    a[pozimax][pozjmax]=temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

// da se proveri!!!!!

//Se pecatat site onolku cifreni breovi vo matricata kolku ke vnese korisnikot

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int kolku_cifreni;
    int a[100][100];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>kolku_cifreni;
    for(int i = 0;i<n;i++){
        int brojac=0;
        for(int j = 0;j<m;j++){
            int brojac2=0;
            int temp=a[i][j];
            while(temp>0){
                temp=temp/10;
                brojac2++;
            }
            if(brojac2==kolku_cifreni){
                cout<<a[i][j]<<" ";
                brojac++;
            }
        }
    }
    cout<<endl;
}


//Se vnesuvaat m i n i potoa elementite na matricata.
//Potoa se vnesuva i k koj ni kazuva
//kolku indeksi na redovi ke bidat vneseni.
//Se vnesuvaat indeksite na redovite i
//na kraj kolku cifreni broevi se baraat.
//Na krajot treba da se ispecati redot od
//n redovite pogore vnesen kade ima tolku cifreni broevi
//Vlez:
//4 5
//1 3 55 77 1
//10001 199 133 44 6
//23415 1677 12345 17898 1244
//1 2 55 170 11
//3 broj na indeksi na redovi
//0 2 3 indeks na redovi
//5 barame petcifreni broja

//izlez:
//23415  12345 17898

#include<iostream>
using namespace std;
int main(){
    int n,m,k;
    int kolku_cifreni_broevi;
    int a[100][100];
    int b[100];
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>k;//broj na red
    for(int i = 0;i<k;i++){
        cin>>b[i];
    }
    cin>>kolku_cifreni_broevi;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            int temp=a[b[i]][j]; //zemi go samo elementot od taa pozicija na matricata
            int brojac=0;
            while(temp>0){
                temp/=10;
                brojac++;
            }
            if(brojac==kolku_cifreni_broevi){
                cout<<j<<" -> "<<a[b[i]][j]<<endl;
            }
        }
    }
    cout<<endl;
}

//broi kolku duplikati na redici ima vo matricata

#include<iostream>
using namespace std;
int main(){
    int n,m;
    int brojac_duplikati=0;
    int brojac_elementi=0;
    int a[100][100];
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        brojac_duplikati=0;
        for(int k=i+1;k<n;k++){
            for(int j=0;j<m;j++){
                if(a[i][j]==a[k][j]){
                    brojac_duplikati++;
                }
                 if(brojac_duplikati==m){
                    brojac_elementi++;
                }
            }
        }
    }
    cout<<brojac_elementi<<endl;
}

//da se napishe programa koja za daden kvadratna matrica kje gi
// ispecati elementite nad glavnata i sporednata dijagonala i
// elementite pod glavnata i sporednata dijagonala, pecatenjeto da bide vo forma na matrica

/*
5
5
1 2 3 4 5
6 7 8 9 0
3 4 5 6 8
9 8 3 1 2
5 1 5 2 3
1        5
  7    9
    5
  8    1
5        3
*/

#include<iostream>
using namespace std;
int main(){
    int m,n;
    int a[100][100];
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                cout<<a[i][j]<<"  ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}


//da se napishe programa kade matricata treba da se izmeni
//na takov nacin shto elementite od glavnata i sporednata dijagonala
//kje gi zamenat svoite mesta, na kraj da se otpecati promenetata matrica

#include <iostream>
using namespace std;

int main() {
    int a[100][100];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int temp = a[i][i];
        a[i][i] = a[i][n - 1 - i];
        a[i][n - 1 - i] = temp;
    }
    cout <<"Zameneta matrica:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// OD SLIKITE


#include <iostream>
using namespace std;
int main() {
    int n,m,temp;
    cin>>n>>m;
    int a[100][100];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<n;i++){
       temp=a[i][i];
       a[i][i]=a[i][n-1-i];
        a[i][n-1-i]=temp;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
        cout<<endl;
        }
}


 i  j
 a[0][0] a[0][1] a[0][2]
 a[1][0] a[1][1] a[1][2]
 a[2][0] a[2][1] a[2][1]



//od slikite


#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int max;
    int zbir=0;
    int pozi;
    int pozj;
    int a[100][100];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(a[i][j]>max){
                max=a[i][j];
                pozi=i;
                pozj=j;
            }
        }
    }
        for(int j = 0;j<m;j++){
            zbir+=a[pozi][j];
        }
    a[pozi][pozj]=zbir-max;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
}

//od slikite


#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[100][100];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0;i<n;i++) {
        for (int j = 0; j < m; j++) {
            int brojac=0;
            for (int k = 0; k < n; k++) {
                for (int q = 0; q < m; q++) {
                    if (a[i][j] == a[k][q]){
                        brojac++;
                    }
                    }
                }
            if(brojac>1){
                cout<<"  ";
            }
            else{
                cout<<a[i][j]<<" ";
            }
            }
        cout<<endl;
        }
    }
*/



















