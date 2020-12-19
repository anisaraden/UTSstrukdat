#include <iostream>
#include <conio.h>
using namespace std;
#define MAX 8

struct Queue {
	private :
		int data = -1;
		int A[MAX];
		
	public :
		bool isEmpty() {
			if (data == -1)
				return true;
				
			return false;
		}
		
		bool isFull() {
			if (data >= 4)
				return true;
				
			return false;
		}
		
		void push (int inputData) {
			if (isFull() == false) {
			data++;
			A[data] = inputData;
			cout << "No-" << inputData << " masuk ke dalam lemari" << endl;
		} else {
		
			cout << "Berkas penuh" << endl;
				
			}
			getch();
				system("cls");
}
		
		void pop () {
			if (isEmpty())
				cout << "Belum ada berkas" << endl;
			else {
				cout << "Berkas dengan nomor " << A[0] << " telah keluar" << endl << endl;
				
				for (int i = 0; i <= data; i++) {
					A[i] = A[i+1];
				}
				data--;
				getch();
				system("cls");
			}
		}
		

		
		void display() {
			if (isEmpty()) {
				cout << "Total Berkas = 0" << endl;
				cout << "Nomor Berkas  = Kosong" << endl;
			} else {
				cout << "Total Berkas = " << data + 1 << endl;
				cout << "Nomor Berkas = ";
				cout<<"\n============================="<<endl;
				for (int i = 0; i <= data; i++)
					cout << A[i] << " ";
				cout << endl << endl;;
			}
		}
		
};
