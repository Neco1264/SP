//Vezbanje


//doreshi so Oliver -- String

//Се внесуваат низи од знаци од стандарден влез.
// Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците.
// Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран,
// секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.
// Читањето завршува кога ќе се прочита знакот #.

/*



#include<iostream>
#include<cstring>
using namespace std;
int sosedni_samoglaski(char a[1000]){
    int n = strlen(a);
    int brojac = 0;
    for(int i = 0;i<n;i++){
        if(isupper(a[i])){
            tolower(a[i]);
        }
        if(isalnum(a[i])){
            if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && (a[i+1]=='a' || a[i+1]=='e' || a[i+1]=='i' || a[i+1]=='o' || a[i+1]=='u')){
                brojac++;
                cout<<a[i]<<endl;
            }
        }
    }
    cout<<brojac<<endl;
}
int main(){
    char a[1000];
    cin.getline(a,1000);
    sosedni_samoglaski(a);
}


*/

//Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
//На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0.
//Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.
/*
  i  j
a[0][0] a[0][1] a[0][2]
a[1][0] a[1][1] a[1][2]
a[2][0] a[2][1] a[2][1]
 */
#include<iostream>
#include<cstring>
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
    for(int i = 0;i<n;i++){
        int brojac=0;
        int brojac2=0;
        for(int j = 0;j<m;j++){
            if(a[i][j]==1){
                brojac++;
                if(brojac==3){
                    brojac2++;
                }
            }else{
                break;
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<a[i][j];
        }
    }
}
