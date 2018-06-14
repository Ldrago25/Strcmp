#include <iostream>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char n[10]= "Uniendo";
	char n2[10];
	char r;
	
	do{
	
	
	cout<<endl<<"-> "<<endl;
	cin.sync();
	cin.getline(n2,10);
	
	if(strcmpi(n,n2)==0)
	{
		cout<<endl<<"Iguales"<<endl;
	}
	
	cout<<endl<<"Otra vez? S/N "<<endl;
	cin.sync();
	r=toupper(getch());
	
	system("CLS");
	
}while(r!='N');
	
	return 0;
}
