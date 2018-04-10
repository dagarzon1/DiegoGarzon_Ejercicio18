#include<iostream>

using namespace std;

int main()
{
double h=0.01;
int N=3/h;
double * y=new double[N];
y[0]=1.0;
double x=0;
cout << x << " " << y[0] << endl;
for(int i=1;i<N;i++)
{
	x=x+h;
	y[i]=y[i-1]-h*y[i-1];
	cout << x << " " << y[i] << endl;
}

}
