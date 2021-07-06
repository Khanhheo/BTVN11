#include<iostream>
using namespace std;
class phanso
{
	public:
		float mau1,mau2,tu1,tu2;
	public:
	phanso()
	{
		this->mau1=this->mau2=this->tu1=this->tu2=0;
	};
	~phanso()
	{
		this->mau1=this->mau2=this->tu1=this->tu2=0;
	};
	float tong()
	{
		return ((this->tu1/this->mau1)+(this->tu2/this->mau2));
	};
	float hieu()
	{
		return ((this->tu1/this->mau1)-(this->tu2/this->mau2));
	};
	float tich()
	{
		return ((this->tu1/this->mau1)*(this->tu2/this->mau2));
	};
	float thuong()
	{
		return ((this->tu1/this->mau1)/(this->tu2/this->mau2));
	};
	void set();
	void get(); 	
};
void phanso::set()
{
	cout<<" nhap gia tri cho cac phan so :"<<endl;
	cout<<" tu so 1 : ";
	cin>>this->tu1;
	cout<<endl<<" mau so 1 :";
	cin>>this->mau1;
	cout<<endl<<" tu so 2 :";
	cin>>this->tu2;
	cout<<endl<<" mau so 2 :";
	cin>>this->mau2;
};
void phanso::get()
{
	cout<<" cac phan so la : "<<endl;
	cout<<" phan so 1 :"<<this->tu1<<":"<<this->mau1<<endl;
	cout<<" phan so 2 :"<<this->tu2<<":"<<this->mau2<<endl;
	
};
int main()
{
	phanso a;
	a.set();
	if(a.mau1==0||a.mau2==0) cout<<" nhap lai cac gia tri mau so khac 0";
	else
	{
		a.get();
		cout<<" tong cua 2 phan so : "<<a.tong()<<endl;
		cout<<" tich cua 2 phan so : "<<a.tich()<<endl;
		cout<<" hieu cua 2 phan so : "<<a.hieu()<<endl;
		cout<<" thuong cua 2 phan so : "<<a.thuong()<<endl;
	}
	return 0;
}
