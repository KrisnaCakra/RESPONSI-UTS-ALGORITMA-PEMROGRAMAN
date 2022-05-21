using namespace std;

class Utees {
  public : 
    void input();
    void proses_dan_output();
  private :
    int i;  
    string pass, user; 
    int kode_pilihan, nama_brg, baju, sepatu, jaket, kode[20];
    struct{
      char nabar [20][20], sz[20];
      int hrg[20],jmlh[20],size[20]; 
    }online[10];
    long int total_byr=0;
    long int ttl[20];
    char nm[30],almt[25],nohp[14],kota[25],ans,vcr,go;
    int pilih, a, n;
};

void Utees::input(){  
		cout << "==========================================\n";    
		cout << "|            S T O R M I D I A           |\n";    
		cout << "==========================================\n";  
		cout << "Silahkan Login untuk masuk ke aplikasi ...\n";  
		cout << "==========================================\n\n";
		string username ="krisna";     
		string password = "2100018449";    
		string login = "block";    
		i = 1;    
		
		do {        
			cout << "Username = "; cin >> user;        
			cout << "Password = "; cin >> pass;        
			if (user == username && pass == password) {           
				cout << "==========================\n";            
				cout << "|     Login Berhasil     |" << endl;            
				cout << "|  Selamat Datang Krisna |" << endl;                     
				cout << "==========================\n\n";   
				i = 4;
				login = "berhasil";        
			}else {           
				cout << "\n=================================\n";            
				cout << "|Username / Password Salah! ("<<i<<"x)|\n";
				cout << "=================================\n\n";   
				i = i +1;
			}   
		} while (i <= 3);
		
		if(login != "berhasil"){
			cout<<"Anda telah 3x salah login.\n";       
			cout<<"Silahkan buat akun baru. Terima Kasih..\n\n";      
		}   
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"|                  RESPONSI UTS                     |\n";
		cout<<"|              ALGORITMA PEMROGRAMAN                |\n";
		cout<<"|             APLIKASI BELANJA ONLINE               |\n";
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;    
		
		cout<<"\t        ~Selamat datang di toko STORMI~    \n";
    cout<<"\t             Happy Shopping With Us        \n";
		cout<<"\t\t\tsaldo : Rp. 3.000.000"<<endl;
		cout<<"\t Apa yang ingin anda beli ? \n";
		cout<<" 1. Baju \n";
		cout<<" 2. Sepatu \n";
		cout<<" 3. Celana \n"; 
		
		cout<<"\n\nSilahkan Pilih Menu [1/2/3] : ";cin>>kode_pilihan;
};