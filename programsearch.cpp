#include <iostream>
using namespace std;

int main(){
	int a[10],cari,hitung;
	//bool ketemu;
	int nilai = 1;
	
	for(int i=0; i < 10; i++){
		cout << "Tentukan Nilai ke....... " << nilai << " space ke....... " << i << " : ";
		cin >> a[i];
		nilai++;
	}
	
	cout << "\nTentukan Nilai yang dicari : ";
	cin >> cari;
	hitung=0;
	
	 for (int i=0; i<10; i++){
            if(cari == a[i]){
		cout << "Data Ditemukan" << endl;
                cout << "Nilai " << cari << " ada pada space ke..... " << i << endl;
                hitung ++;
                break;
            }
     }
        if (hitung == 0){
		cout << "Data tidak Ditemukan " << endl;
            	cout << "angka " << cari << " tidak ada pada array";
        }
	return 0;
}