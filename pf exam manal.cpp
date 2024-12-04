#include<iostream>
using namespace std;

int main(){
  int choice;
  double income,expense,balance;
do{
cout<<"welcome to expense tracker."<<endl;
cout<<"press 1 to check your income:"<<endl;
cout<<"press 2 to check your expense:"<<endl;
cout<<"press 3 to check your balance:"<<endl;
cout<<"press 4 to exit :"<<endl;
cin>>choice;	
	
switch(choice){
   case 1:
cout<<"enter your income:"<<endl;
cin>>income;
income+=balance;
  break;
case 2:
cout<<"enter your expenses:"<<endl;
cin>>expense;
expense-=balance;
break;
case 3:
cout<<"your current balance is:"<<":$"<<endl;
balance= income-expense;
break;
case 4:
cout<<"exit the program."<<endl;
break;
default:
cout<<"invalid choice."<<endl;	
break;
}
} while(choice!=4);

cout<<"your current balance is:"<<"$"<<balance<<endl;	


	return 0;
}