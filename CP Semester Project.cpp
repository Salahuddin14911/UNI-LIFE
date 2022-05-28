#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

void cafe();
int chillers();
int desi();
int junk();
int desserts();

void portal();
void marksA();
void marksB();
void marksC();
void marksD();
void checkA();
void checkB();
void checkC();
void checkD();


char numbers[10];   
void game();
void board(); 
int tic(); 
int guess(); 

string x;
int main()
{
	cout<<"\t\t\t  Mubeen\tAbdullah\tSalahuddin\tHasnain\n\n";

	cout<<"\t\t\t <<<< Welcome To Air University Management System >>>> "<<endl<<endl;
	
	int decide;
	char condition;
do{
	cout<<"~ For AU Portal (Press 1)  : \n";
	cout<<"~ For Cafe      (Press 2)  : \n";
	cout<<"~ For Game      (Press 3)  : \n";
	cin>>decide;
	switch (decide)
{
	case 1:
	portal ();
	break;
	case 2:
	cafe ();	
	break;
	case 3:
	game ();
	break;
	default :
	cout<<"Invalid input\n";
}
	cout<<"Press y to start again this Program ? :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
	return 0;
}


//                      CAFE
void cafe()			
{
	int option,bill,total=0;	
	char condition;
do{
	
	cout<<"\t \t Cafe  " <<endl<<endl;
	
	cout<<" * For Chillers  Press 1  \n";
	cout<<" * For Desi food Press 2  \n";
	cout<<" * For Junk food Press 3  \n";
	cout<<" * For Desserts  Press 4  \n";
	cin>>option;
switch (option)
{
case 1:
bill=chillers();	
break;
case 2:
bill=desi();		
break;
case 3:
bill=junk();	
break;
case 4:
bill=desserts();
break;
default:
cout<<"Wrong Input \n";
}
total=bill+total;
cout<<"Press y to buy another food : ";
cin>>condition;
}while(condition=='y'||condition=='Y');
cout<<"Your Total bill = "<<total<<endl;
}
int desserts()
{
	char condition;
	int option,bill,total=0;
do{    
    
    cout<<"--------DESSERTS--------"<<endl<<endl;
    
    cout<<" - For BROWNIE          Press 1 \n ";
    cout<<" - For Cake             Press 2 \n ";
    cout<<" - For Apple Pie        Press 3 \n ";
    cout<<" - For Choclate Cookies Press 4 \n ";
    cout<<" - For Lemon Loaf       Press 5 \n ";
	cin>>option;
	switch(option)
	{
	case 1:
	bill=350;
	break;
	case 2:
	bill=750;
	break;
	case 3:
	bill=500;
	break;
	case 4:
	bill=250;
	break;
	case 5:
	bill=450;
	break;
	default:
	cout<<"Wrong Input \n";
	}
	total=bill+total;
	cout<<" Press Y to buy again : ";
	cin>>condition;
}while(condition=='y'||condition=='Y');
return total;
}
int chillers()
{	
	char condition;
	int option,bill,total=0;
do{
	
    cout<<"\t\t**********CHILLERS MENU***********"<<endl<<endl;
    
	cout<<" - For Milk Shakes  Press 1 \n";
	cout<<" - For Ice Creams   Press 2 \n";
	cout<<" - For Cold Coffee  Press 3 \n";
	cout<<" - For Cold Drinks  Press 4 \n";
	cout<<" - For Fresh juices Press 5 \n";
	cin>>option;	
		switch(option)
	{
		case 1:
		bill=250 ;break;
		case 2:
		bill= 220 ;break;
		case 3:
		bill= 450 ;break;
		case 4:
		bill= 150 ;break;
		case 5:
		bill= 350 ;break;
	  	default:
	cout<<"Wrong Input \n";
	}
	total=bill+total;
	cout<<" Press Y to buy again : ";
	cin>>condition;
}while(condition=='y'||condition=='Y');
return total;
}	
int desi()
{	
	char condition;
	int option,bill,total=0;
	
do{		
    
    cout<<"\t----------DESI FOOD MENU----------"<<endl<<endl;
    
	cout<<" - For Beef Pulao       Press 1 \n";
	cout<<" - For Mutton Tawa      Press 2 \n";
	cout<<" - For Chcken Achari    Press 3 \n";
	cout<<" - For B.B.Q (any meat) Press 4 \n";
	cout<<" - For Fish Grilled     Press 5 \n";
	cin>>option;
	switch(option)
	{
	case 1:
	bill=350;	break;
	case 2:
	bill=1800 ;break;
	case 3:
	bill=1300;break;
	case 4:
	bill=550;break;
	case 5:
	bill=1100;break;		
  	default:
	cout<<"Wrong Input \n";
	}
	total=bill+total;
	cout<<" Press Y to buy again : ";
	cin>>condition;
}while(condition=='y'||condition=='Y');
return total;
}	
int junk()
{
	char condition;
	int option,bill,total=0;
do{		
    
    cout<<"----------JUNK FOOD MENU----------"<<endl<<endl;
    
	cout<<" - For Burger   Press 1 \n";
	cout<<" - For Pizza    Press 2 \n";
	cout<<" - For Fries    Press 3 \n";
	cout<<" - For Pasta    Press 4 \n";
	cout<<" - For Sandwich Press 5 \n";
	cout<<" - To give TIP  Press 6 \n";
	cin>>option;
		switch(option)
	{
		case 1:
		bill=400;break;
		case 2:
		bill=200;break;
		case 3:
		bill=200;break;
		case 4:
		bill=220;break;
		case 5:
		bill=300;break;
		case 6:
		bill=100;break;			
	  	default:
	cout<<"Wrong Input \n";
	}
	total=bill+total;
	cout<<"Press y to buy again : ";
	cin>>condition;
}while(condition=='y'||condition=='Y');
return total;
}

//         AU TEACHER PORTAL

void  portal()
{
	char condition;
	int decide,roll_no;
	string pass,user;
	do{
	cout<<"Welcome To AU Portal"<<endl;
	
do{

	cout<<"\t\tAdministration \n";	
	cout<<"Enter your name : ";
	cin>>user;
	cout<<"Enter your Password (Don't tell your password to anyone) : ";
	cin>>pass;
	if (user=="sangi"&&pass == "2112")	
	{
	cout<<"Welcome "<<user<<" !"<<endl;
	cout<<"Do you want to Enter Marks ? Press \"1\"\n";
	cout<<"Do you want to Check Marks ? Press \"2\"\n";	
	cin>>decide;
	switch (decide)					
	{
do{
	case 1:
	do
{	char section;
	cout<<"Which section marks do you want to enter (A,B,C,D) ? : ";
	cin>>section;
	cout<<endl<<endl;
	switch(section)
{
	do
{
	case 'A':
	case 'a':
	marksA();	
	break;	
	case 'B':
	case 'b':
	marksB();	
	break;	
	case 'C':
	case 'c':
	marksC();	
	break;	
	case 'D':
	case 'd':
	marksD();	
	break;	
	default:
	cout<<"Invalid Input \n";
	cout<<"Do You want to Enter again ? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
}
cout<<"Do you want to enter another section marks ? Press y :";
cin>>condition;
}while(condition=='Y'||condition=='y');
	break;
	case 2:
do
{	char section;
cout<<"\n\nWhich section marks do you want to check (A,B,C,D) ? : ";
cin>>section;
cout<<endl<<endl;
switch (section)
{	
do{
	case 'A':
	case 'a':
	checkA();
	break;	
	case 'B':
	case 'b':
	checkB();
	break;	
	case 'C':
	case 'c':
	checkC();	
	break;	
	case 'D':
	case 'd':
	checkD();	
	break;	
	default:
	cout<<"Invalid Input \n";
	cout<<"Do you want to Try it again ? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
}
cout<<"\n\nDo you want to Check another section marks ? Press y :";
cin>>condition;
}while(condition=='Y'||condition=='y');
	break;
	default :
	cout<<"Invalid input\n";
    cout<<"Do you want to Try Again ? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
	}
	}
	else
	{
	cout<<"Wrong user name or Password \n";
	}
	cout<<"Do you again want to run the program? Press y :";
	cin>>condition;
}while(condition=='Y'||condition=='y');
	break;	
}while(condition=='Y'||condition=='y');
}


void marksA()
{
	fstream fout;
	fout.open("mts-a.csv", ios::out);
	int size;
	cout<<"Enter number of students in A section : ";
	cin>>size;

string name [size];

int roll[size];

float L1[size],L2[size],L3[size],L4[size],L5[size];
float L6[size],L7[size],L8[size],L9[size],L10[size];
float L11[size],L12[size],L13[size],L14[size];

float report1 [size],report2 [size],report3 [size],report4 [size],report5 [size];
float report6 [size],report7 [size],report8 [size],report9 [size],report10 [size];
float report11[size],report12 [size],report13[size],report14 [size];

float mid [size],percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"Enter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"Enter Student "<<i+1<<" data"<<endl;
    
	cout<<"Roll number : ";
    cin>>roll[i];
	
	cout<<"Name : ";
    cin>>name[i];
  
  	cout<<"Lab performance 1 : ";
    cin>>L1[i];

    cout<<"Lab performance 2 : ";
    cin>>L2[i];

    cout<<"Lab performance 3 : ";
    cin>>L3[i];
	
    cout<<"Lab performance 4 : ";
    cin>>L4[i];
	
    cout<<"Lab performance 5 : ";
    cin>>L5[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>L6[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>L7[i];
	
	cout<<"Lab performance 8 : ";
	cin>>L8[i];
	
	cout<<"Lab performance 9 : ";
	cin>>L9[i];
		
    cout<<"Lab performance 10 : ";
	cin>>L10[i];
		
    cout<<"Lab performance 11 : ";
    L11[i]=(rand()%15);	
	cout<<L11[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    L12[i]=(rand()%15);	
	cout<<L12[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    L13[i]=(rand()%15);	
	cout<<L13[i];    
	cout<<endl;
	
	cout<<"Lab performance 14 : ";
    L14[i]=(rand()%15);	
	cout<<L14[i];    
	cout<<endl;  
    
    cout<<"lab report 1 : ";
    cin>>report1 [i];
    
	cout<<"lab report 2 : ";
    cin>>report2 [i];
    
	cout<<"lab report 3 : ";
    cin>>report3 [i];
    
	cout<<"lab report 4 : ";
    cin>>report4 [i];
    
	cout<<"lab report 5 : ";
    cin>>report5 [i];   
	
	cout<<"lab report 6 : ";
    report6 [i]=(rand()%15);	
	cout<<report6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    report7 [i]=(rand()%15);	
	cout<<report7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    report8 [i]=(rand()%15);	
	cout<<report8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    report9 [i]=(rand()%15);	
	cout<<report9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    report10 [i]=(rand()%15);	
	cout<<report10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    report11 [i]=(rand()%15);	
	cout<<report11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    report12 [i]=(rand()%15);	
	cout<<report12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    report13 [i]=(rand()%15);	
	cout<<report13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    report14 [i]=(rand()%15);	
	cout<<report14 [i];    
	cout<<endl;
	
    cout<<"Mid : ";
    cin>>mid [i];    
	    
	cout<<"Final : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"Project : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=L1[i]+L2[i]+L3[i]+L4[i]+L5[i]+L6[i]+L7[i]
	+ L8[i]+L9[i]+L10[i]+L11[i]+L12[i]+L13[i]+L14[i];

lab[i]=report1[i]+report2[i]+report3[i]+report4[i]+
report5[i]+report6[i]+report7[i]+report8[i]+report9[i]
+report10[i]+report11[i]+report12[i]+report13[i]+report14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "
<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "
<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "
<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "
<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "

<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"
<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"
<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"
<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< L1[i ]<< " , "<< L2[i]<< " , "<< L3[i]<< " , "<< L4[i]<<  " , "<< L5[i]<<  " , "
	<< L6[i] << " , "<< L7[i]<< " , "<< L8[i]<< " , "<< L9[i]<<  " , "<< L10[i]<< " , "
	<< L11[i]<< " , "<<L12[i]<< " , "<< L13[i]<<" , "<< L14[i]<< " , "

	<< report1[i] << " , "<< report2[i] << " , "<<report3[i]<< " , "
	<< report4[i] << " , "<< report5[i] 
	<< " , " << report6[i]<< " , "<< report7[i] << " , "<< report8[i]
	 << " , "<< report9[i] << " , "<< report10[i]
	<< " , " <<report11[i]<< " , "<< report12[i]<< " , "<< report13[i]
	<< " , "<< report14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }
}
void marksB()
{
	fstream fout;
	fout.open("B-section.csv", ios::out);
	int size;
	cout<<"Enter number of students in B section : ";
		cin>>size;

string name [size];

int roll[size];

float L1[size],L2[size],L3[size],L4[size],L5[size];
float L6[size],L7[size],L8[size],L9[size],L10[size];
float L11[size],L12[size],L13[size],L14[size];

float report1 [size],report2 [size],report3 [size],report4 [size],report5 [size];
float report6 [size],report7 [size],report8 [size],report9 [size],report10 [size];
float report11[size],report12 [size],report13[size],report14 [size];

float mid [size], percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"Enter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"Enter Student "<<i+1<<" data"<<endl;
    
	cout<<"Roll number : ";
    cin>>roll[i];
	
	cout<<"Name : ";
    cin>>name[i];
  
  	cout<<"Lab performance 1 : ";
    cin>>L1[i];

    cout<<"Lab performance 2 : ";
    cin>>L2[i];

    cout<<"Lab performance 3 : ";
    cin>>L3[i];
	
    cout<<"Lab performance 4 : ";
    cin>>L4[i];
	
    cout<<"Lab performance 5 : ";
    cin>>L5[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>L6[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>L7[i];
	
	cout<<"Lab performance 8 : ";
	cin>>L8[i];
	
	cout<<"Lab performance 9 : ";
	cin>>L9[i];
		
    cout<<"Lab performance 10 : ";
	cin>>L10[i];
		
    cout<<"Lab performance 11 : ";
    L11[i]=(rand()%15);	
	cout<<L11[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    L12[i]=(rand()%15);	
	cout<<L12[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    L13[i]=(rand()%15);	
	cout<<L13[i];    
	cout<<endl;
	
	cout<<"Lab performance 14 : ";
    L14[i]=(rand()%15);	
	cout<<L14[i];    
	cout<<endl;  
    
    cout<<"lab report 1 : ";
    cin>>report1 [i];
    
	cout<<"lab report 2 : ";
    cin>>report2 [i];
    
	cout<<"lab report 3 : ";
    cin>>report3 [i];
    
	cout<<"lab report 4 : ";
    cin>>report4 [i];
    
	cout<<"lab report 5 : ";
    cin>>report5 [i];   
	
	cout<<"lab report 6 : ";
    report6 [i]=(rand()%15);	
	cout<<report6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    report7 [i]=(rand()%15);	
	cout<<report7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    report8 [i]=(rand()%15);	
	cout<<report8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    report9 [i]=(rand()%15);	
	cout<<report9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    report10 [i]=(rand()%15);	
	cout<<report10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    report11 [i]=(rand()%15);	
	cout<<report11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    report12 [i]=(rand()%15);	
	cout<<report12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    report13 [i]=(rand()%15);	
	cout<<report13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    report14 [i]=(rand()%15);	
	cout<<report14 [i];    
	cout<<endl;
	
    cout<<"Mid : ";
    cin>>mid [i];    
	    
	cout<<"Final : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"Project : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=L1[i]+L2[i]+L3[i]+L4[i]+L5[i]+L6[i]+L7[i]
	+ L8[i]+L9[i]+L10[i]+L11[i]+L12[i]+L13[i]+L14[i];

lab[i]=report1[i]+report2[i]+report3[i]+report4[i]+
report5[i]+report6[i]+report7[i]+report8[i]+report9[i]
+report10[i]+report11[i]+report12[i]+report13[i]+report14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "
<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "
<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "
<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "
<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "

<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"
<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"
<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"
<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< L1[i ]<< " , "<< L2[i]<< " , "<< L3[i]<< " , "<< L4[i]<<  " , "<< L5[i]<<  " , "
	<< L6[i] << " , "<< L7[i]<< " , "<< L8[i]<< " , "<< L9[i]<<  " , "<< L10[i]<< " , "
	<< L11[i]<< " , "<<L12[i]<< " , "<< L13[i]<<" , "<< L14[i]<< " , "

	<< report1[i] << " , "<< report2[i] << " , "<<report3[i]<< " , "
	<< report4[i] << " , "<< report5[i] 
	<< " , " << report6[i]<< " , "<< report7[i] << " , "<< report8[i]
	 << " , "<< report9[i] << " , "<< report10[i]
	<< " , " <<report11[i]<< " , "<< report12[i]<< " , "<< report13[i]
	<< " , "<< report14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }


}
void marksC()
{
fstream fout;
	fout.open("test2.csv", ios::out);
	int size;
	cout<<"Enter number of students in C section : ";
	cin>>size;

string name [size];

int roll[size];

float L1[size],L2[size],L3[size],L4[size],L5[size];
float L6[size],L7[size],L8[size],L9[size],L10[size];
float L11[size],L12[size],L13[size],L14[size];

float report1 [size],report2 [size],report3 [size],report4 [size],report5 [size];
float report6 [size],report7 [size],report8 [size],report9 [size],report10 [size];
float report11[size],report12 [size],report13[size],report14 [size];

float mid [size], percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"Enter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"Enter Student "<<i+1<<" data"<<endl;
    
	cout<<"Roll number : ";
    cin>>roll[i];
	
	cout<<"Name : ";
    cin>>name[i];
  
  	cout<<"Lab performance 1 : ";
    cin>>L1[i];

    cout<<"Lab performance 2 : ";
    cin>>L2[i];

    cout<<"Lab performance 3 : ";
    cin>>L3[i];
	
    cout<<"Lab performance 4 : ";
    cin>>L4[i];
	
    cout<<"Lab performance 5 : ";
    cin>>L5[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>L6[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>L7[i];
	
	cout<<"Lab performance 8 : ";
	cin>>L8[i];
	
	cout<<"Lab performance 9 : ";
	cin>>L9[i];
		
    cout<<"Lab performance 10 : ";
	cin>>L10[i];
		
    cout<<"Lab performance 11 : ";
    L11[i]=(rand()%15);	
	cout<<L11[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    L12[i]=(rand()%15);	
	cout<<L12[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    L13[i]=(rand()%15);	
	cout<<L13[i];    
	cout<<endl;
	
	cout<<"Lab performance 14 : ";
    L14[i]=(rand()%15);	
	cout<<L14[i];    
	cout<<endl;  
    
    cout<<"lab report 1 : ";
    cin>>report1 [i];
    
	cout<<"lab report 2 : ";
    cin>>report2 [i];
    
	cout<<"lab report 3 : ";
    cin>>report3 [i];
    
	cout<<"lab report 4 : ";
    cin>>report4 [i];
    
	cout<<"lab report 5 : ";
    cin>>report5 [i];   
	
	cout<<"lab report 6 : ";
    report6 [i]=(rand()%15);	
	cout<<report6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    report7 [i]=(rand()%15);	
	cout<<report7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    report8 [i]=(rand()%15);	
	cout<<report8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    report9 [i]=(rand()%15);	
	cout<<report9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    report10 [i]=(rand()%15);	
	cout<<report10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    report11 [i]=(rand()%15);	
	cout<<report11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    report12 [i]=(rand()%15);	
	cout<<report12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    report13 [i]=(rand()%15);	
	cout<<report13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    report14 [i]=(rand()%15);	
	cout<<report14 [i];    
	cout<<endl;
	
    cout<<"Mid : ";
    cin>>mid [i];    
	    
	cout<<"Final : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"Project : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=L1[i]+L2[i]+L3[i]+L4[i]+L5[i]+L6[i]+L7[i]
	+ L8[i]+L9[i]+L10[i]+L11[i]+L12[i]+L13[i]+L14[i];

lab[i]=report1[i]+report2[i]+report3[i]+report4[i]+
report5[i]+report6[i]+report7[i]+report8[i]+report9[i]
+report10[i]+report11[i]+report12[i]+report13[i]+report14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "
<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "
<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "
<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "
<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "

<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"
<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"
<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"
<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< L1[i ]<< " , "<< L2[i]<< " , "<< L3[i]<< " , "<< L4[i]<<  " , "<< L5[i]<<  " , "
	<< L6[i] << " , "<< L7[i]<< " , "<< L8[i]<< " , "<< L9[i]<<  " , "<< L10[i]<< " , "
	<< L11[i]<< " , "<<L12[i]<< " , "<< L13[i]<<" , "<< L14[i]<< " , "

	<< report1[i] << " , "<< report2[i] << " , "<<report3[i]
	<< " , "<< report4[i] << " , "<< report5[i] 
	<< " , " << report6[i]<< " , "<< report7[i] << " , "
	<< report8[i] << " , "<< report9[i] << " , "<< report10[i]
	<< " , " <<report11[i]<< " , "<< report12[i]<< " , "
	<< report13[i]<< " , "<< report14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }
	
}
void marksD()
{
fstream fout;
	fout.open("D-section.csv", ios::out);
	int size;
	cout<<"Enter number of students in D section : ";
	cin>>size;

string name [size];

int roll[size];

float L1[size],L2[size],L3[size],L4[size],L5[size];
float L6[size],L7[size],L8[size],L9[size],L10[size];
float L11[size],L12[size],L13[size],L14[size];

float report1 [size],report2 [size],report3 [size],report4 [size],report5 [size];
float report6 [size],report7 [size],report8 [size],report9 [size],report10 [size];
float report11[size],report12 [size],report13[size],report14 [size];

float mid [size], percentage[size],lab[size],labperf[size],project[size],final[size];
	
	cout<<"Enter the details of "<<size<<" students : \n";
   
	for (int i = 0; i < size; i++)
    {
    cout<<"Enter Student "<<i+1<<" data"<<endl;
    
	cout<<"Roll number : ";
    cin>>roll[i];
	
	cout<<"Name : ";
    cin>>name[i];
  
  	cout<<"Lab performance 1 : ";
    cin>>L1[i];

    cout<<"Lab performance 2 : ";
    cin>>L2[i];

    cout<<"Lab performance 3 : ";
    cin>>L3[i];
	
    cout<<"Lab performance 4 : ";
    cin>>L4[i];
	
    cout<<"Lab performance 5 : ";
    cin>>L5[i];	
	
	cout<<"Lab performance 6 : ";
	cin>>L6[i];
    
    cout<<"Lab performance 7 : ";	
	cin>>L7[i];
	
	cout<<"Lab performance 8 : ";
	cin>>L8[i];
	
	cout<<"Lab performance 9 : ";
	cin>>L9[i];
		
    cout<<"Lab performance 10 : ";
	cin>>L10[i];
		
    cout<<"Lab performance 11 : ";
    L11[i]=(rand()%15);	
	cout<<L11[i];
	cout<<endl;
	
    cout<<"Lab performance 12 : ";
    L12[i]=(rand()%15);	
	cout<<L12[i];
	cout<<endl;
	
    cout<<"Lab performance 13 : ";
    L13[i]=(rand()%15);	
	cout<<L13[i];    
	cout<<endl;
	
	cout<<"Lab performance 14 : ";
    L14[i]=(rand()%15);	
	cout<<L14[i];    
	cout<<endl;  
    
    cout<<"lab report 1 : ";
    cin>>report1 [i];
    
	cout<<"lab report 2 : ";
    cin>>report2 [i];
    
	cout<<"lab report 3 : ";
    cin>>report3 [i];
    
	cout<<"lab report 4 : ";
    cin>>report4 [i];
    
	cout<<"lab report 5 : ";
    cin>>report5 [i];   
	
	cout<<"lab report 6 : ";
    report6 [i]=(rand()%15);	
	cout<<report6 [i];    
    cout<<endl;
    
	cout<<"lab report 7 : ";   
    report7 [i]=(rand()%15);	
	cout<<report7 [i];    
    cout<<endl;
	    
	cout<<"lab report 8 : ";
    report8 [i]=(rand()%15);	
	cout<<report8 [i];    
    cout<<endl;
    
    cout<<"lab report 9 : ";
    report9 [i]=(rand()%15);	
	cout<<report9 [i];    
    cout<<endl;
    
    cout<<"lab report 10 : ";
    report10 [i]=(rand()%15);	
	cout<<report10 [i];    
    cout<<endl;
    
    cout<<"lab report 11 : ";
    report11 [i]=(rand()%15);	
	cout<<report11 [i];    
    cout<<endl;
    
    cout<<"lab report 12 : ";
    report12 [i]=(rand()%15);	
	cout<<report12 [i];    
    cout<<endl;
    
    cout<<"lab report 13 : ";
    report13 [i]=(rand()%15);	
	cout<<report13 [i];    
    cout<<endl;
    
    cout<<"lab report 14 : ";
    report14 [i]=(rand()%15);	
	cout<<report14 [i];    
	cout<<endl;
	
    cout<<"Mid : ";
    cin>>mid [i];    
	    
	cout<<"Final : ";
    final[i]=(rand()%50);	
	cout<<final[i];
	cout<<endl;

    cout<<"Project : ";
    project[i]=(rand()%20);	
	cout<<project[i];
    cout<<endl;
	
labperf[i]=L1[i]+L2[i]+L3[i]+L4[i]+L5[i]+L6[i]+L7[i]
	+ L8[i]+L9[i]+L10[i]+L11[i]+L12[i]+L13[i]+L14[i];

lab[i]=report1[i]+report2[i]+report3[i]+report4[i]+
report5[i]+report6[i]+report7[i]+report8[i]+report9[i]+
report10[i]+report11[i]+report12[i]+report13[i]+report14[i];

    }

fout<<"Roll No."<<" , "<<"Name"<<" , "<<"lab 1 performance"<<" , "
<<"lab 2 performance"<<" , "<<"lab 3 performance"<<" , "
<<"lab 4 performance"<<" , "<<"lab 5 performance"<<" , "
<<"lab 6 performance"<<" , "<<"lab 7 performance"<<" , "
<<"lab 8 performance"<<" , "
<<"lab 9 performance"<<" , "<<"lab 10 performance"<<" , "
<<"lab 11 performance"<<" , "<<"lab 12 performance"<<" , "<<"lab 13 performance"
<<" , "<<"lab 9 performance"<<" , "

<<"lab report 1"<<" , "<<"lab report 2"<<" , "<<"lab report 3"
<<" , "<<"lab report 4"<<" , ""lab report 5"<<" , "
<<"lab report 6"<<" , "<<"lab report 7"<<" , "<<"lab report 8"
<<" , "<<"lab report 9"<<" , ""lab report 10"
<<" , "<<"lab report 11"<<" , "<<"lab report !2"
<<" , "<<"lab report 13"<<" , ""lab report 14"
<<" , "<<"Mid Term"<<" , "<<"Final"<<" , "<<"Project"<<"\n";
for (int i = 0; i < size; i++)
    {    
    	// Insert the data to file
    fout << roll[i]<< " , "<< name[i] <<    " , "
	<< L1[i ]<< " , "<< L2[i]<< " , "<< L3[i]<< " , "<< L4[i]<<  " , "<< L5[i]<<  " , "
	<< L6[i] << " , "<< L7[i]<< " , "<< L8[i]<< " , "<< L9[i]<<  " , "<< L10[i]<< " , "
	<< L11[i]<< " , "<<L12[i]<< " , "<< L13[i]<<" , "<< L14[i]<< " , "

	<< report1[i] << " , "<< report2[i] << " , "<<report3[i]<< " , "
	<< report4[i] << " , "<< report5[i] 
	<< " , " << report6[i]<< " , "<< report7[i] << " , "
	<< report8[i] << " , "<< report9[i] << " , "<< report10[i]
	<< " , " <<report11[i]<< " , "<< report12[i]<< " , "
	<< report13[i]<< " , "<< report14[i]<< " , "
	<< mid[i]<< " , "<< final[i]<< " , "<< project[i]<< " \n";
    }
	
}
void checkA()
{

  
int size=42;
string name[size];
int rollnum[size];
float L1[size];
float L2[size];
float L3[size];
float L4[size];
float L5[size];
float L6[size];
float L7[size],L8[size],L9[size],
L10[size],L11[size],L12[size],
L13[size],L14[size];
float lab1rep[size],lab2rep[size],
lab3rep[size],lab4rep[size],lab5rep[size];
float mid[size];

   
string line;
ifstream file3("MTSA-CP-GRADES.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
   
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> L1[i];
    getline(iss, rand, ',');
    iss >>  L2[i]; 
    getline(iss, rand, ',');
    iss >>  L3[i]; 
    getline(iss, rand, ',');
    iss >>  L4[i]; 
    getline(iss, rand, ',');
    iss >>  L5[i]; 
    getline(iss, rand, ',');
    iss >>  L6[i]; 
	 getline(iss, rand, ',');
    iss >>  L7[i];
	 getline(iss, rand, ',');
    iss >>  L8[i];
	 getline(iss, rand, ',');
    iss >>  L9[i];
	 getline(iss, rand, ',');
    iss >>  L10[i];
	 getline(iss, rand, ',');
    iss >>  L11[i];
	 getline(iss, rand, ',');
    iss >>  L12[i];
	 getline(iss, rand, ',');
    iss >>  L13[i];
	 getline(iss, rand, ',');
    iss >>  L14[i];
	 getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++; 
}

for(int i=0;i<size;i++)
cout<<setw(4)<<rollnum[i]<<setw(32)<<name[i]<<setw(12)
<<L1[i]<<setw(4)<<L2[i]<<setw(4)<<L3[i]<<setw(4)<<L4[i]
<<setw(4)<<L5[i]<<setw(4)<<L6[i]<<setw(4)<<L7[i]
<<setw(4)<<L8[i]<<setw(4)<<L9[i]<<setw(4)<<L10[i]
<<setw(4)<<L11[i]<<setw(4)<<L12[i]<<setw(4)<<L13[i]
<<setw(4)<<L14[i]<<setw(4)<<mid[i]<<endl;
}
void checkB()
{
  
int size=35;
string name[size];
int rollnum[size];
float L1[size];
float L2[size];
float L3[size];
float L4[size];
float L5[size];
float L6[size];
float L7[size],L8[size],
L9[size],L10[size],L11[size],
L12[size],L13[size],L14[size],L15[size];

float mid[size];

   
string line;
ifstream file4("MTSB-CP-GRADES.csv");
int i=0;
while (getline(file4, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    
    iss >> L1[i];
    getline(iss, rand, ',');
    iss >>  L2[i]; 
    getline(iss, rand, ',');
    iss >>  L3[i]; 
    getline(iss, rand, ',');
    iss >>  L4[i]; 
    getline(iss, rand, ',');
    iss >>  L5[i]; 
    getline(iss, rand, ',');
    iss >>  L6[i]; 
	 getline(iss, rand, ',');
    iss >>  L7[i];
	 getline(iss, rand, ',');
    iss >>  L8[i];
	 getline(iss, rand, ',');
    iss >>  L9[i];
	getline(iss, rand, ',');
    iss >>  L10[i];
	 getline(iss, rand, ',');
    iss >>  L11[i];
	 getline(iss, rand, ',');
    iss >>  L12[i];
	 getline(iss, rand, ',');
    iss >>  L13[i];
	 getline(iss, rand, ',');
    iss >>  L14[i];
	 getline(iss, rand, ',');
    iss >>  L15[i];
	 getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++;
}

for(int i=0;i<size;i++)
cout<<setw(4)<<rollnum[i]<<setw(32)<<name[i]<<setw(12)
<<L1[i]<<setw(4)<<L2[i]<<setw(4)<<L3[i]<<setw(4)<<L4[i]
<<setw(4)<<L5[i]<<setw(4)<<L6[i]<<setw(4)<<L7[i]
<<setw(4)<<L8[i]<<setw(4)<<L9[i]<<setw(4)<<L10[i]
<<setw(4)<<L11[i]<<setw(4)<<L12[i]<<setw(4)<<L13[i]
<<setw(4)<<L14[i]<<setw(4)<<mid[i]<<endl;	
}
void checkC()
{
int size=30;
string name[size];
int rollnum[size];
float L1[size];
float L2[size];
float L3[size];
float L4[size];
float L5[size];
float L6[size];
float L7[size],L8[size],
L9[size],L10[size],L11[size],
L12[size],L13[size],L14[size],L15[size];
float lab1rep[size],lab2rep[size],
lab3rep[size],lab4rep[size],lab5rep[size];
float mid[size];

   
string line;
ifstream file5("BEBME-OOP-GRADES.csv");
int i=0;
while (getline(file5, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> L1[i];
    getline(iss, rand, ',');
    iss >>  L2[i]; 
    getline(iss, rand, ',');
    iss >>  L3[i]; 
    getline(iss, rand, ',');
    iss >>  L4[i]; 
    getline(iss, rand, ',');
    iss >>  L5[i]; 
    getline(iss, rand, ',');
    iss >>  L6[i]; 
	 getline(iss, rand, ',');
    iss >>  L7[i];
	 getline(iss, rand, ',');
    iss >>  L8[i];
	 getline(iss, rand, ',');
    iss >>  L9[i];
	 getline(iss, rand, ',');
    iss >>  L10[i];
	 getline(iss, rand, ',');
    iss >>  L11[i];
	 getline(iss, rand, ',');
    iss >>  L12[i];
	 getline(iss, rand, ',');
    iss >>  L13[i];
	 getline(iss, rand, ',');
    iss >>  L14[i];
	 getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++;
}

for(int i=0;i<size;i++)
cout<<setw(4)<<rollnum[i]<<setw(32)<<name[i]<<setw(12)
<<L1[i]<<setw(4)<<L2[i]<<setw(4)<<L3[i]<<setw(4)<<L4[i]
<<setw(4)<<L5[i]<<setw(4)<<L6[i]<<setw(4)<<L7[i]
<<setw(4)<<L8[i]<<setw(4)<<L9[i]<<setw(4)<<L10[i]
<<setw(4)<<L11[i]<<setw(4)<<L12[i]<<setw(4)<<L13[i]
<<setw(4)<<L14[i]<<setw(4)<<mid[i]<<endl;

}
void checkD()
{
int size=23;
string name[size];
int rollnum[size];
float L1[size];
float L2[size];
float L3[size];
float L4[size];
float L5[size];
float L6[size];
float L7[size],L8[size],
L9[size],L10[size],L11[size],
L12[size],L13[size],L14[size]
,L15[size],L16[size];

float mid[size];

   
string line;
ifstream file6("POWER-CP.csv");
int i=0;
while (getline(file6, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> L1[i];
    getline(iss, rand, ',');
    iss >>  L2[i]; 
    getline(iss, rand, ',');
    iss >>  L3[i]; 
    getline(iss, rand, ',');
    iss >>  L4[i]; 
    getline(iss, rand, ',');
    iss >>  L5[i]; 
    getline(iss, rand, ',');
    iss >>  L6[i]; 
	getline(iss, rand, ',');
    iss >>  L7[i];
	getline(iss, rand, ',');
    iss >>  L8[i];
	getline(iss, rand, ',');
    iss >>  L9[i];
	getline(iss, rand, ',');
    iss >>  L10[i];
	getline(iss, rand, ',');
    iss >>  L11[i];
	getline(iss, rand, ',');
    iss >>  L12[i];
	getline(iss, rand, ',');
    iss >>  L13[i];
	getline(iss, rand, ',');
    iss >>  L14[i];
	getline(iss, rand, ',');
    iss >>  L15[i];
	getline(iss, rand, ',');
    iss >>  L16[i];
	getline(iss, rand, ',');
    iss >>  mid[i];				   
    i++;
}

for(int i=0;i<size;i++)
cout<<setw(4)<<rollnum[i]<<setw(32)<<name[i]<<setw(12)
<<L1[i]<<setw(4)<<L2[i]<<setw(4)<<L3[i]<<setw(4)<<L4[i]
<<setw(4)<<L5[i]<<setw(4)<<L6[i]<<setw(4)<<L7[i]
<<setw(4)<<L8[i]<<setw(4)<<L9[i]<<setw(4)<<L10[i]
<<setw(4)<<L11[i]<<setw(4)<<L12[i]<<setw(4)<<L13[i]
<<setw(4)<<L14[i]<<setw(4)<<mid[i]<<endl<<endl;		
}

//            GAME

void game()
{
	
	numbers[1]='1';
    numbers[2]='2';
    numbers[3]='3';
    numbers[4]='4';
    numbers[5]='5';
    numbers[6]='6';
    numbers[7]='7';
    numbers[8]='8';
    numbers[9]='9';
int player=1, choice,i,ans,j=0; 
char sign,ch;	
do{
cout<<"\t \t ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl; //1st impression
cout<<"\t \t !!!!!!!!! G_A_M_E TIME !!!!!!!!!"<<endl;
cout<<"\t \t ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl<<endl;
cout<<"\t ~ Option 1 \" TIC TAC TOE \" " <<endl; 
cout<<"\t ~ Option 2 \" NUMBER GUESSING \" \n" <<endl;
cout<<"\t * WHICH GAME YOU WANT TO PLAY : ";
cin>>ans;
cout<<endl<<endl;

switch(ans)
//                  TIC TAC TOE
{ case 1:
	cout<<"\t//////////////////////////////"<<endl; 
	cout<<"\t////// TIC TAC TOE GAME //////"<<endl;
	cout<<"\t//////////////////////////////"<<endl<<endl;	
	cout<<"\t_____ Welcome to the Game _____"<<endl;
	char ans1;	
	do{ 
	board();
		
	if (player % 2==1)	//condition for player 1 
	player=1;
	else 
	player=2;			//will true when 1 is add in player. 
	cout<<"PLAYER " <<player <<" ENTER A NUMBER : " ;
	cin>>choice;
	
	if(player == 1)		// if condition for player sign printing;
	sign = 'X';
	else
	sign = 'O';

    //printing of sign at that place and also its verify that number place is not selected by previous player.
	if (choice == 1 && numbers [1] =='1') 
	numbers[1]= sign;
	
	else if(choice == 2 && numbers [2] =='2')
	numbers[2]=sign;
	
	else if(choice == 3 && numbers [3] =='3')
	numbers[3]= sign;
	
	else if(choice == 4 && numbers [4] =='4')
	numbers[4]= sign;
	
	else if(choice == 5 && numbers [5] =='5')
	numbers[5]= sign;	
	
	else if(choice == 6 && numbers [6] =='6')
	numbers[6]= sign;
	
	else if(choice == 7 && numbers [7] =='7')
	numbers[7]= sign;
		
	else if(choice == 8 && numbers [8] =='8')
	numbers[8]= sign;

	else if(choice == 9 && numbers [9] =='9')
	numbers[9]= sign;	
	else
    {
    cout<<"You Enter An Invalid Number "<<endl;
	player--; 			//eg player =1 player-- ; 0 
	j--;
	cout<<"Enter Again "<<endl;
	}
    i=tic();
    player++;			//player++ now player  add 
	if (i==1)
	j=9;
	j++;
	}while(j<=8);		// do while loop will when player wins
	board();
	if(i==1)
	{ 					//as for winning i is equal to 1 so;
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	cout<<"  ==>  PLAYER  (" <<--player <<")  WIN "<<endl;
	cout<<"\tCONGRUTATIONS ! " <<endl;
	}    
	else 
	{
	cout<<" ==>  GAME DRAW";
	}
	j=0;
	break;
	//                NUMBER GUESSING
	case 2:
	cout<<"\t///////////////////////////////"<<endl; //1st impression
	cout<<"\t%%%%%% Number GUESSING GAME %%%%%%"<<endl;
	cout<<"\t///////////////////////////////"<<endl<<endl;
	cout<<"\t_________Welcome to the Game_________"<<endl;
	guess();
	break;
	default:
	cout<<"\t YOU ENTER WRONG OPTION ! "<<endl; 
}
cout<<"\nPress y to play again games : ";
cin>>ch;
	if (ch=='y'||ch=='Y')
    {
    numbers[1]='1';
    numbers[2]='2';
    numbers[3]='3';
    numbers[4]='4';
    numbers[5]='5';
    numbers[6]='6';
    numbers[7]='7';
    numbers[8]='8';
    numbers[9]='9';
    }
}while(ch=='y'||ch=='Y');
		
}
void board()
{
    //borad 
	cout<<" PLAYER 1 (X) & PLAYER 2 (O) "<<endl<<endl;
	cout<<"\t   "<<numbers[1]<<"  |  " <<numbers[2] <<"  |  "<<numbers[3] <<endl;;
	cout<<"\t _____|_____|_____"<<endl;
	cout<<"\t      |     |     "<<endl;
	cout<<"\t   "<<numbers[4]<<"  |  " <<numbers[5] <<"  |  "<<numbers[6] <<endl;;
	cout<<"\t _____|_____|_____"<<endl;
	cout<<"\t      |     |     "<<endl;
	cout<<"\t   "<<numbers[7]<<"  |  " <<numbers[8] <<"  |  "<<numbers[9] <<endl;;
	cout<<"\t      |     |     "<<endl;
}
int tic()
{  
	if(numbers[1]==numbers[2] && numbers[2]==numbers[3])
	return 1;
	else if(numbers[4]==numbers[5] && numbers[5]==numbers[6])
	return 1;
	else if(numbers[7]==numbers[8] && numbers[8]==numbers[9])
	return 1;
	else if(numbers[1]==numbers[4] && numbers[4]==numbers[7])
	return 1;
	else if(numbers[2]==numbers[5] && numbers[5]==numbers[8])
	return 1;
	else if(numbers[3]==numbers[6] && numbers[6]==numbers[9])
	return 1;
	else if(numbers[1]==numbers[5] && numbers[5]==numbers[9])
	return 1;
	else if(numbers[3]==numbers[5] && numbers[5]==numbers[7])
	return 1;
	else
	return 0;
}
int guess()
{
	int num;
    int guess;
    int attempts=0;
    srand(time(0)); 	// Random number with time;
    num=(rand()%10)+1;	//limit of num b/w 100
    //cout<<"generated num =  "<<num<<endl;
    cout<<"*************************************"<<endl;
do{
    cout<<"* Enter your guess b/w 1 to 100   : ";
    cin>>guess;
    while(guess<1||guess>100)
	{ 
    cout<<"Invalid Guess. Enter again ! "<<endl;
    cin>>guess;
	}
    if(guess==num)
	{			 //condition of winning.
    cout<<"You have guessed the correct num. You have Won ! "<<endl<<endl;
	return 0;
	}
	//condition for hints;
    else if(guess<num) 
	{ 
    cout<<"your Guess is not correct. \n NUM YOU ENTER is less than the GAME NUM "<<endl<<endl;
    attempts++;
    cout<<"\n ATTEMPTS left = "<<5-attempts<<"\n ";
	}
    else if  (guess>num)
	{
    cout<<"your Guess is not correct. \n NUM YOU ENTER is greater than the GAME NUM "<<endl<<endl;
    attempts++;
    cout<<"\n ATTEMPTS left = "<<5-attempts<<"\n ";
	}
}
   while((guess!=num)&&(attempts!=5)); //loop will stop when guess = or attemp complete.
	cout<<"you lost the game ! "<<endl<<endl;
	cout<<"NUM GENERATED WAS : "<<num <<endl;}

