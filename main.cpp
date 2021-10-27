#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

ifstream im;
ofstream om;
fstream  fm;

void welcome();
void garis();
void kecil();
void gotoxy(int x, int y);
void kepala();
void setcolor(unsigned short color);
void kotak();
void loading();
void teller();
void customer();
void login();
void terimakasih();
void belitiket ();
void viewpembeli();
void caripembeli();
void batalpembelian();
void rubahpembelian();
class rahasia
{
public:
    char e[],a;
    int n,w,ID,orang,id,bayar,harga;

    void tujuanka(char tujuan[],char ka[])
    {
        gotoxy(13,10);
        cout<<"|NAMA KA                   : "<<ka<<endl;
        gotoxy(13,11);
        cout<<"|TUJUAN KERETA             : "<<tujuan<<endl;
    }
    void konfimasi(float harga,char tujuan[],char ka[])
    {
        kotak();
        gotoxy(14,3);
        garis();
        gotoxy(14,4);
        cout<<"| Anda telah memilih tujuan "<<tujuan<<" |"<<endl;
        gotoxy(14,5);
        cout<<"| Dengan nama KA "<<ka<<" |"<<endl;
        gotoxy(14,6);
        cout<<"| Dan anda dikenai tarif Rp."<<harga<<"/orang          |"<<endl;
        gotoxy(14,7);
        cout<<"|                                                 |"<<endl;
        gotoxy(14,8);
        cout<<"| Apakah anda yakin?                              |"<<endl;
        gotoxy(14,9);
        cout<<"| Klik '1' untuk kembali dan '2' untuk lanjut     |"<<endl;
        gotoxy(14,10);
        garis();
        gotoxy(36,20);
        cout<<"=={ }==";
        gotoxy(39,20);
    }
    void masukkan()
    {
        char a;
        float B,T,kembali,uang;
awal:
        system("cls");
        kotak();
        kepala();
        gotoxy(14,4);
        cout<<"|      Tujuan pemberangkatan KA dari Jakarta      |"<<endl;
        gotoxy(10,8);
        cout<<"|============|"<<char(176)<<"|============|"<<char(176)<<"|============|"<<char(176)<<"|============|"<< endl;
        gotoxy(10,9);
        cout<<"| a.Cirebon  |"<<char(176)<<"| b.Bandung  |"<<char(176)<<"|  c.Madiun  |"<<char(176)<<"|  d.Malang  |"<< endl;
        gotoxy(10,10);
        cout<<"|============|"<<char(176)<<"|============|"<<char(176)<<"|============|"<<char(176)<<"|============|"<< endl;
        gotoxy(10,12);
        cout<<"|============|"<<char(176)<<"|============|"<<char(176)<<"|============|"<<char(176)<<"|============|"<< endl;
        gotoxy(10,13);
        cout<<"| e.Semarang |"<<char(176)<<"|  f.Jogja   |"<<char(176)<<"| g.Surabaya |"<<char(176)<<"| x.kembali  |"<< endl;
        gotoxy(10,14);
        cout<<"|============|"<<char(176)<<"|============|"<<char(176)<<"|============|"<<char(176)<<"|============|"<< endl;
        gotoxy(20,18);
        cout<<" Silahkan klik kode yang anda inginkan ";
        gotoxy(36,20);
        cout<<"=={ }==";
        gotoxy(39,20);
        cin>>a;
        system("cls");
        garis();
        if(a=='a')
        {
            char tujuan[]="Cirebon              ",ka[]="Tegal arum                      ";
            harga=85000;
            B=16.31;
            T=21.18;
            konfimasi(harga,tujuan,ka);
            cin>>w;
            if(w==1)
                goto awal;
        }
        else if(a=='b')
        {
            char tujuan[]="Bandung              ",ka[]="Argo parahyangan                ";
            harga=70000;
            B=08.33;
            T=11.59;
            konfimasi(harga,tujuan,ka);
            cin>>w;
            if(w==1)
                goto awal;
        }
        else if(a=='c')
        {
            char tujuan[]="Madiun               ",ka[]="Brantas                         ";
            harga=165000;
            B=16.05;
            T=06.36;
            konfimasi(harga,tujuan,ka);
            cin>>w;
            if(w==1)
                goto awal;
        }
        else if(a=='d')
        {
            char tujuan[]="Malang               ",ka[]="Matarmaju                       ";
            harga=190000;
            B=15.15;
            T=07.05;
            konfimasi(harga,tujuan,ka);
            cin>>w;
            if(w==1)
                goto awal;
        }
        else if(a=='e')
        {
            char tujuan[]="Semarang             ",ka[]="Tawang Jaya                     ";
            harga=130000;
            B=23.03;
            T=05.52;
            konfimasi(harga,tujuan,ka);
            cin>>w;
            if(w==1)
                goto awal;
        }
        else if(a=='f')
        {
            char tujuan[]="Yogyakarta           ",ka[]="Progo                           ";
            harga=140000;
            B=22.35;
            T=06.55;
            konfimasi(harga,tujuan,ka);
            cin>>w;
            if(w==1)
                goto awal;
        }
        else if(a=='g')
        {
            char tujuan[]="Surabaya             ",ka[]="Kertajaya                       ";
            harga=190000;
            B=14.05;
            T=01.35;
            konfimasi(harga,tujuan,ka);
            cin>>w;
            if(w==1)
                goto awal;
        }
        else if(a=='x')
        {
            customer();
        }
        else
        {
            kotak();
            gotoxy(25,9);
            cout<<" Maaf,anda salah memasukan kode "<<endl;
            gotoxy(23,11);
            cout<<" Silahkan masukkan kode dengan benar "<<endl;
            gotoxy(25,18);
            system("pause");
            goto awal;
        }
        system("cls");
        system("color 1F");
        gotoxy(13,1);
        garis();
        gotoxy(14,3);
        cout<<"Masukkan Nama anda                    : ";
        cin>>e;
        gotoxy(14,4);
        cout<<"Masukkan No.ID anda (KTP/SIM/PASSPORT)"<<endl;
        gotoxy(14,5);
        cout<<"(maximal 9 digit)                     : ";
        cin>>id;
        gotoxy(14,6);
        cout<<"Masukkan jumlah pemesanan kursi       : ";
        cin>>orang;
        gotoxy(13,8);
        garis();
        bayar=orang*harga;
        gotoxy(14,9);
        cout<<"Jadi,jumlah pembayaran anda adalah    : Rp."<<bayar<<endl;
        gotoxy(23,16);
        system("pause");
        system("cls");
a:
        gotoxy(13,3);
        garis();
        gotoxy(14,5);
        cout<<"Silahkan masukkan uang anda kemesin pembayaran,"<<endl;
        gotoxy(14,6);
        cout<<"Dan ketik jumlah nominal uangnya : Rp.";
        cin>>uang;
        kembali=uang-bayar;
        if(kembali>0)
        {
            gotoxy(14,8);
            cout<<"Silahkan ambil kembalian anda"<<endl;
            gotoxy(14,9);
            cout<<"Kembalian anda sebesar : Rp."<<kembali<<endl;
        }
        else if(kembali<0)
        {
            gotoxy(14,8);
            cout<<"Maaf uang anda tidak cukup"<<endl;
            gotoxy(14,9);
            cout<<"Silahkan masukkan kembali uang anda"<<endl;
            gotoxy(13,11);
            garis();
            gotoxy(23,16);
            system("pause");
            system("cls");
            goto a;
        }
        gotoxy(13,11);
        garis();
        gotoxy(23,16);
        system("pause");

        system("cls");
        gotoxy(13,3);
        garis();
        gotoxy(13,4);
        cout<<"|           Pemesanan tiket Kereta api            |"<<endl;
        gotoxy(13,5);
        cout<<"|         PT.Kereta Api Indonesia(PERSERO)        |"<<endl;
        gotoxy(13,6);
        garis();
        gotoxy(13,7);
        cout<<"|NAMA PEMESAN TIKET        : "<<e<<endl;
        gotoxy(13,8);
        cout<<"|NO ID(KTP/SIM/PASSPORT)   : "<<id<<endl;
        gotoxy(13,9);
        cout<<"|JUMLAH KURSI PEMBELIAN    : "<<orang<<endl;
        if(a=='a')
        {
            char tujuan[]="Cirebon",ka[]="Tegal arum";
            tujuanka(tujuan,ka);
        }
        else if(a=='b')
        {
            char tujuan[]="Bandung",ka[]="Argo parahyangan";
            tujuanka(tujuan,ka);
        }
        else if(a=='c')
        {
            char tujuan[]="Madiun",ka[]="Brantas";
            tujuanka(tujuan,ka);
        }
        else if(a=='d')
        {
            char tujuan[]="Malang",ka[]="Matarmaju";

            tujuanka(tujuan,ka);
        }
        else if(a=='e')
        {
            char tujuan[]="Semarang",ka[]="Tawang Jaya";
            tujuanka(tujuan,ka);
        }
        else if(a=='f')
        {
            char tujuan[]="Yogyakarta",ka[]="Progo";
            tujuanka(tujuan,ka);
        }
        else if(a=='g')
        {
            char tujuan[]="Surabaya",ka[]="Kertajaya";
            tujuanka(tujuan,ka);
        }
        gotoxy(13,12);
        cout<<"|JADWAL KEBERANGKATAN      : BERANGKAT : "<<B<<" WIB"<<endl;
        gotoxy(13,13);
        cout<<"|                          : TIBA      : "<<T<<" WIB"<<endl;
        gotoxy(13,14);
        cout<<"|HARGA TIKET               : Rp."<<harga<<endl;
        gotoxy(13,15);
        cout<<"|TOTAL PEMBAYARAN          : Rp."<<bayar<<endl;
        gotoxy(13,16);
        garis();
        gotoxy(19,18);
        cout<<"Silahkan klik enter untuk mencetak tiket"<<endl;
        gotoxy(21,22);
        system("pause");
        void terimakasih();
    }
    void keluaran()
    {
        cout<<"              |=================================================|"<<endl;
        cout<<"              |           Pemesanan tiket Kereta api            |"<<endl;
        cout<<"              |         PT.Kereta Api Indonesia(PERSERO)        |"<<endl;
        cout<<"              |=================================================|"<<endl;
        cout<<"              |NAMA PEMESAN TIKET        : "<<e<<endl;
        cout<<"              |NO ID(KTP/SIM/PASSPORT)   : "<<id<<endl;
        cout<<"              |JUMLAH KURSI PEMBELIAN    : "<<orang<<endl;
        cout<<"              |TOTAL PEMBAYARAN          : Rp."<<bayar<<endl;
        cout<<"              |=================================================|"<<endl;
        cout<<endl;
    }
    float keywordsKA()
    {
        return id;
    }
};
rahasia dokumen;

int main()
{
    welcome();
    login();
}
void garis()
{
    cout<<"|=================================================|"<<endl;
}
void kecil()
{
    cout<<"|==========================|"<<endl;
}
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void kepala()
{
    gotoxy(14,3);
    garis();
    gotoxy(14,5);
    garis();
}
void setcolor(unsigned short color)
{
    HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}
void kotak()
{
    int a,b;
    for(a=0; a<80; a++)
    {
        setcolor(9);
        gotoxy(a,0);
        cout<<char(178);
    }
    for(a=0; a<25; a++)
    {
        setcolor(9);
        gotoxy(0,a);
        cout<<char(178);
    }

    for(a=0; a<80; a++)
    {
        setcolor(9);
        gotoxy(a,24);
        cout<<char(178);
    }

    for(a=0; a<25; a++)
    {
        setcolor(9);
        gotoxy(79,a);
        cout<<char(178);
    }
    setcolor(7);
    for(b=1; b<24; b++)
    {
        for(a=1; a<79; a++)
        {
            gotoxy(a,b);
            cout<<char(176);
        }
        cout<<endl;
    }
}
void welcome()
{
    kotak();
    gotoxy(15,5);
    garis();
    gotoxy(15,6);
    cout<<"|                                                 |"<<endl;
    gotoxy(15,7);
    cout<<"|                 Selamat Datang                  |"<<endl;
    gotoxy(15,8);
    cout<<"|                                                 |"<<endl;
    gotoxy(15,9);
    cout<<"|         Di Pembelian tiket Kereta api           |"<<endl;
    gotoxy(15,10);
    cout<<"|        Kelas Ekonomi AC (Edisi Lebaran)         |"<<endl;
    gotoxy(15,11);
    cout<<"|                                                 |"<<endl;
    gotoxy(15,12);
    cout<<"|                                                 |"<<endl;
    gotoxy(15,13);
    cout<<"|        PT.Kereta Api Indonesia(PERSERO)         |"<<endl;
    gotoxy(15,14);
    cout<<"|                                                 |"<<endl;
    gotoxy(15,15);
    garis();
    gotoxy(51,23);
    cout<<"Created by : Muhammad Naufal";
    gotoxy(24,19);
    system("pause");
}
void loading()
{
    int a,b,c;
    gotoxy(26,18);
    cout<<"Please wait,Now loading.....";
    for (a=20; a<=60; a++)
    {
        for(c=20; c<=a; c++)
        {
            gotoxy(c,15);
            setcolor(3);
            cout<<char(1);
        }
        for(c=1; c<=a; c++)
        {
            gotoxy(19,14);
            cout<<char(218);
            gotoxy(19,15);
            cout<<char(179);
            gotoxy(19,16);
            cout<<char(192);
            gotoxy(61,14);
            cout<<char(191);
            gotoxy(61,15);
            cout<<char(179);
            gotoxy(61,16);
            cout<<char(217);
            for(b=20; b<=60; b++)
            {
                gotoxy(b,14);
                cout<<char(196);
            }
            for(b=20; b<=60; b++)
            {
                gotoxy(b,16);
                cout<<char(196);
            }
        }
    }
}
void customer()
{
    system("cls");
    int a;
    p:
    system("cls");
    kotak();
    kepala();
    gotoxy(14,4);
    cout<<"|        Pembelian tiket Ekonomi KA Jakarta       |"<<endl;
    gotoxy(8,10);
    cout<<"|====================|"<<char(176)<<"|========================|"<<char(176)<<"|===========|"<< endl;
    gotoxy(8,11);
    cout<<"| 1. Pembelian tiket |"<<char(176)<<"| 2. Perubahan pembelian |"<<char(176)<<"| 3. Logout |"<< endl;
    gotoxy(8,12);
    cout<<"|====================|"<<char(176)<<"|========================|"<<char(176)<<"|===========|"<< endl;
    gotoxy(36,20);
    cout<<"=={ }==";
    gotoxy(39,20);
    cin>>a;
    if(a==1)
        belitiket();
    else if(a==2)
        rubahpembelian();
    else if(a==3)
    {
        system("cls");
        login();
    }
    else
    {
        gotoxy(20,21);
        cout<<"=( Maaf kode yang anda masukkan salah )="<<endl;
        gotoxy(24,22);
        system("pause");
        system("cls");
        goto p;
    }
}
void teller()
{
    int a;
p:
    system("cls");
    kotak();
    kepala();
    gotoxy(14,4);
    cout<<"|    Pemeriksaan data tiket Ekonomi KA Jakarta    |"<<endl;
    gotoxy(11,10);
    cout<<"|==========================|"<<char(176)<<char(176)<<"|=========================|"<<endl;
    gotoxy(11,11);
    cout<<"|1.Lihat data pembeli tiket|"<<char(176)<<char(176)<<"|2.Cari data pembeli tiket|"<<endl;
    gotoxy(11,12);
    cout<<"|==========================|"<<char(176)<<char(176)<<"|=========================|"<<endl;
    gotoxy(9,14);
    cout<<"|============================|"<<char(176)<<char(176)<<"|===========================|"<<endl;
    gotoxy(9,15);
    cout<<"|3.Pembatalan pembelian tiket|"<<char(176)<<char(176)<<"|       4. Logout           |"<<endl;
    gotoxy(9,16);
    cout<<"|============================|"<<char(176)<<char(176)<<"|===========================|"<<endl;
    gotoxy(36,20);
    cout<<"=={ }==";
    gotoxy(39,20);
    cin>>a;
    if(a==1)
        viewpembeli();
    else if(a==2)
        caripembeli();
    else if(a==3)
        batalpembelian();
    else if (a==4)
        login();
    else
    {
        gotoxy(24,21);
        cout<<"Maaf anda salah memasukkan kode"<<endl;
        gotoxy(24,22);
        system("pause");
        goto p;
    }
}
void login()
{
    float password;
    int a;
    system("cls");
menu:
    kotak();
    gotoxy(25,3);
    kecil();
    gotoxy(25,4);
    cout<<"|    Login your account    |" << endl;
    gotoxy(25,5);
    kecil();
    gotoxy(17,10);
    cout<<"|===========|"<<char(176)<<"|=============|"<<char(176)<<"|===========|"<< endl;
    gotoxy(17,11);
    cout<<"| 1. Teller |"<<char(176)<<"| 2. Customer |"<<char(176)<<"|  3. Exit  |"<< endl;
    gotoxy(17,12);
    cout<<"|===========|"<<char(176)<<"|=============|"<<char(176)<<"|===========|"<< endl;
    gotoxy(36,20);
    cout<<"=={ }==";
    gotoxy(39,20);
    cin>>a;
    if (a==1)
    {
        system("cls");
    awal:
        kotak();
        gotoxy(25,3);
        kecil();
        gotoxy(25,4);
        cout <<"|Please enter your password|" << endl;
        gotoxy(25,5);
        kecil();
        gotoxy(31,20);
        cout<<"=={         }==";
        gotoxy(34,20);
        cin>>password;
        if (password==1234)
        {
            loading();
            teller();
        }
        else if(password!=1234)
        {
            if(password!=9)
            {
                gotoxy(25,8);
                cout << "Sorry your password is wrong" << endl;
                gotoxy(26,9);
                cout<<"Click '9' for back to menu"<<endl;
                gotoxy(23,10);
                system("pause");
                goto awal;
                system("cls");
            }
            else
            {
                goto menu;
            }
        }
    }
    else if (a==2)
    {
        loading();
        customer();
    }
    else if (a==3);
    else
    {
        gotoxy(20,21);
        cout<<"=( Maaf kode yang anda masukkan salah )="<<endl;
        gotoxy(24,22);
        system("pause");
        system("cls");
        goto menu;
    }
}
void terimakasih()
{
    kotak();
    setcolor(9);
    gotoxy(26,5);
    setcolor(6);
    cout<<"TIKET BERHASIL DI CETAK .....!"<<endl;
    setcolor(7);
    gotoxy(34,9);
    cout<<"TERIMA KASIH"<<endl;
    gotoxy(28,13);
    cout<<"Atas penggunaan jasa kami";
    gotoxy(24,15);
    cout<<"Semoga nyaman atas pelayanan kami";
    gotoxy(24,20);
    system("pause");
    system("cls");
    customer();
}
void belitiket ()
{
    system("cls");
    dokumen.masukkan();
    om.open("dokumenKA.txt", ios::binary | ios::app);
    om.write((char*) &dokumen, sizeof (dokumen));
    om.close();
    system("cls");
    terimakasih();
}
void viewpembeli()
{
    system("cls");
    im.open("dokumenKA.txt", ios::binary);
    while (im.read((char*) &dokumen, sizeof(dokumen)))
    {
        system("color 1F");
        dokumen.keluaran();
    }
    im.close();
    system("pause");
    teller();
}
void caripembeli()
{
    int ID, point=0;
    system("cls");
    kotak();
    gotoxy(14,3);
    garis();
    gotoxy(14,4);
    cout<<"|       Silahkan masukkan ID yang anda cari       |";
    gotoxy(14,5);
    garis();
    gotoxy(31,20);
    cout<<"=={         }==";
    gotoxy(34,20);
    cin>>ID;
    system("cls");
    im.open("dokumenKA.txt", ios::binary);
    while(im.read( (char*)&dokumen, sizeof(dokumen)))
    {
        if(dokumen.keywordsKA()== ID)
        {
            point++;
        }
    }
    if(point == 0)
    {
        kotak();
        gotoxy(26,6);
        cout<<"ID '"<<ID<<"' TIDAK DITEMUKAN "<<endl;
    }
    else
    {
        dokumen.keluaran();
        {
            system("color 1F");
            gotoxy(8,13);
            cout<<"NO ID: '"<<ID<<"' SUDAH MASUK DALAM DATA PEMBELIAN TIKET PERSERO KA"<<endl;
        }
    }
    im.close();
    cout<<endl;
    gotoxy(24,15);
    system("pause");
    teller();
}
void batalpembelian()
{
    system("cls");
    int ID,q;
    kotak();
    gotoxy(14,3);
    garis();
    gotoxy(14,4);
    cout<<"|      Silahkan ketik ID yang ingin di hapus       |";
    gotoxy(14,5);
    garis();
    gotoxy(31,20);
    cout<<"=={         }==";
    gotoxy(34,20);
    cin>>ID;
    im.open("dokumenKA.txt" ,ios::binary);
    om.open("tongsampah.txt",ios::binary);
    int ketemu=0;
    while (im.read((char*)&dokumen, sizeof(dokumen)))
    {
        if (dokumen.keywordsKA() != ID)
            om.write((char*)&dokumen, sizeof(dokumen));
        else
            ketemu=1;
    }
    im.close();
    om.close();
    remove("dokumenKA.txt");
    rename("tongsampah.txt", "dokumenKA.txt");
    system("cls");
    kotak();
    if(ketemu==1)
    {
        gotoxy(16,6);
        cout<<"PEMBELI DENGAN BER-ID KAN '"<<ID<<"' TELAH DIHAPUS!"<<endl;
    }
    else
    {
        gotoxy(16,6);
        cout<<"PEMBELI DENGAN BER-ID KAN '"<<ID<<"' TIDAK DITEMUKAN!"<<endl;
    }
    cout<<endl;
    gotoxy(7,12);
    cout<<"Ingin periksa data pembeli ? Klik '1' untuk Ya dan '2' untuk Tidak"<<endl;
    gotoxy(34,20);
    cout<<"=={ }==";
    gotoxy(37,20);
    cin>>q;
    if(q==1)
        viewpembeli();
    else
        teller();
}
void rubahpembelian()
{
    system("cls");
    float yakin,ganti;
    int d;
    kotak();
    gotoxy(25,6);
    cout<<"Silahkan ketik ID tiket anda";
    gotoxy(31,20);
    cout<<"=={         }==";
    gotoxy(34,20);
    cin>>d;
    fm.open("dokumenKA.txt", ios::in | ios::out);
    while (fm.read((char*) &dokumen, sizeof (dokumen)))
    {
        if(dokumen.keywordsKA() == d)
        {
            system("cls");
            system("color 1F");
            dokumen.keluaran();
            gotoxy(7,11);
            cout<<"Apakah anda yakin ingin merubah data pembelian anda seluruhnya ?"<<endl;
            gotoxy(18,13);
            cout<<"Klik '1' unutk lanjut & '2' untuk kembali  "<<endl;
            gotoxy(34,20);
            cout<<"=={ }==";
           gotoxy(37,20);
           cin>>yakin;
            if(yakin==1)
            {

                cout<<"Silahkan Masukkan Perubahan Data:"<<endl;
                dokumen.masukkan();
                int ganti= -1*sizeof(dokumen);
                fm.seekp(ganti, ios::cur);
                fm.write((char*) &dokumen, sizeof (dokumen));
                cout<<"Perubahan pembelian tiket kereta anda berhasil dibuat"<<endl;
            }
        }
    }
    fm.close();
    customer();
}

