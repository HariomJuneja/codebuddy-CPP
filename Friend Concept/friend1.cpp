#include<iostream>
using namespace std;
class son;
class father                                              // declaration of father class
{
int age;
char *name;
float sal,rent,grossy,policy,totexp;
char company[10],desig[10];

public:father()
{
cout<<"enter age,name,salary,rent,grossy,policy:"<<endl;          // enter details of father 
cout<<"enter company,designation:"<<endl;
name=new char[15];
cin>>age>>name>>sal>>rent>>grossy>>policy>>company>>desig;
}
void display()
{
cout<<"details of father :"<<endl;                               // displaying details of father 
cout<<"name:"<<name<<endl;
cout<<"age:"<<age<<endl;
cout<<"sal:"<<sal<<endl;
cout<<"rent:"<<rent<<endl;
cout<<"grossy:"<<grossy<<endl;
cout<<"policy:"<<policy<<endl;
cout<<"company:"<<company<<endl;
cout<<"desig:"<<desig<<endl;
}

~father()                                                    // father class destructor
{
cout<<"father destructor:"<<endl;
delete [] name;
}
void caltot(son&);                                        //function to calculate total exp

};

class son                                                   // son class declaration
{
int age;
char name[20];
float pocketmoney;
char qual[10];
public:son()
{
cout<<"enter the details of son age,name,pocketmoney,qual:"<<endl;
cin>>age>>name>>pocketmoney>>qual;
}

void display()
{
cout<<"details of son:"<<endl;
cout<<"name:"<<name<<endl;
cout<<"age:"<<age<<endl;
cout<<"pocketmoney:"<<pocketmoney<<endl;
cout<<"qual:"<<qual<<endl;
}
~son()
{
cout<<"son destructor"<<endl;
}

friend void father::caltot(son& sobj);      // friend function declaration //
}; 

void father::caltot(son& sobj)               //caltot() is friend of son so it can access private member
{                                               // of son
totexp=rent+grossy+policy+sobj.pocketmoney;
}

main()
{
father fobj ;
son sobj ;
fobj.caltot(sobj);                          // calling caltot function by passing friend class object
fobj.display();
sobj.display();

}