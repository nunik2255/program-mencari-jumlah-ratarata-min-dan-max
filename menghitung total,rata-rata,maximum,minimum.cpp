#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    float n,bil,min,max,jumlah,rata2,i;
    int pilih;

    cout<<"Masukan Jumlah Bilangan = " ;
    cin>>n;
    jumlah=0;
    min=i;
    max=0;
    for(i=1; i<=n; i++){
        cout<<"Masukan nilai n ke-"<<i<<":";
        cin>>bil;
        jumlah=jumlah+bil;
        if (max<bil){
            max=bil;
        }else if (min>bil){
        min=bil;}
        rata2=jumlah/n;
    }
    cout<<endl;
    menu:
        cout<<"Pilih Tindakan = "<<endl;
        cout<<"1. Jumlah"<<endl;
        cout<<"2. Rata-rata"<<endl;
        cout<<"3. Nilai Maximun"<<endl;
        cout<<"4. Nilai Minimun"<<endl;
        cin>>pilih;
        switch(pilih){
        case 1:
        cout<<"Jumlahnya adalah ="<<jumlah<<endl;
        getch ();
        goto menu;
        case 2:
        cout<<"Rata-rata adalah ="<<rata2<<endl;
        getch();
        goto menu;
        case 3:
        cout<<"Nilai Maximum adalah ="<<max<<endl;
        getch();
        goto menu;
        case 4:
        cout<<"Nilau Minimun adalah ="<<min<<endl;
        getch();
        goto menu;
        }
        return 0;
}
