#include <iostream>

using namespace std;

int main() {
    char nama_mahasiswa[100],skor;
    int nilai_keaktifan, nilai_tugas, nilai_quis, nilai_UTS, nilai_UAS, nilai_akhir;
    
    cout<<"======== Input Data Mahasiswa ========"<<endl;
    cout<<"Nama Mahasiswa: ";cin.getline(nama_mahasiswa,sizeof(nama_mahasiswa));
    cout<<"Nilai Keaktifan: ";cin>>nilai_keaktifan;
    cout<<"Nilai Tugas: ";cin>>nilai_tugas;
    cout<<"Nilai Quis: ";cin>>nilai_quis;
    cout<<"Nilai UTS: ";cin>>nilai_UTS;
    cout<<"Nilai UAS: ";cin>>nilai_UAS;
    cout<<"======================================"<<endl;
    
    nilai_keaktifan = nilai_keaktifan * 15/100;
    nilai_tugas = nilai_tugas * 25/100;
    nilai_quis = nilai_quis * 15/100;
    nilai_UTS = nilai_UTS * 29/100;
    nilai_UAS = nilai_UAS * 39/100;
    
    nilai_akhir = nilai_keaktifan + nilai_tugas + nilai_quis + nilai_UTS + nilai_UAS;
    
    cout<<"======================================"<<endl;
    cout<<"Mahasiswa yang bernama " << nama_mahasiswa <<endl;
    cout<<"Dengan Nilai Persentasi Yang dihasilkan."<<endl;
    cout<<"Nilai Keaktifan * 10% : " << nilai_keaktifan << endl;
    cout<<"Nilai Tugas * 20% : " << nilai_tugas <<endl;
    cout<<"Nilai Quis * 10% : " << nilai_quis <<endl;
    cout<<"Nilai UTS * 25% : " << nilai_UTS <<endl;
    cout<<"Nilai UAS : 35% : " << nilai_UAS <<endl;
    cout<<"======================================"<<endl;
    
    if(nilai_akhir >= 85)
    skor= 'A' ;
    else
    
    if(nilai_akhir >= 75)
    skor= 'B';
    else
    
    if(nilai_akhir >= 60)
    skor= 'C';
    else 
    
    if(nilai_akhir >= 55)
    skor= 'D';
    else
    skor= 'E';
    
    cout<<"Jadi MahaSiswa yang bernama "<< nama_mahasiswa << " memperoleh nilai akhir sebesar " << nilai_akhir <<endl;
    cout<<"Grade nilai yang di dapat adalah "<< skor << endl;
}


