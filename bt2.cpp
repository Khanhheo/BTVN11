#include<iostream>
#include<fstream>
using namespace std;
class sinhvien
{
	public:
		string ten,id;
     	float toan,ly,hoa;
	public:
		sinhvien()
		{
			this->ten=this->id="";
			this->toan=this->ly=this->hoa=0;
		};
		~sinhvien()
		{
			this->ten=this->id="";
			this->toan=this->ly=this->hoa=0;
		};
		void set();
		void get();
		float tb()
		{
			return (( this->toan+this->hoa+this->ly)/3);
		};
		string xeploai()
		{
			if(sinhvien::tb()>=8) return(" GIOI");
			if(sinhvien::tb()>=7 && sinhvien::tb()<8) return(" KHA");
			if(sinhvien::tb()>=5 && sinhvien::tb()<7) return(" TRUNG BINH");
			if( sinhvien::tb()<5) return(" KEM");	
		};		
};
void sinhvien::set() 
{
	cout << "Nhap vao ten sinh vien: ";
	fflush(stdin);
	getline(cin, this->ten);
	cout << "Nhap vao ma sinh vien: ";
	getline(cin, this->id);
	cout << "Nhap vao diem 3 mon toan, ly, hoa: " << endl;
	cin >> this->toan >> this->ly>> this->hoa;
};
void sinhvien::get() 
{
	cout << "Ten sinh vien " << this->ten << endl;
	cout << "Ma sinh vien " <<this->id << endl;
	cout<<" Diem toan, ly, hoa"<<"\t"<<this->toan<<"\t"<<this->ly<<"\t"<<this->hoa<<endl;
};
int main()
{
	fstream output;
	output.open("C:\\Users\\ADMIN\\Desktop\\k.txt", ios::out );
	sinhvien sv;
	sv.set();
	sv.get();
	cout<<" diem trung binh :"<<sv.tb()<<endl;
	cout<<" xep loai : "<<sv.xeploai()<<endl;
	output<<sv.ten<<"\t"<<sv.id<<"\t"<<sv.tb()<<"\t"<<sv.xeploai()<<endl; 
	output.close();
	return 0;
}
	


