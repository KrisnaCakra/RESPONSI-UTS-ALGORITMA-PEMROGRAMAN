void Utees::proses_dan_output(){
  	if (kode_pilihan == 1){
				baju;
				cout<<"===================================================================="<<endl;
				cout<<"|                        Daftar Harga BAJU                         |"<<endl;
				cout<<"===================================================================="<<endl;
				cout<<"| Kd |      Model    |       Size        | Stock Ready |   Harga   |"<<endl;
				cout<<"--------------------------------------------------------------------"<<endl;
				cout<<"|  1 |    T-shirt    |       M,L         |      12     | Rp. 55000 |"<<endl;
				cout<<"|  2 |    Polo       |       M,L         |      10     | Rp. 150000|"<<endl;
				cout<<"|  3 |    Cardigan   | ALL SIZE FIT TO L |      15     | Rp. 80000 |"<<endl;
				cout<<"|  4 |    Sweater    | ALL SIZE FIT TO L |      15     | Rp. 150000|"<<endl; 
				cout<<"===================================================================="<<endl;
				cout<<"                 MINIMAL PEMBELIAN HARUS 2 ITEM !!!                 "<<endl;
				
				cout<<"Masukkan Berapa banyak anda ingin membeli baju : ";cin>>n;
				for(a=1;a<=n;a++){
					cout<<"Barang ke - "<<a<<endl;
					cout<<"Kode       : ";cin>>kode[a];
					cout<<"Model      : ";cin>>online[a].nabar[a];
					{
						if(kode[a]==1)
						online[a].hrg[a]=55000;
						
						else if(kode[a]==2)
						online[a].hrg[a]=150000;
						
						else if(kode[a]==3)
						online[a].hrg[a]=80000;
						
						else if(kode[a]==4)
						online[a].hrg[a]=150000;
						
						else 
						online[a].hrg[a]=0;
					}
					cout<<"Harga      : Rp. "<<online[a].hrg[a]<<endl;
					cout<<"Size       : ";cin>>online[a].sz[a];
					cout<<"Jumlah Beli: ";cin>>online[a].jmlh[a];
				}
				ofstream pos;
				pos.open("Aplikasi Belanja.txt", ios::out);
				
				pos<<"       STRUK PENJUALAN      \n";
				pos<<"   APLIKASI BELANJA ONLINE  \n";
				pos<<"============================\n";
				pos<<"\t\t\t\t\tsaldo : Rp. 3.000.000"<<endl;
				pos<<"Daftar Belanja Anda\n\n";
				
				pos<<"===================================================="<<endl;
				pos<<"| No | Model | Size | Harga  | Jumlah Beli | Total |"<<endl;
				pos<<"===================================================="<<endl;
				for(a=1;a<=n;a++){
					pos<<"|   " <<a<<"|     "<<online[a].nabar[a]<<"|     "<<online[a].sz[a]<<"| "<<online[a].hrg[a]<<"|        "<<online[a].jmlh[a]<<"| ";
					ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
					pos<<ttl[a] <<"|";
					total_byr=total_byr+ttl[a]; 
					pos<<endl;
				}
				pos<<"===================================================="<<endl;
				pos<<endl;
				cout<<" Masukkan Data diri anda : "<<endl;
				pos<<"Data diri :"<<endl;
				pos<<endl;
				
				cout<<"Nama          : ";cin>>nm;
				pos<<"Nama		: "<<nm<<endl;
				cout<<"Alamat        : ";cin>>almt;
				pos<<"Alamat        : "<<almt<<endl;
				cout<<"No Hp         : ";cin>>nohp;
				pos<<"No Hp         : "<<nohp<<endl;
				cout<<"Alamat Tujuan : ";cin>>kota;
				pos<<"Alamat Tujuan : "<<kota<<endl;
				
				cout<<"\n\n==============================================="<<endl;
				cout<< "Ingin menggunakan ansuransi atau tidak dengan membayar 2500? (y/t) : ";
				cin>>ans;
				{
					if(ans=='Y' || ans=='y'){
						total_byr=total_byr+2500;
						pos<<"Menggunakan ansuransi"<<endl;
						cout<<"Yang harus anda bayarkan "<<total_byr<<endl;
					}else{
						total_byr=total_byr+0;
						pos<<"Tidak menggunakan ansuransi"<<endl;
						cout<<"Pembayaran tetap " <<total_byr<<endl;
					}
				}
				
				cout<<"\n\n==============================================="<<endl;
				cout<<"PILIh EKSPEDISI DARI TOKO KAMI"<<endl;
				cout<<"1. JNT (gratis ongkir)"<<endl;
				cout<<"2. Sicepat (3000)"<<endl;
				cout<<"3. Ninja Express (10000)"<<endl;
				cout<<"Pilih Ekspedisi : ";
				cin>>go;
				{
					switch (go){
						case '1': {
							pos<<"Ekspedisi JNT"<<endl;
							cout<<"\nAnda mendapat gratis ongkir"<<endl;
							pos<<"Estimasi barang sampai 5 hari"<<endl;
							break;
						}
						case '2': {
							pos<<"Ekspedisi Sicepat"<<endl;
							cout<<"\nAnda harus membayar ongkir 3000"<<endl;
							total_byr=total_byr+3000;
							cout<<"Yang harus dibayarkan " << total_byr << endl;
							pos<<"Estimasi barang sampai 3 hari"<<endl;
							break;
						}
						case '3': {
							pos<<"Ekspedisi Ninja Express"<<endl;
							cout<<"\nAnda harus membayar ongkir 10000"<<endl;
							total_byr=total_byr+10000;
							cout<<"Yang harus dibayarkan " << total_byr << endl;
							pos<<"Estimasi barang sampai 1 hari"<<endl;
							break;
						}
					}
				}
				
				cout<<"\n\n==============================================="<<endl;
				cout<<"VOUCHER DARI TOKO KAMI"<<endl;
				cout<<"1. Diskon 25% sekali pakai max 100.000"<<endl;
				cout<<"2. Diskon 50% sekali pakai max 300.000"<<endl;
				cout<<"Pilih : ";
				cin>>vcr;
				{
					switch (vcr){
						case'1': {
							pos<<"Voucher Potongan 25%"<<endl;
							total_byr=total_byr*0.25;
							cout<<"total belanja "<<total_byr<<endl;
							break;
						}
						case '2': {
							pos<<"Voucher Potongan 50%"<<endl;
							total_byr=total_byr*0.5;
							cout<<"total belanja "<<total_byr<<endl;
							break;
						}
					}
				}
				
				cout<<"\nJadi Total Belanja keseluruhan :Rp. "<<total_byr<<endl;
				pos<<"\nJadi Total Belanja keseluruhan :Rp. "<<total_byr<<endl;
				
				cout<<"\n\n\n==============================================="<<endl;
				pos<<"\n\n\n==============================================="<<endl;
				cout<<"Layanan Pembayaran"<<endl;
				cout<<"1. BRI "<<endl;
				cout<<"2. BNI "<<endl;
				cout<<"3. Mandiri "<<endl;
				cout<<"4. Dana "<<endl;
				cout<<"5. OVO "<<endl;
				cout<<"6. COD "<<endl;
				cout<<"Pembayaran Melalui ? = ";
				pos<<"Pembayaran Melalui ? = ";
				cin>>pilih;
				{
					if(pilih==1){
						cout<<"BRI : 41352443656 "<<endl;
						pos<<"BRI : 41352443656 "<<endl;
					}else if(pilih==2){
						cout<<"BNI : 35154656565 "<<endl;
						pos<<"BNI : 35154656565 "<<endl;
					}else if(pilih==3){
						cout<<"Mandiri : 12314235435 "<<endl;
						pos<<"Mandiri : 12314235435 "<<endl;
					}else if(pilih==4){
						cout<<"Dana : 08123456789 "<<endl;
						pos<<"Dana : 08123456789 "<<endl;
					}else if(pilih==5){
						cout<<"OVO : 08888888888"<<endl;
						pos<<"OVO : 08888888888"<<endl;
					}else if(pilih==6){
						cout<<"COD dengan total " <<total_byr<<endl;
						pos<<"COD dengan total " <<total_byr<<endl;
					}
				}	
				pos<<"\n\n\t\t Pengiriman dilakukan setelah anda transfer       \n";
				pos<<"\t\t     *Barang Yang Sudah Dibeli*       \n";
				pos<<"\t\t     **Tidak Dapat Dikembalikan**          \n";
				pos<<"\t\t\n";
				pos.close();
		}else if (kode_pilihan == 2){
				sepatu;
				cout<<"======================================================================"<<endl;
				cout<<"|                        Daftar Harga SEPATU                         |"<<endl;
				cout<<"======================================================================"<<endl;
				cout<<"| Kd |      Model    |       Size        | Stock Ready |   Harga     |"<<endl;
				cout<<"----------------------------------------------------------------------"<<endl;
				cout<<"|  1 |    NIKE       |   US   8,  9, 10  |      12     | Rp. 1500000 |"<<endl;
				cout<<"|  2 |    Adidas     |   US   8, 9, 10   |      10     | Rp. 1100000 |"<<endl;
				cout<<"|  3 |    Compass    |   US   7, 8, 9    |      15     | Rp. 800000  |"<<endl;
				cout<<"|  4 |    Patrobas   |   US   7, 8, 9    |      15     | Rp. 245000  |"<<endl; 
				cout<<"======================================================================"<<endl;
				cout<<"                 MINIMAL PEMBELIAN HARUS 2 ITEM !!!                 "<<endl;
				
				cout<<"Masukkan Berapa banyak anda ingin membeli sepatu : ";cin>>n;
				for(a=1;a<=n;a++){
					cout<<"Barang ke - "<<a<<endl;
					cout<<"Kode       : ";cin>>kode[a];
					cout<<"Model      : ";cin>>online[a].nabar[a];
					{
						if(kode[a]==1)
						online[a].hrg[a]=1500000;
						
						else if(kode[a]==2)
						online[a].hrg[a]=11000000;
						
						else if(kode[a]==3)
						online[a].hrg[a]=800000;
						
						else if(kode[a]==4)
						online[a].hrg[a]=245000;
						
						else 
						online[a].hrg[a]=0;
					}
					cout<<"Harga      : Rp. "<<online[a].hrg[a]<<endl;
					cout<<"Size       : ";cin>>online[a].sz[a];
					cout<<"Jumlah Beli: ";cin>>online[a].jmlh[a];
				}
				ofstream pos;
				pos.open("Aplikasi Belanja.txt", ios::out);
				pos<<"       STRUK PENJUALAN      \n";
				pos<<"   APLIKASI BELANJA ONLINE  \n";
				pos<<"============================\n";
				pos<<"\t\t\t\t\tsaldo : Rp. 3.000.000"<<endl;
				pos<<"Daftar Belanja Anda\n\n";
				
				pos<<"===================================================="<<endl;
				pos<<"| No | Model | Size | Harga  | Jumlah Beli | Total |"<<endl;
				pos<<"===================================================="<<endl;
				for(a=1;a<=n;a++){
					pos<<"|   " <<a<<"|     "<<online[a].nabar[a]<<"|     "<<online[a].sz[a]<<"| "<<online[a].hrg[a]<<"|        "<<online[a].jmlh[a]<<"| ";
					ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
					pos<<ttl[a] <<"|";
					total_byr=total_byr+ttl[a]; 
					pos<<endl;
				}
				pos<<"===================================================="<<endl;
				pos<<endl;
				cout<<" Masukkan Data diri anda : "<<endl;
				pos<<"Data diri :"<<endl;
				pos<<endl;
				
				cout<<"Nama          : ";cin>>nm;
				pos<<"Nama		: "<<nm<<endl;
				cout<<"Alamat        : ";cin>>almt;
				pos<<"Alamat        : "<<almt<<endl;
				cout<<"No Hp         : ";cin>>nohp;
				pos<<"No Hp         : "<<nohp<<endl;
				cout<<"Alamat Tujuan : ";cin>>kota;
				pos<<"Alamat Tujuan : "<<kota<<endl;
				
				cout<<"\n\n==============================================="<<endl;
				cout<< "Ingin menggunakan ansuransi atau tidak dengan membayar 5500 ? (y/t) : ";
				cin>>ans;
				{
					if(ans=='Y' || ans=='y'){
						total_byr=total_byr+5500;
						pos<<"Menggunakan ansuransi"<<endl;
						cout<<"Yang harus anda bayarkan "<<total_byr<<endl;
					}else{
						total_byr=total_byr+0;
						pos<<"Tidak menggunakan ansuransi"<<endl;
						cout<<"Pembayaran tetap " <<total_byr<<endl;
					}
				}
				
				cout<<"\n\n==============================================="<<endl;
				cout<<"PILIh EKSPEDISI DARI TOKO KAMI"<<endl;
				cout<<"1. JNT (gratis ongkir)"<<endl;
				cout<<"2. Sicepat (10000)"<<endl;
				cout<<"3. Ninja Express (25000)"<<endl;
				cout<<"Pilih Ekspedisi : ";
				cin>>go;
				{
					switch (go){
						case '1': {
							pos<<"Ekspedisi JNT"<<endl;
							cout<<"\nAnda mendapat gratis ongkir"<<endl;
							pos<<"Estimasi barang sampai 5 hari"<<endl;
							break;
						}
						case '2': {
							pos<<"Ekspedisi Sicepat"<<endl;
							cout<<"\nAnda harus membayar ongkir 10000"<<endl;
							total_byr=total_byr+10000;
							cout<<"Yang harus dibayarkan " << total_byr << endl;
							pos<<"Estimasi barang sampai 3 hari"<<endl;
							break;
						}
						case '3': {
							pos<<"Ekspedisi Ninja Express"<<endl;
							cout<<"\nAnda harus membayar ongkir 25000"<<endl;
							total_byr=total_byr+25000;
							cout<<"Yang harus dibayarkan " << total_byr << endl;
							pos<<"Estimasi barang sampai 1 hari"<<endl;
							break;
						}
					}
				}
				
				cout<<"\n\n==============================================="<<endl;
				cout<<"VOUCHER DARI TOKO KAMI"<<endl;
				cout<<"1. Diskon 25% sekali pakai max 300.000"<<endl;
				cout<<"2. Diskon 50% sekali pakai max 1.000.000"<<endl;
				cout<<"Pilih : ";
				cin>>vcr;
				{
					switch (vcr){
						case'1': {
							pos<<"Voucher Potongan 25%"<<endl;
							total_byr=total_byr*0.25;
							cout<<"total belanja "<<total_byr<<endl;
							break;
						}
						case '2': {
							pos<<"Voucher Potongan 50%"<<endl;
							total_byr=total_byr*0.5;
							cout<<"total belanja "<<total_byr<<endl;
							break;
						}
					}
				}
				
				cout<<"\nJadi Total Belanja keseluruhan :Rp. "<<total_byr<<endl;
				pos<<"\nJadi Total Belanja keseluruhan :Rp. "<<total_byr<<endl;
				
				cout<<"\n\n\n==============================================="<<endl;
				pos<<"\n\n\n==============================================="<<endl;
				cout<<"Layanan Pembayaran"<<endl;
				cout<<"1. BRI "<<endl;
				cout<<"2. BNI "<<endl;
				cout<<"3. Mandiri "<<endl;
				cout<<"4. Dana "<<endl;
				cout<<"5. OVO "<<endl;
				cout<<"6. COD "<<endl;
				cout<<"Pembayaran Melalui ? = ";
				pos<<"Pembayaran Melalui ? = ";
				cin>>pilih;
				{
					if(pilih==1){
						cout<<"BRI : 41352443656 "<<endl;
						pos<<"BRI : 41352443656 "<<endl;
					}else if(pilih==2){
						cout<<"BNI : 35154656565 "<<endl;
						pos<<"BNI : 35154656565 "<<endl;
					}else if(pilih==3){
						cout<<"Mandiri : 12314235435 "<<endl;
						pos<<"Mandiri : 12314235435 "<<endl;
					}else if(pilih==4){
						cout<<"Dana : 08123456789 "<<endl;
						pos<<"Dana : 08123456789 "<<endl;
					}else if(pilih==5){
						cout<<"OVO : 08888888888"<<endl;
						pos<<"OVO : 08888888888"<<endl;
					}else if(pilih==6){
						cout<<"COD dengan total " <<total_byr<<endl;
						pos<<"COD dengan total " <<total_byr<<endl;
					}
				}		
				pos<<"\n\n\t\t Pengiriman dilakukan setelah anda transfer       \n";
				pos<<"\t\t     *Barang Yang Sudah Dibeli*       \n";
				pos<<"\t\t     **Tidak Dapat Dikembalikan**          \n";
				pos<<"\t\t\n";
				pos.close();
		}else if (kode_pilihan == 3){
				cout<<"=================================================================="<<endl;
				cout<<"|                     Daftar Harga CELANA                        |"<<endl;
				cout<<"=================================================================="<<endl;
				cout<<"| Kode |      Model    |     Size    | Stock Ready |   Harga     |"<<endl;
				cout<<"------------------------------------------------------------------"<<endl;
				cout<<"|  1   |    Chino      |    S,M,L    |      9      | Rp. 75.000  |"<<endl;
				cout<<"|  2   |    Kulot      |    S,M,L    |      8      | Rp. 80.000  |"<<endl;
				cout<<"|  3   |    Corduroy   |    S,M,L    |      11     | Rp. 50.000  |"<<endl;
				cout<<"|  4   |    Jeans      |    S,M,L    |      20     | Rp. 150000  |"<<endl; 
				cout<<"===================================================================="<<endl;
				cout<<"                 MINIMAL PEMBELIAN HARUS 2 ITEM !!!                 "<<endl;
				
				cout<<"Masukkan Berapa banyak anda ingin membeli sepatu : ";cin>>n;
				for(a=1;a<=n;a++){
					cout<<"Barang ke - "<<a<<endl;
					cout<<"Kode       : ";cin>>kode[a];
					cout<<"Model      : ";cin>>online[a].nabar[a];
					{
						if(kode[a]==1)
						online[a].hrg[a]=75000;
						
						else if(kode[a]==2)
						online[a].hrg[a]=80000;
						
						else if(kode[a]==3)
						online[a].hrg[a]=50000;
						
						else if(kode[a]==4)
						online[a].hrg[a]=150000;
						
						else 
						online[a].hrg[a]=0;
					}
					cout<<"Harga      : Rp. "<<online[a].hrg[a]<<endl;
					cout<<"Size       : ";cin>>online[a].sz[a];
					cout<<"Jumlah Beli: ";cin>>online[a].jmlh[a];
				}
				ofstream pos;
				pos.open("Aplikasi Belanja.txt", ios::out);
				pos<<"       STRUK PENJUALAN      \n";
				pos<<"   APLIKASI BELANJA ONLINE  \n";
				pos<<"============================\n";
				pos<<"\t\t\t\t\tsaldo : Rp. 3.000.000"<<endl;
				pos<<"Daftar Belanja Anda\n\n";
				
				pos<<"===================================================="<<endl;
				pos<<"| No | Model | Size | Harga  | Jumlah Beli | Total |"<<endl;
				pos<<"===================================================="<<endl;
				for(a=1;a<=n;a++){
					pos<<"|   " <<a<<"|     "<<online[a].nabar[a]<<"|     "<<online[a].sz[a]<<"| "<<online[a].hrg[a]<<"|        "<<online[a].jmlh[a]<<"| ";
					ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
					pos<<ttl[a] <<"|";
					total_byr=total_byr+ttl[a]; 
					pos<<endl;
				}
				pos<<"===================================================="<<endl;
				pos<<endl;
				cout<<" Masukkan Data diri anda : "<<endl;
				pos<<"Data diri :"<<endl;
				pos<<endl;
				
				cout<<"Nama          : ";cin>>nm;
				pos<<"Nama		: "<<nm<<endl;
				cout<<"Alamat        : ";cin>>almt;
				pos<<"Alamat        : "<<almt<<endl;
				cout<<"No Hp         : ";cin>>nohp;
				pos<<"No Hp         : "<<nohp<<endl;
				cout<<"Alamat Tujuan : ";cin>>kota;
				pos<<"Alamat Tujuan : "<<kota<<endl;
				
				cout<<"\n\n==============================================="<<endl;
				cout<< "Ingin menggunakan ansuransi atau tidak dengan membayar 5500 ? (y/t) : ";
				cin>>ans;
				{
					if(ans=='Y' || ans=='y'){
						total_byr=total_byr+5500;
						pos<<"Menggunakan ansuransi"<<endl;
						cout<<"Yang harus anda bayarkan "<<total_byr<<endl;
					}else{
						total_byr=total_byr+0;
						pos<<"Tidak menggunakan ansuransi"<<endl;
						cout<<"Pembayaran tetap " <<total_byr<<endl;
					}
				}
				
				cout<<"\n\n==============================================="<<endl;
				cout<<"PILIh EKSPEDISI DARI TOKO KAMI"<<endl;
				cout<<"1. JNT (gratis ongkir)"<<endl;
				cout<<"2. Sicepat (10000)"<<endl;
				cout<<"3. Ninja Express (25000)"<<endl;
				cout<<"Pilih Ekspedisi : ";
				cin>>go;
				{
					switch (go){
						case '1': {
							pos<<"Ekspedisi JNT"<<endl;
							cout<<"\nAnda mendapat gratis ongkir"<<endl;
							pos<<"Estimasi barang sampai 5 hari"<<endl;
							break;
						}
						case '2': {
							pos<<"Ekspedisi Sicepat"<<endl;
							cout<<"\nAnda harus membayar ongkir 10000"<<endl;
							total_byr=total_byr+8000;
							cout<<"Yang harus dibayarkan " << total_byr << endl;
							pos<<"Estimasi barang sampai 3 hari"<<endl;
							break;
						}
						case '3': {
							pos<<"Ekspedisi Ninja Express"<<endl;
							cout<<"\nAnda harus membayar ongkir 25000"<<endl;
							total_byr=total_byr+14000;
							cout<<"Yang harus dibayarkan " << total_byr << endl;
							pos<<"Estimasi barang sampai 1 hari"<<endl;
							break;
						}
					}
				}
				
				cout<<"\n\n==============================================="<<endl;
				cout<<"VOUCHER DARI TOKO KAMI"<<endl;
				cout<<"1. Diskon 25% sekali pakai max 300.000"<<endl;
				cout<<"2. Diskon 50% sekali pakai max 1.000.000"<<endl;
				cout<<"Pilih : ";
				cin>>vcr;
				{
					switch (vcr){
						case'1': {
							pos<<"Voucher Potongan 25%"<<endl;
							total_byr=total_byr*0.25;
							cout<<"total belanja "<<total_byr<<endl;
							break;
						}
						case '2': {
							pos<<"Voucher Potongan 50%"<<endl;
							total_byr=total_byr*0.5;
							cout<<"total belanja "<<total_byr<<endl;
							break;
						}
					}
				}
				
				cout<<"\nJadi Total Belanja keseluruhan :Rp. "<<total_byr<<endl;
				pos<<"\nJadi Total Belanja keseluruhan :Rp. "<<total_byr<<endl;
				
				cout<<"\n\n\n==============================================="<<endl;
				pos<<"\n\n\n==============================================="<<endl;
				cout<<"Layanan Pembayaran"<<endl;
				cout<<"1. BRI "<<endl;
				cout<<"2. BNI "<<endl;
				cout<<"3. Mandiri "<<endl;
				cout<<"4. Dana "<<endl;
				cout<<"5. OVO "<<endl;
				cout<<"6. COD "<<endl;
				cout<<"Pembayaran Melalui ? = ";
				pos<<"Pembayaran Melalui ? = ";
				cin>>pilih;
				{
					if(pilih==1){
						cout<<"BRI : 41352443656 "<<endl;
						pos<<"BRI : 41352443656 "<<endl;
					}else if(pilih==2){
						cout<<"BNI : 35154656565 "<<endl;
						pos<<"BNI : 35154656565 "<<endl;
					}else if(pilih==3){
						cout<<"Mandiri : 12314235435 "<<endl;
						pos<<"Mandiri : 12314235435 "<<endl;
					}else if(pilih==4){
						cout<<"Dana : 08123456789 "<<endl;
						pos<<"Dana : 08123456789 "<<endl;
					}else if(pilih==5){
						cout<<"OVO : 08888888888"<<endl;
						pos<<"OVO : 08888888888"<<endl;
					}else if(pilih==6){
						cout<<"COD dengan total " <<total_byr<<endl;
						pos<<"COD dengan total " <<total_byr<<endl;
					}
				}
				pos<<"\n\n\t\t Pengiriman dilakukan setelah anda transfer       \n";
				pos<<"\t\t     *Barang Yang Sudah Dibeli*       \n";
				pos<<"\t\t     **Tidak Dapat Dikembalikan**          \n";
				pos<<"\t\t\n";
				pos.close();
			}
			cout<<"\n\nTERIMAKASIH SUDAH BERBERLANJA"<<endl;
  };
