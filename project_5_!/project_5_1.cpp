#include<iostream>
#include<cmath>
#define x 3.14
using namespace std;
class Radius
{
public:
	double r;
	double h;
	double l;
	void getradius()
	{
		cin>>r>>h>>l;
	};
};
class Ball:public Radius
{
	public:
		void showball(){
			volume=(4.0/3)*x*r*r*r;
			area=4*x*r*r;
			cout<<"��������"<<volume<<endl;
			cout<<"��ı������"<<area<<endl;
		};
	private:
		double volume;
		double area;
};
class Colume: public Radius
{
	public:
		void showcolume()
		{	
		volume=x*r*r*h;
		area=2*x*r*r+2*x*r*h;
		cout<<"Բ���������"<<volume<<endl;
		cout<<"Բ���ı������"<<area<<endl;
	};
	private:
		double volume;
		double area;
};
class Circular: public Radius
{
	public:
		void showcircular()
		{
			l=sqrt(h*h+r*r);
		    volume=1.0/3*x*r*r*h;
		    area=x*r*l+x*r*r;
		    cout<<"Բ׶�������"<<volume<<endl;
			cout<<"Բ׶�ı������"<<area<<endl;
		};
	private:
		double volume;
		double area;
};
int main()
{
	Ball b;
	b.getradius();
	b.showball();
	Colume c;
	c.getradius();
	c.showcolume();
	Circular ci;
	ci.getradius();
	ci.showcircular();
	cout<<"����ׯ";
	system("pause");
	return 0;
}
