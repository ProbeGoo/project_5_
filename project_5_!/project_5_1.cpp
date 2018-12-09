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
			cout<<"球的体积是"<<volume<<endl;
			cout<<"球的表面积是"<<area<<endl;
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
		cout<<"圆柱的体积是"<<volume<<endl;
		cout<<"圆柱的表面积是"<<area<<endl;
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
		    cout<<"圆锥的体积是"<<volume<<endl;
			cout<<"圆锥的表面积是"<<area<<endl;
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
	cout<<"林育庄";
	system("pause");
	return 0;
}
