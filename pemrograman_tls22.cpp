//Program untuk menghitung persentase alokasi pengeluaran bulanan 
#include <iostream>
using namespace std;

int main()
{
    int pm, mk, iu, ll, kp, jj,bl, hb, sisa;
 	float pkp, phb, pt;
    cout<<"Masukkan pemasukan : Rp";
    cin>> pm;
    
    cout<< endl << "Pengeluaran untuk kebutuhan primer"<< endl;
    cout<< "Makan sehari-hari : Rp";
    cin >> mk;
    cout<< "Iuran (Listrik, Telepon, dll.) selama sebulan : Rp";
    cin >> iu;
    cout<< "Lainnya (Mis. Transport) : Rp";
    cin >> ll;
    kp = mk+iu+ll;
    cout<< "Total : Rp" << kp<<endl;
    
    cout<< endl << "Pengeluaran untuk hiburan"<<endl;
    cout<<"Jalan-jalan : Rp";
    cin >> jj;
    cout<<"Belanja (Pakaian, langganan aplikasi, dll.) : Rp";
    cin >> bl;
    hb = jj+bl;
    cout << "Total : Rp"<<hb<<endl;
    
    sisa = pm - (kp+hb);
    cout << endl << "Tabungan : Rp" <<sisa<<endl;
    
    pkp = static_cast<float>(kp)/static_cast<float>(pm)*100.00;
    phb = static_cast<float>(hb)/static_cast<float>(pm)*100.00;
    pt = static_cast<float>(sisa)/static_cast<float>(pm)*100.00;
    cout << endl << "Pengeluaran bulanan:"<<endl<<
    "Kebutuhan Primer = "<< pkp << "%"<<endl<<
    "Hiburan = " << phb << "%" <<endl<<
    "Tabungan = " << pt << "%";
    
    return 0;
}
