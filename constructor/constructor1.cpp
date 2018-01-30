/* program on constructor */
#include<iostream>
using namespace std;

class complex                          /* class and its member declaration */
{
int real,img;

public:complex()                      /* Default constructor */
{
cout<<"enter the real and imaginary data:"<<endl;
cin>>real>>img;
}
complex(int r,int i)               /* parametrised constructor */
{
real=r;
img=i;
}
complex (complex &e)              /* copy constructor */
{
real=e.real;
img=e.img;
}


void print()
{
cout<<real;

if(img>0)
cout<<"+";
cout<<img<<"i"<<endl;
}
};

main()
{
complex e1;                                                   /* object declaration for default constructor */
cout<<"details of e1 i.e Default constructor:"<<endl;
e1.print();
complex e2(45,12);                                             /* object for parametrised for parametrised constructor */
cout<<"details of e2 i.e parametrised constructor:"<<endl;
e2.print();
complex e3=e2;
cout<<"details of copy constructor"<<endl;                      /* object for copy constructor */
e3.print();
}