/*
	Nama 	: Muhamad Fahrul Azimi
	NPM		: 140810180027
	Kelas	: A
	Tanggal	: 12 Maret 2019
*/

// nama file : pretest-03.cpp

#include<iostream>
using namespace std;
struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData (int& n){
	cout << "Input Banyaknya Data : "; cin >> n;
}

void inputMhs(larikMhs& mhs, int n){
	for (int i=0; i<n; i++){
		cout << "Mahasiswa ke-" << i+1 <<endl;
		cout << "Input NPM  : "; cin >> mhs[i].npm;
		cout << "Input Nama : "; cin >> mhs[i].nama;
		cout << "Input IPK  : "; cin >> mhs[i].ipk;
	}
}

void cetakMhs (larikMhs mhs, int n){
	for (int i=0; i<n; i++){
		cout << i+1 << ". " << mhs[i].npm << "\t" << mhs[i].nama << "\t" << mhs[i].ipk <<endl; 
	}
}

void sortNPM (larikMhs& mhs, int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (mhs[j].npm > mhs[j+1].npm){
				int temp;
				temp=mhs[j].npm;
				mhs[j].npm=mhs[j+1].npm;
				mhs[j+1].npm=temp;
			} 
		}
	}
}

int main(){
	larikMhs mhs;
	int n;
	banyakData(n);
	inputMhs(mhs,n);
	sortNPM (mhs,n);
	cetakMhs(mhs,n);
}
