#include <iostream> 

using namespace std; 

int main()
{

cout<<"BODY MASS INDEX CALCULATOR";
cout<<"\n==========================\n";

//DEKLARASI x= TINGGI BADAN; y= BERAT BADAN; Hasil= HASIL PERHITUNGAN    
float x,y,Hasil;
    cout<<"Body Weight (KG): "; cin>>x;
    cout<<"Body Height (M): "; cin>>y;
    Hasil = x/(y*y); 
    cout<<"--------------------\n";

//PENGKATEGORIAN BMI

if(Hasil <18.5)
   cout<<"UNDERWEIGHT";
   else if(Hasil >=18.5 && Hasil <25)
   cout<<"IDEAL WEIGHT";
   else if(Hasil >=25 && Hasil <30)
   cout<<"OVERWEIGHT";
   else if(Hasil >=30 && Hasil <40)
   cout<<"OBESE";
   else if(Hasil >=40)
   cout<<"SEVERELY OBESE";



    return 0;
}