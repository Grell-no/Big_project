#include <iostream>
#include <vector>
#include <stdbool.h>
#include <string.h>
#include <ctime>

using namespace std ;

class GianHang 
{
    protected:
        int maGianHang;
        float dienTich;
        string viTriGianHang;
    public:
        GianHang()
        {
            this->maGianHang = -1;
            this->dienTich = 0;
            this->viTriGianHang = "";
        }

        GianHang(int maGianHang, float dienTich, string viTriGianHang)
        {
            this->maGianHang = maGianHang;
            this->dienTich = dienTich;
            this->viTriGianHang = viTriGianHang;
        }

        int getMaGianHang()
        {
            return maGianHang;
        }

        float getDienTich()
        {
            return dienTich;
        }

        string getViTriGianHang()
        {
            return viTriGianHang;
        }

        void setMaGianHang(int maGianHang)
        {
            this->maGianHang = maGianHang;
        }

        void setDienTich(float dienTich)
        {
            this->dienTich = dienTich;
        }

        void setViTriGianHang(string viTriGianHang)
        {
            this->viTriGianHang = viTriGianHang;
        }

        void nhap()
        {
            cout << "Nhap ma gian hang: " ;
            cin >> maGianHang;

            cout << "Nhap dien tich: ";
            cin >> dienTich;

            getchar();
            cout << "Nhap vi tri gian hang: ";
            getline(cin, viTriGianHang);
        }

        void xuat()
        {
            cout << "Ma gian hang: " << maGianHang << endl;
            cout << "Dien tich: " << dienTich << endl;
            cout << "Vi tri gian hang: " << viTriGianHang << endl;
        }
};

class GianHangCaoCap:public GianHang
{
    private:
        int soLuongQuatLamMat;
        int soLuongBanGhe;
    public:
        GianHangCaoCap():GianHang()
        {
            this->soLuongQuatLamMat = 0;
            this->soLuongBanGhe = 0;
        }

        GianHangCaoCap(int maGianHang, float dienTich, string viTriGianHang, int soLuongQuatLamMat, int soLuongBanGhe):GianHang(maGianHang, dienTich, viTriGianHang)
        {
            this->soLuongQuatLamMat = soLuongQuatLamMat;
            this->soLuongBanGhe = soLuongBanGhe;
        }

        int getSoLuongQuatLamMat()
        {
            return soLuongQuatLamMat;
        }

        int getSoLuongBanGhe()
        {
            return soLuongBanGhe;
        }

        void setSoLuongQuatLamMat(int soLuongQuatLamMat)
        {
            this->soLuongQuatLamMat = soLuongQuatLamMat;
        }

        void setSoLuongBanGhe(int soLuongBanGhe)
        {
            this->soLuongBanGhe = soLuongBanGhe;
        }

        void nhap()
        {
            GianHang::nhap();

            cout << "Nhap so luong quat lam mat: " ;
            cin >> soLuongQuatLamMat;

            cout << "Nhap so luong ban ghe: ";
            cin >> soLuongBanGhe;

            cout << "Thanh cong." << endl;
        }

        void xuat()
        {
            GianHang::xuat();

            cout << "So luong quat lam mat: " << soLuongQuatLamMat << endl;
            cout << "So luong ban ghe: " << soLuongBanGhe << endl;
        }
};

class GianHangTieuChuan:public GianHang
{
    private:
        string chatLieuMaiChe;
        string chatLieuVachNgan;
    public:
        GianHangTieuChuan():GianHang()
        {
            this->chatLieuMaiChe = "";
            this->chatLieuVachNgan = "";
        }

        GianHangTieuChuan(int maGianHang, float dienTich, string viTriGianHang, string chatLieuMaiChe, string chatLieuVachNgan):GianHang(maGianHang, dienTich, viTriGianHang)
        {
            this->chatLieuMaiChe = chatLieuMaiChe;
            this->chatLieuVachNgan = chatLieuVachNgan;
        }

        string getChatLieuMaiChe()
        {
            return chatLieuMaiChe;
        }

        string getChatLieuVachNgan()
        {
            return chatLieuVachNgan;
        }

        void setChatLieuMaiChe(string chatLieuMaiChe)
        {
            this->chatLieuMaiChe = chatLieuMaiChe;
        }

        void setChatLieuVachNgan(string chatLieuVachNgan)
        {
            this->chatLieuVachNgan = chatLieuVachNgan;
        }

        void nhap()
        {
            GianHang::nhap();

            cout << "Nhap chat lieu mai che: " ;
            getline(cin, chatLieuMaiChe);

            cout << "Nhap chat lieu vach ngan: " ;
            getline(cin, chatLieuVachNgan);

            cout << "Thanh cong." << endl;
        }

        void xuat()
        {
            GianHang::xuat();

            cout << "Chat lieu mai che: " << chatLieuMaiChe << endl;
            cout << "Chat lieu vach ngan: " << chatLieuVachNgan << endl;
        }
};

class Khach
{
    private:
        string ten;
        string diaChi;
        string thoiGianBatDau;
        string thoiGianKetThuc;
        int maGianHang;
        float tienDatCoc;
    public:
        Khach()
        {
            this->ten = "";
            this->diaChi = "";
            this->thoiGianBatDau = "";
            this->thoiGianKetThuc = "";
            this->maGianHang = -1;
            this->tienDatCoc = 0;
        }

        Khach(string ten, string diaChi, string thoiGianBatDau, string thoiGianKetThuc, int maGianHang, float tienDatCoc)
        {
            this->ten = ten;
            this->diaChi = diaChi;
            this->thoiGianBatDau = thoiGianBatDau;
            this->thoiGianKetThuc = thoiGianKetThuc;
            this->maGianHang = maGianHang;
            this->tienDatCoc = tienDatCoc;
        }

        string getTen()
        {
            return ten;
        }

        string getDiaChi()
        {
            return ten;
        }

        string getThoiGianBatDau()
        {
            return thoiGianBatDau;
        }

        string getThoiGianKetThuc()
        {
            return thoiGianKetThuc;
        }

        int getMaGianHang()
        {   
            return maGianHang;
        }

        float getTienDatCoc()
        {
            return tienDatCoc;
        }

        void setTen(string ten)
        {
            this->ten = ten;
        }

        void setDiaChi(string diaChi)
        {
            this->diaChi = diaChi;
        }

        void setThoiGianBatDau(string thoiGianBatDau)
        {
            this->thoiGianBatDau = thoiGianBatDau;
        }

        void setThoiGianKetThuc(string thoiGianKetThuc)
        {
            this->thoiGianKetThuc = thoiGianKetThuc;
        }

        void setMaGianHang(int maGianHang)
        {   
            this->maGianHang = maGianHang;
        }

        void setTienDatCoc(float tienDatCoc)
        {
            this->tienDatCoc = tienDatCoc;
        }

        bool nhap(vector<GianHangCaoCap> ghcc, vector<GianHangTieuChuan> ghtc)
        {
            int chon; 

            do
            {
                cout << "Ban can thue gian hang nao: " << endl;
                cout << "1. Gian hang cao cap" << endl;
                cout << "2. Gian hang tieu chuan" << endl;
                cout << "0. Tro ve menu truoc" << endl;
                cout << "Chon: " ; 
                cin >> chon;

                if(chon != 0 && chon != 1 && chon != 2)
                    cout << "Yeu cau khong hop le." << endl;

            }while(chon != 0 && chon != 1 && chon != 2);

            if(chon == 0)
                return false;

            getchar();
            cout << "Nhap ten khach hang: " ;
            getline(cin, ten);

            cout << "Nhap dia chi khach hang: " ;
            getline(cin, diaChi);
            
            int mgh;
            bool check = false;

            cout << "Nhap ma gian hang can thue: " ;
            cin >> mgh;

            if(chon == 1)
            {
                for(int i=0;i<ghcc.size();i++)
                    if(ghcc.at(i).getMaGianHang() == mgh)
                    {
                        check = true;
                        maGianHang = mgh;
                    }    
            }
            else
            {
                for(int i=0;i<ghtc.size();i++)
                    if(ghtc.at(i).getMaGianHang() == mgh)
                    {
                        check = true;
                        maGianHang = mgh;
                    }  
            }

            if(!check)
            {
                maGianHang = -1;
                tienDatCoc = 0;
                thoiGianBatDau = "";
                thoiGianKetThuc = "";
                cout << "Khong tim thay gian hang. Khach hang tam thoi chua thue va khong can phai dat coc." << endl;
            }
            else
            {
                getchar();
                cout << "Nhap thoi gian bat dau (dd/mm/yyyy): " ;
                getline(cin, thoiGianBatDau);

                cout << "Nhap thoi gian ket thuc (dd/mm/yyyy): " ;
                getline(cin, thoiGianKetThuc);

                cout << "Nhap so tien dat coc: " ;
                cin >> tienDatCoc;
            }    

            return true;
        }
};

void them(vector<GianHangCaoCap> *ghcc, vector<GianHangTieuChuan> *ghtc)
{
    int chon; 

    do
    {
        cout << "1. Them gian hang cao cap" << endl;
        cout << "2. Them gian hang tieu chuan" << endl;
        cout << "0. Tro ve menu truoc" << endl;
        cout << "Chon: " ; 
        cin >> chon;

        if(chon != 0 && chon != 1 && chon != 2)
            cout << "Yeu cau khong hop le." << endl;

    }while(chon != 0 && chon != 1 && chon != 2);

    if(chon == 0)
        return;
    else if(chon == 1)
    {
        GianHangCaoCap g1 = GianHangCaoCap();
        g1.nhap();

        ghcc->push_back(g1);
    }
    else
    {
        GianHangTieuChuan g2 = GianHangTieuChuan();
        g2.nhap();

        ghtc->push_back(g2);
    }        
}

void xuatDs(vector<GianHangCaoCap> ghcc, vector<GianHangTieuChuan> ghtc)
{
    cout << "* Danh sach gian hang cao cap: *" << endl;
    for(int i=0;i<ghcc.size();i++)
        ghcc.at(i).xuat();

    cout << "* Danh sach gian hang tieu chuan: *" << endl;
    for(int i=0;i<ghtc.size();i++)
        ghtc.at(i).xuat();
}

void sua(vector<GianHangCaoCap> *ghcc, vector<GianHangTieuChuan> *ghtc)
{
    int chon; 

    do
    {
        cout << "1. Sua gian hang cao cap" << endl;
        cout << "2. Sua gian hang tieu chuan" << endl;
        cout << "0. Tro ve menu truoc" << endl;
        cout << "Chon: " ; 
        cin >> chon;

        if(chon != 0 && chon != 1 && chon != 2)
            cout << "Yeu cau khong hop le." << endl;

    }while(chon != 0 && chon != 1 && chon != 2);

    if(chon == 0)
        return;
    else
    {
        int mgh;

        cout << "Nhap ma gian hang ban muon sua: " ;
        cin >> mgh;

        if(chon == 1)
        {
            for(int i=0;i<ghcc->size();i++)
                if(ghcc->at(i).getMaGianHang() == mgh)
                {
                    ghcc->at(i).nhap();
                    return;
                }
                    
        }
        else
        {
            for(int i=0;i<ghtc->size();i++)
                if(ghtc->at(i).getMaGianHang() == mgh)
                {
                    ghtc->at(i).nhap();
                    return;
                }
        }

        cout << "Khong tim thay gian hang." << endl;      
    }  
}

void xoa(vector<GianHangCaoCap> *ghcc, vector<GianHangTieuChuan> *ghtc)
{
    int chon; 

    do
    {
        cout << "1. Xoa gian hang cao cap" << endl;
        cout << "2. Xoa gian hang tieu chuan" << endl;
        cout << "0. Tro ve menu truoc" << endl;
        cout << "Chon: " ; 
        cin >> chon;

        if(chon != 0 && chon != 1 && chon != 2)
            cout << "Yeu cau khong hop le." << endl;

    }while(chon != 0 && chon != 1 && chon != 2);

    if(chon == 0)
        return;
    else
    {
        int mgh;

        cout << "Nhap ma gian hang ban muon xoa: " ;
        cin >> mgh;

        if(chon == 1)
        {
            for(int i=0;i<ghcc->size();i++)
                if(ghcc->at(i).getMaGianHang() == mgh)
                {
                    ghcc->erase(ghcc->begin() + i);
                    cout << "Xoa thanh cong." << endl;
                    return;
                }
                    
        }
        else
        {
            for(int i=0;i<ghtc->size();i++)
                if(ghtc->at(i).getMaGianHang() == mgh)
                {
                    ghtc->erase(ghtc->begin() + i);
                    cout << "Xoa thanh cong." << endl;
                    return;
                }
        }

        cout << "Khong tim thay gian hang." << endl;      
    }  
}

void dangKyThue(vector<GianHangCaoCap> ghcc, vector<GianHangTieuChuan> ghtc, vector<Khach> *kh)
{
    Khach k = Khach();
    bool result = k.nhap(ghcc, ghtc);

    if(result)
        kh->push_back(k);
}

void thongKe(vector<GianHangCaoCap> ghcc, vector<GianHangTieuChuan> ghtc, vector<Khach> kh)
{
    int count = 0;
    char s[80];
    time_t t = time(0);
    string now = "";

    strftime(s, 80, "%d/%m/%Y", localtime(&t));

    for(int i=0;i<strlen(s);i++)
        now += s[i];    

    for(int i=0;i<kh.size();i++)
        if(kh.at(i).getMaGianHang() != -1 && now.compare(kh.at(i).getThoiGianBatDau()) >= 0 && now.compare(kh.at(i).getThoiGianKetThuc()) <= 0)
            count++;
    
    cout << "Co " << count << " gian hang duoc thue o thoi diem hien tai." << endl;
}

void timKiem(vector<GianHangCaoCap> ghcc, vector<GianHangTieuChuan> ghtc)
{
    int chon; 

    do
    {
        cout << "1. Tim kiem gian hang cao cap" << endl;
        cout << "2. Tim kiem gian hang tieu chuan" << endl;
        cout << "0. Tro ve menu truoc" << endl;
        cout << "Chon: " ; 
        cin >> chon;

        if(chon != 0 && chon != 1 && chon != 2)
            cout << "Yeu cau khong hop le." << endl;

    }while(chon != 0 && chon != 1 && chon != 2);

    if(chon == 0)
        return;
    else
    {
        int mgh;

        cout << "Nhap ma gian hang ban muon tim kiem: " ;
        cin >> mgh;

        if(chon == 1)
        {
            for(int i=0;i<ghcc.size();i++)
                if(ghcc.at(i).getMaGianHang() == mgh)
                {
                    ghcc.at(i).xuat();
                    return;
                }
                    
        }
        else
        {
            for(int i=0;i<ghtc.size();i++)
                if(ghtc.at(i).getMaGianHang() == mgh)
                {
                    ghtc.at(i).xuat();
                    return;
                }
        }

        cout << "Khong tim thay gian hang." << endl;      
    }  
}

int main()
{
    vector<GianHangCaoCap> ghcc;
    vector<GianHangTieuChuan> ghtc;
    vector<Khach> kh;
    int chon;

    do
    {
        cout << "***** QUAN LY KHU TRUNG BAY *****" << endl;10]
        cout << "1. Them gian hang" << endl;
        cout << "2. Sua gian hang" << endl;
        cout << "3. Xoa gian hang" << endl;
        cout << "4. Xem danh sach gian hang" << endl;
        cout << "5. Dang ky thue gian hang" << endl;
        cout << "6. Thong ke so luong gian hang duoc thue o thoi diem hien tai" << endl;
        cout << "7. Tim kiem gian hang theo ma gian hang" << endl;
        cout << "8." << endl;
        cout << "9." << endl;
        cout << "0. Thoat chuong trinh" << endl;
        cout << "Chon: " ;
        cin >> chon;

        switch(chon)
        {
            case 0:
                cout << "Thoat chuong trinh thanh cong." << endl;
                break;
            case 1:
                them(&ghcc, &ghtc);
                break;
            case 2:
                sua(&ghcc, &ghtc);
                break;
            case 3:
                xoa(&ghcc, &ghtc);
                break;
            case 4:
                xuatDs(ghcc, ghtc);
                break;
            case 5:
                dangKyThue(ghcc, ghtc, &kh);
                break;
            case 6:
                thongKe(ghcc, ghtc, kh);
                break;
            case 7:
                timKiem(ghcc, ghtc);
                break;
            case 8:

            case 9:
            default:
                cout << "Yeu cau khong hop le." << endl;
                break;

        }
    }while(chon != 0);

    return 0 ;
}