#include<iostream>
#include<ncurses/ncurses.h>
#include<windows.h>
using namespace std;

//Loading Awal Program
void Loading(){
	initscr();
	mvprintw(0,0,"Loading");
	Sleep(500);
	refresh();
		
	mvprintw(0,0,"Loading.");
	Sleep(500);
	refresh();
		
	mvprintw(0,0,"Loading..");
	Sleep(500);
	refresh();
	
	mvprintw(0,0,"Loading...");
	Sleep(500);
	refresh();
	
	mvprintw(0,0,"Press Any Key to Continue");
	Sleep(500);
	refresh();	

	getch();
	endwin();
}

//Tampilan Program
void Pertanyaan(){
	string name;
	int quiz;
	int kerjakan;
	int skor=0;
	int s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
	int arr[2];
	
	cout<<"===== ===== ===== ===== ===== ====="<<endl;
	cout<<"!!! Selamat Datang di Quiz Game !!!"<<endl;
	cout<<"===== ===== ===== ===== ===== ====="<<endl;
	cout<<"Mohon Masukkan Nama Anda: "; cin>>name;
	system("cls");
	cout<<" ====== ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== ====== "<<endl;
	cout<<"1. Quiz Matematika (Anda akan mengerjakan Quiz Matematika ini sebanyak 2x)"<<endl;
	cout<<"2. Pengetahuan Umum (Anda akan mengerjakan Quiz Pengetahuan Umum ini sebanyak 2x)"<<endl;
	cout<<" ====== ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== ===== ====== "<<endl;
	cout<<"Quiz apa yang ingin anda mainkan? "<<endl;
	cin>>quiz;
	system("cls");
	
	//Soal Matematika
	if(quiz==1){
		for(int i=0; i<2; i++){	
		cout<<"---------------"<<endl;
		cout<<"Quiz Matematika"<<endl;
		cout<<"---------------"<<endl<<endl;
		cout<<"1. 10+10= "<<endl<<"   [1] 20"<<endl<<"   [2] 5"<<endl<<"   [3] 9"<<endl<<"   Pilih Salah Satu: ";
		cin>>s1;
		if(s1==1){
			skor+=10;
		}system("cls");
		
		cout<<"---------------"<<endl;
		cout<<"Quiz Matematika"<<endl;
		cout<<"---------------"<<endl<<endl;
		cout<<"2. 10:10 = "<<endl<<"   [1] 100"<<endl<<"   [2] 1"<<endl<<"   [3] 20"<<endl<<"   Pilih Salah Satu: ";
		cin>>s2;
		if(s2==2){
			skor+=10;
		}system("cls");
		
		cout<<"---------------"<<endl;
		cout<<"Quiz Matematika"<<endl;
		cout<<"---------------"<<endl<<endl;
		cout<<"3. 90% X 90 = "<<endl<<"   [1] 81"<<endl<<"   [2] 180"<<endl<<"   [3] 99"<<endl<<"   Pilih Salah Satu: ";
		cin>>s3;
		if(s3==1){
			skor+=10;
		}system("cls");
		
		cout<<"---------------"<<endl;
		cout<<"Quiz Matematika"<<endl;
		cout<<"---------------"<<endl<<endl;
		cout<<"4. 2/9 x 9/2 = "<<endl<<"   [1] 9"<<endl<<"   [2] 2"<<endl<<"   [3] 1"<<endl<<"   Pilih Salah Satu: ";
		cin>>s4;
		if(s4==3){
			skor+=10;
		}system("cls");
		
		cout<<"---------------"<<endl;
		cout<<"Quiz Matematika"<<endl;
		cout<<"---------------"<<endl<<endl;
		cout<<"5. 10/10 x 100/10 x 10^1 = "<<endl<<"   [1] 100 "<<endl<<"   [2] 1"<<endl<<"   [3] 1/10"<<endl<<"   Pilih Salah Satu: ";
		cin>>s5;
		if(s5==1){
			skor+=10;
		}system("cls");
		
		cout<<"---------------"<<endl;
		cout<<"Quiz Matematika"<<endl;
		cout<<"---------------"<<endl<<endl;
		cout<<"6. 15^2 = "<<endl<<"   [1] 625"<<endl<<"   [2] 215"<<endl<<"   [3] 15"<<endl<<"   Pilih Salah Satu: ";
		cin>>s6;
		if(s6==2){
			skor+=10;
		}system("cls");
		
		cout<<"---------------"<<endl;
		cout<<"Quiz Matematika"<<endl;
		cout<<"---------------"<<endl<<endl;
		cout<<"7. 19+300-29 = "<<endl<<"   [1] 287"<<endl<<"   [2] 270"<<endl<<"   [3] 290"<<endl<<"   Pilih Salah Satu: ";
		cin>>s7;
		if(s7==3){
			skor+=10;
		}system("cls");
		
		cout<<"---------------"<<endl;
		cout<<"Quiz Matematika"<<endl;
		cout<<"---------------"<<endl<<endl;
		cout<<"8. 10^2 x 10/100 = "<<endl<<"   [1] 10"<<endl<<"   [2] 100"<<endl<<"   [3] 1"<<endl<<"   Pilih Salah Satu: ";
		cin>>s8;
		if(s8==1){
			skor+=10;
		}system("cls");
		
		cout<<"---------------"<<endl;
		cout<<"Quiz Matematika"<<endl;
		cout<<"---------------"<<endl<<endl;
		cout<<"9. Berapakah modulus dari 127:3? "<<endl<<"   [1] 3"<<endl<<"   [2] 1"<<endl<<"   [3] 2"<<endl<<"   Pilih Salah Satu: ";
		cin>>s9;
		if(s9==2){
			skor+=10;
		}system("cls");
		
		cout<<"---------------"<<endl;
		cout<<"Quiz Matematika"<<endl;
		cout<<"---------------"<<endl<<endl;
		cout<<"10. (130-27)x 5 = "<<endl<<"   [1] 265"<<endl<<"   [2] 510"<<endl<<"   [3] 515"<<endl<<"   Pilih Salah Satu: ";
		cin>>s10;
		if(s10==3){
			skor+=10;
		}system("cls");
		arr[i]=skor;
		skor=0;
		}
		cout<<"Skor Quiz Pertama Anda adalah: "<<arr[0]<<endl<<" Skor Quiz Kedua Anda adalah: "<<arr[1]<<endl;
		if(arr[0]<arr[1]){cout<<"Selamat "<<name<<"Skor Anda adalah "<<arr[1];
		}else{cout<<"Selamat "<<" "<<name<<" Skor Anda adalah: "<<arr[0];
		 }
	}
	
	//Soal Pengetahuan Umum
	if(quiz==2){
		for(int i=0; i<2; i++){
		cout<<"---------------------"<<endl;
		cout<<"Quiz Pengetahuan Umum"<<endl;
		cout<<"---------------------"<<endl<<endl;
		cout<<"1. Benua terluas di dunia adalah benua..."<<endl<<"   [1] Afrika"<<endl<<"   [2] Asia"<<endl<<"   [3] Eropa"<<endl<<"   Pilih Salah Satu: ";
		cin>>s1;
		if(s1==2){
			skor+=20;
		}system("cls");
		
		cout<<"---------------------"<<endl;
		cout<<"Quiz Pengetahuan Umum"<<endl;
		cout<<"---------------------"<<endl<<endl;
		cout<<"2. Negara dengan penduduk terpadat di dunia yaitu..."<<endl<<"   [1] India "<<endl<<"   [2] China"<<endl<<"   [3] Rusia"<<endl<<"   Pilih Salah Satu: ";
		cin>>s2;
		if(s2==1){
			skor+=20;
		}system("cls");
		
		cout<<"---------------------"<<endl;
		cout<<"Quiz Pengetahuan Umum"<<endl;
		cout<<"---------------------"<<endl<<endl;
		cout<<"3. Siapakah manusia yang pertama kali menginjakkan kaki di bulan?"<<endl<<"   [1] Neil Amstrong"<<endl<<"   [2] LMP Edgard"<<endl<<"   [3] CMP Stuart"<<endl<<"   Pilih Salah Satu: ";
		cin>>s3;
		if(s3==1){
			skor+=20;
		}system("cls");
		
		cout<<"---------------------"<<endl;
		cout<<"Quiz Pengetahuan Umum"<<endl;
		cout<<"---------------------"<<endl<<endl;
		cout<<"4. Nama satelit yang pertama kali diluncurkan oleh Indonesia adalah..."<<endl<<"   [1] Palapa- A1"<<endl<<"   [2] Garuda"<<endl<<"   [3] Telkom"<<endl<<"   Pilih Salah Satu: ";
		cin>>s4;
		if(s4==1){
			skor+=20;
		}system("cls");
		
		cout<<"---------------------"<<endl;
		cout<<"Quiz Pengetahuan Umum"<<endl;
		cout<<"---------------------"<<endl<<endl;
		cout<<"5. Siapakah nama dari Bapak Koperasi Indonesia?"<<endl<<"   [1] Jokowi "<<endl<<"   [2] Soekarno"<<endl<<"   [3] Moh.Hatta"<<endl<<"   Pilih Salah Satu: ";
		cin>>s5;
		if(s5==3){
			skor+=20;
		}system("cls");
		arr[i]=skor;
		skor=0;
		}
		cout<<"Skor Quiz Pertama Anda adalah: "<<arr[0]<<endl<<" Skor Quiz Kedua Anda adalah: "<<arr[1]<<endl;
		if(arr[0]<arr[1]){cout<<"Selamat "<<name<<"Skor Anda adalah "<<arr[1];
		}else{cout<<"Selamat "<<name<<" Skor Anda adalah: "<<arr[0];
		 }
	}

}

int main(){
	Loading();
	Pertanyaan();
}
