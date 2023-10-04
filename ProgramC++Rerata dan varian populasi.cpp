#include <iostream>
using namespace std;

int main(){
    
//DEKLARASI, INTRO, INPUT BANYAK nDATA
int i,n;
float nilai[100];

cout<<"     SELAMAT DATANG DI PROGRAM MENGHITUNG RERATA DAN VARIENS DARI DATA-DATA \n ";
cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n \n";
cout<<"Tolong masukkan banyaknya data yang ingin anda input: ";
cin >> n;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n \n";

//INPUT DATA
    //LOOP 1
for(int i=1;i<=n;i++){
    cout<<"Data Ke-"<< i <<" : ";
    cin >> nilai[i];
}
cout<<"\n--------------- \n \n";
//RATA-RATA(MEAN)
float mean1 = 0;
float mean = 0;

    //LOOP 2
for(int i=1; i<=n; i++){
    mean1 += nilai[i];
}
mean = mean1/n;


//VARIAN POPOULASI(VARIANS)
float varians = 0; 
float mean2 = 0;

    //LOOP 3
for(int i=1; i<=n; i++){
    mean1 += nilai[i];
   
}
 mean2 = mean1/n;

    //LOOP 4
for(int i=1; i<=n; i++){
varians += ((nilai[i]-mean2)*(nilai[i]-mean2));
}
varians = varians/n;


//OUTPUT ATAU HASIL PENGHITUNGAN
cout<<"Rata-rata = "<<mean<<endl;
cout<<"================ \n";
cout<<"Varian Populasi = "<<varians<<endl;
cout<<"================ ";

cin.get();
    
    return 0;
}