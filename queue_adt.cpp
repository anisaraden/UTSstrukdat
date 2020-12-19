#include <iostream>
#include <conio.h>
#include "header_queue.h"

using namespace std;

void menuStack() {
	cout << "==============		Program Pendataan Berkas Sesuai Nomor		 ==============" << endl << endl;
	cout << "Menu. " << endl;
	cout << " 1. Masukan Nomor Berkas \n";
	cout<<	" 2. Nomor berkas yang akan keluar \n";
	cout<<" 3. Exit \n";
}

void menuKeluar() {
	cout<<"Anda Keluar"<<endl;
}

int main () {
	Queue q;

	int yn;
	
	do {
		int menuChoice, choice;
		cout << "List Menu  : \n";
		cout<<"1. Queue \n";
		cout<<"2. Keluar" << endl;
		cin >> menuChoice;
		system("cls");
		menuStack();
		switch (menuChoice) {
			case 1 :
				do {
					cout << "Choice : ";
					
					cin >> choice;
					switch(choice) {
						case 1 :
							int data;
							cout << "Masukkan nomor berkas = ";
							cin >> data;
							q.push(data);
							menuStack();
							q.display();
							break;
						case 2 :
							q.pop();
							menuStack();
							q.display();
							break;
						case 3:
							break;
						default :
							cout << "pilihan salah" << endl;
							break;
					}
					
				} while (choice != 3);
				break;
			case 2 :
				do {
					
					return 0;

				} while (choice != 2);
				break;
			default :
				cout << "pilihan salah" << endl<<endl;
		}
		cout << "Lagi (1. lanjut/2. tidak)? "; cin >> yn;
		cout<<endl;
	} while (yn == 1);
		q.display();
		
	return 0;
}
