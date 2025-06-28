//Bilgisayar 1-100 arasında bir sayı tutsun. Sen bu sayıyı tahmin edene kadar girmeye devam et. Daha büyük veya daha küçük yönlendirmesi yapsın.

#include <iostream>
#include <cstdlib>  // rand, srand
#include <ctime>    // time

using namespace std;

int main()
{
    srand(time(0));

    int gizliSayi = rand() % 100 + 1 , girilenSayi , denemeSayisi = 0;

    do
    {
    cout<<"Bir sayi giriniz: ";
    cin>>girilenSayi;

    denemeSayisi++;

    if (gizliSayi > girilenSayi)
    {
    cout<<"Girdiginiz sayi gizli sayidan kucuk!"<<endl;
    cout<<denemeSayisi<<". denemen!"<<endl;
    }
         else if (gizliSayi < girilenSayi)
         {
         cout<<"Girdiginiz sayi gizli sayidan buyuk!"<<endl;
         cout<<denemeSayisi<<". denemen!"<<endl;
         }
    }
    while (gizliSayi != girilenSayi);

    cout<<"Dogru tahmin! Gizli sayi: "<<gizliSayi<<" 'idi!";






     cin.ignore();
     cin.get();
	return 0;
}
