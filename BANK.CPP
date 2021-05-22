#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class bank{
	char name[100],address[100],type;
	int balance;
	public:
		void open_account();
		void deposit_money();
		void withdraw_money();
		void display_account();

};
void bank :: open_account()
{
  cout<<"Enter your Full Name : ";
  cin.ignore();
  cin.getline(name,100);
  cout<<"Enter your Address :";
  cin.ignore();
  cin.getline(address,100);
  cout<<"What type of account you want to open Saving (s) or Current (c) :";
  cin>>type;
  cout<<"Enter the amount to deposit";
  cin>>balance;
  cout<<"Your Account has been created Successfully!!\n";

}
void bank :: deposit_money()
{
  int deposit_money;
  cout<<"Enter the money to be deposited";
  cin>>deposit_money;
  balance += deposit_money;
  cout<<"Total Balance : "<< balance;

}
void bank :: withdraw_money()
{
  int amount;
  cout<<"\m Enter the amount to be withdraw : ";
  cin>>amount;
  balance -= amount;
  cout<<"\nTotal Balance left : "<<balance;


}
void bank :: display_account()
{
  cout<<"\nThe details of your Bank account are :-\n";
  cout<<"\nName :\t "<<name;
  cout<<"\nAddress :\t "<<address;
  cout<<"\nType of Account :\t"<<type;
  cout<<"\nTotal Amount :\t"<<balance;
}
int main()
{

 int ch,x,n;
 bank obj;
 clrscr();
 do{
 cout<<"\n";
 cout<<"\t\t\t*******************************\n";
 cout<<"\t\t\t\tBANK MANAGEMENT\n";
 cout<<"\t\t\t*******************************\n";
 cout<<"1.Open Account \n";
 cout<<"2.Deposit Money \n";
 cout<<"3.Withdraw Money \n";
 cout<<"4.Dispaly Details of Account \n";
 cout<<"5.Exit\n";
 cout<<"\n Enter your choice from the above options : ";
 cin>>ch;
 switch(ch)
 {
 case 1:obj.open_account();
	break;
 case 2:obj.deposit_money();
	break;
 case 3: obj.withdraw_money();
	break;
 case 4:obj.display_account();
	break;
 case 5:break;
 default:
 cout<<"\n Please enter a valid choice";
}
cout<<"\n Do you want to continue ? y/n";
x=getch();
if(x=='n' || x=='N')
cout<<"Exit";
}while(x=='y'|| x=='Y');
 getch();
 return 0;
}