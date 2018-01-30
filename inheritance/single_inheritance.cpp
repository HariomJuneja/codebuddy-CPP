#include<iostream>
using namespace std;

class student                           // class declaration
{
protected: int age,roll;
char name[15];
public:student()                               // default constructor
{
cout<<"In student constructor:"<<endl;
cout<<"enter the age,roll,name"<<endl;
cin>>age>>roll>>name;
}
void display()
{
cout<<"age:"<<age<<endl;
cout<<"name:"<<name<<endl;
cout<<"roll:"<<roll<<endl;
}
~student()
{
cout<<"In student destructor:"<<endl;
}
};

class exam: protected student               //inherited class
{
protected :float m1,m2,m3,m4,m5,m6;
public :exam()
{
cout<<"in exam constructor :"<<endl;
cout<<"enter the marks:"<<endl;
cin>>m1>>m2>>m3>>m4>>m5>>m6;
}

void display()
{
student::display();
cout<<"m1:"<<m1<<endl;
cout<<"m2:"<<m2<<endl;
cout<<"m3:"<<m3<<endl;
cout<<"m4:"<<m4<<endl;
cout<<"m5:"<<m5<<endl;
cout<<"m6:"<<m6<<endl;
}
~exam()
{
cout<<"in exam destructor:"<<endl;
}
};
main()
{
exam obj;                    //object declaration 
obj.display();
}