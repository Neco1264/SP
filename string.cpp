#include<iostream>
#include<cstring>
using namespace std;
/*
//PALINDROM


int palindrom(char a[1000]){
    int n = strlen(a);
    for(int i = 0;i<n;i++){
        if(a[i]!=a[n-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char a[1000];
    gets(a);
    if(palindrom(a)==1){
        cout<<"PALINDROM!"<<endl;
    }
    else{
        cout<<"NE!!!"<<endl;
    }
}



//Od Edna tekstualna niza vnesena od
// korisnikot da se isfrlat broevite
// (odnosno cifrite)



int brishenje_cifri(char a[1000]){
    int n=strlen(a);
    int j =0;
    for(int i = 0;i<n;i++){
            if(isdigit(a[i])==0){
                a[j]=a[i];
                j++;
            }
        }
    a[j]='\0';
    }

int main(){
    char a[1000];
    gets(a);
    brishenje_cifri(a);
    puts(a);

}



//Golemi vo mali i obratno

int golemi_mali(char a[1000]){
    int n = strlen(a);
    int j = 0;
    for(int i = 0;i<n;i++){
        if(isdigit(a[i])==0){
            if(isupper(a[i])){
                a[j]=tolower(a[i]);
                j++;
            }

            else if(islower(a[i])){
                a[j]= toupper(a[i]);
                j++;
            }
        }
    }
    a[j]='\0';
}
int main(){
    char a[1000];
    gets(a);
    golemi_mali(a);
    puts(a);
}


//Prazni mesta

#include<iostream>
#include<cstring>
using namespace std;
void prazni_mesta(char a[1000]){
    int n = strlen(a);
    int j = 0;
    for(int i = 0;i<n;i++){
        if(isspace(a[i])){
            while(isspace(a[i+1]) && i<n)
                i++;
        }
        a[j]=a[i];
        j++;
    }
    a[j]='\0';
}
int main(){
    char a[1000];
    cin.getline(a,1000);
    prazni_mesta(a);
    for(int i = 0;i<strlen(a);i++){
        cout<<a[i];
    }
}




//Zdravo Oliver Kako si?  O

void frekvencija(char *a,char bukva){
    int brojacGolemi=0;
    int brojacMali=0;
    int j = 0;
    for(int i = 0;i<strlen(a);i++){
        if(*(a+i)==tolower(bukva)){ //if(a[i]==tolower(bukva))
            brojacMali++;
        }
        if(*(a+i)==toupper(bukva)){ //bez pokazuvac -> if(a[i]==toupper(bukva))
            brojacGolemi++;
        }
    }
    cout<<((float)brojacMali/strlen(a)) * 100;//za procent
    cout<<((float)brojacGolemi/strlen(a)) * 100;//za procent

}
int main(){
    char a[1000],bukva;
    fgets(a,1000,stdin);
    cin>>bukva;
    frekvencija(a,bukva);
}


//za broenje na zborovi

void brojac_zborovi(char a[1000]){
    int voZbor=0;
    int brojac=0;
    for(int i = 0;i<strlen(a);i++){
        if(isalnum(a[i])){
            if(voZbor==0){
                voZbor=1;
                brojac++;
            }
        }
        else if(isspace(a[i])){
            voZbor=0;
        }
    }
    cout<<brojac<<endl;
}
int main(){
    char a[1000];
    fgets(a,1000,stdin);
    brojac_zborovi(a);
}




int main(){
    char a[1000],bukva;
    int brojac=0;
    int vozbor=0;
    while((fgets(a,1000,stdin))!=NULL) {
        for (int i = 0; i < strlen(a); i++) {
            if (isalnum(a[i])) {
                if (vozbor == 0) {
                    vozbor = 1;
                    brojac++;
                }
            }
            else if (isspace(a[i])) {
                vozbor = 0;
            }
        }
    }
    cout<<brojac<<": ";
    puts(a);

}




//Da se napishe funkcija koja  ke gi
//napravi  Samoglaskite golemi bukvi,
// a soglaskite mali  bukvi
//od tekstualna niza vnesena od tastatura




#include<iostream>
#include<cstring>
using namespace std;
void samoglaski_soglaski(char a[1000]){
    int n = strlen(a);
    for(int i = 0;i<n;i++){
        if(isalpha(a[i])){
            if(tolower(a[i])=='a'|| tolower(a[i])=='e'|| tolower(a[i])=='i'|| tolower(a[i])=='o'|| tolower(a[i]=='u')){
                a[i]= toupper(a[i]);
            }else{
                a[i]= tolower(a[i]);
            }
        }
    }
}
int main(){
    char a[1000];
    cin.getline(a,1000);
    samoglaski_soglaski(a);
    puts(a);
}








//  Brojac na palindromi

//  ima nekoja greshka !!!


#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
bool Palindrom(char a[1000]){
    int n = strlen(a);
    for(int i = 0;i<n;i++){
        if(tolower(a[i]) != tolower(a[n-1-i])){
            return false;
        }
    }
    return true;
}
int brojPalindromi(char a[1000]) {
    int brojac = 0;
    int n = strlen(a);
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (isalnum(a[i]) || a[i] == '\0') {
            if (!flag){
                flag = true;
                if(Palindrom(a)){
                    brojac++;
                }
            }
        }else {
            flag = false;
        }
    }
    return brojac;
}
int main(){
    char a[1000];
    cin.get(a,1000);
    cout<<brojPalindromi(a);
}








 //  kolku zborovi zapocnuvaat na O ili o

#include<iostream>
#include<cstring>
using namespace std;
int zapocnuva_na_O(char a[1000]){
    int n=strlen(a);
    int brojac=0;
    bool flag=false;
    for(int i = 0;i<n;i++){
        if(isalnum(a[i]) || a[i]=='\0'){
            if(!flag){
                flag=true;
                if(a[i]=='o' || (a[i]=='O')){
                    brojac++;
                }
            }
        }else{
            flag=false;
        }
    }
    return brojac;
}
int main(){
    char a[1000];
    cin.get(a,1000);
    cout<<zapocnuva_na_O(a);
}


*/

/*


//kolku pati A1c, a1c, A1C, a1C se povtoruva



#include<iostream>
#include<cstring>
using namespace std;
int odGolemiVoMali(char a[1000]){
    int n = strlen(a);
    for(int i = 0;i<n;i++){
        if(isupper(a[i])){
            a[i]= tolower(a[i]);
        }
    }
}
int pojavuvanje(char a[1000]){
    int n = strlen(a);
    int brojac=0;
    odGolemiVoMali(a);
    for(int i = 0;i<n;i++){
        if(a[i]=='a' && a[i+1]=='1' && a[i+2]=='c'){
            brojac++;
        }
    }
    return brojac;
}
int main(){
    char a[1000];
    cin.get(a,1000);
    cout<<pojavuvanje(a);
}


*/







