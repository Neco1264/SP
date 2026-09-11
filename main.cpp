/*
Da se najdat site sovrsheni vo niza

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


//site palindromi vo niza
#include<iostream>
using namespace std;
int main(){




}

//DA se najde kolku pati se
//povtoruva nekoj element vo edna niza
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Vnesi kolkava kje bide nizata: "<<endl;
    cin>>n;
    int brojac=0;
    int element;
    int a[100];
    cout<<"Vnesi elementi vo nizata: "<<endl;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Vnesi element: "<<endl;
    cin>>element;
    for(int i =0;i<n;i++){
        if(a[i]==element){
            brojac++;
        }
    }
    cout<<"Elementot: "<<element<<endl<<"Se povtoruva: "<<brojac<<endl;
    return 0;
}

//site prosti elementi

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int brojac=0;
    int a[100];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        brojac=0;
        for(int j=1;j<a[i];j++){
            if(a[i]%j==0){
                brojac++;
            }
        }
        if(brojac<=2){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int brojac=0;
    int a[100];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        brojac=0;
        for(int j=1;j<a[i];j++){
            if(a[i]%j==0){
                brojac++;
            }
        }
        if(brojac<=2){
            for(int k=i;k<n;k++){
                a[k]=a[k+1];
            }
            n--;
            i--;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

//izbrishi gi site palindrom
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        int temp=a[i];
        int prevrten=0;
        int cifra;
        while(temp>0){
            cifra=temp&10;
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
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}


//brisheme duplikat

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]){
                for(int k = i; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
                i--;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        return 0;
    }
}


//sortiranje na niza

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < i; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
*/
/*
 // matrica - dvodimenzionalna niza

 i  j    i  j    i  j
a[0][0] a[0][1] a[0][1]
a[1][0] a[1][1] a[1][2]
a[2][0] a[2][1] a[2][2]
*/


