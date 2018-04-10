#include<iostream>
#include<string.h>

using namespace std;
void primer_orden(double * y, int a, int b, double in);
void segundo_orden(double * y, int a, int b, double in, double in_d);
int main(int argc, char ** argv)
{
	if(strcmp(argv[1],"primera")==0)
	{
		int a=0;
		int b=3;
		double * y;
		primer_orden(y,a,b,1.0);
	}
	if(strcmp(argv[1],"segunda")==0)
	{
		int a=0;
		int b=10;
		double * y;
		segundo_orden(y,a,b,1.0, 0.0);
	}
	return 0;
}
void primer_orden(double * y, int a, int b, double in)
{
	double h=0.001;
	int N=(b-a)/h;
	double x=a;
	y= new double[N];
	y[0]=in;
	cout << x << " " << y[0] << endl;
	for(int i=1;i<N;i++)
	{
		x=x+h;
		y[i]=y[i-1]-h*y[i-1];
		cout << x << " " << y[i] << endl;
	}
}
void segundo_orden(double * y, int a, int b, double in, double in_d)
{
	double h=0.001;
	int N=(b-a)/h;
	double x=a;
	double * z=new double[N];
	y= new double[N];
	y[0]=in;
	z[0]=in_d;
	cout << x << " " << y[0] << " " << z[0] << endl;
	for(int i=1;i<N;i++)
	{
		x=x+h;
		z[i]=z[i-1]-h*y[i-1];
		y[i]=y[i-1]+h*z[i-1];
		cout << x << " " << y[i] << " " << z[i] << endl;
	}
	
}
