#include<iostream.h>
#include<conio.h>
class Matrix
{
  int a[3][3];
  public:
  void input()
  {
	int i,j;
	cout<<"\n Enter Matrix element:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<"\n enter element :";
		cin>>a[i][j];
		}
	}
  }

  Matrix operator+(Matrix &m)
  {
	int i,j;
	Matrix temp;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    temp.a[i][j]=this->a[i][j]+m.a[i][j];
		}
	}
	return temp;
  }
  Matrix operator-(Matrix &m)
  {
	int i,j;
	Matrix temp;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    temp.a[i][j]=this->a[i][j]+m.a[i][j];
		}
	}
	return temp;
  }

  void output()
  {
	int i,j;
	cout<<"\n Your Matrix elements:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<a[i][j]<<"\t";

		}
		cout<<endl;
	}
  }

};
void main()
{
  Matrix m1,m2,m3,m4,m5;
  clrscr();
  m1.input();
  m2.input();
  //m3.input();
  //m4.input();

  //m5=m1.add(m2).add(m3).add(m4);

  //m3=m1.add(m2);//+m3+m4;

    m3=m1+m2;
    m4=m1-m2;

  m3.output();
  getch();
}