#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int tno;
void outmenu();
void settable();
class table
{
	int qt[25], total, ni, ptr, prices[15], pricepo[25], hold[25], bil;
	char orders[25], opts[15];
	void prosdata();
	void outitem(int);
	void check();
	public:
	ofstream file;
	table();
	void order();
	void showorders();
	void edit();
	void bill();
}t[30];
table :: table()
{
	total = 0;
	ptr = 0;
	bil = 0;
	opts[0] = 'a';opts[1] = 'b';opts[2] = 'c';opts[3] = 'd';opts[4] = 'e';opts[5] = 'f';opts[6] = 'g';
	prices[0] = 30;prices[1] = 35;prices[2] = 50;prices[3] = 60;prices[4] = 80;prices[5] = 30;prices[6] = 60;
}
void table :: order()
{
	char op;
	
	do
	{	
		system("cls");
		outmenu();
		cout << "\nEnter the letter next to your item to order--> ";
		cin >> orders[ptr];
		cout << "How many?--> ";
		cin >> qt[ptr];
		check();
		cout << "Anything else (Y/N)?-->";
		cin >> op;
	}while(op == 'y' || op =='Y');
	ni = ptr;	
}
void table :: prosdata()
{
	total = 0;
	for(int i = 0; i < ni; i++)
	{
		for(int j = 0; j < 7; j++)
		{
			if(orders[i] == opts[j])
			{
				hold[i] = j;
				pricepo[i] = (qt[i] * prices[j]);
				total += pricepo[i];
				break;
			}
		}		
	}
}
void table :: showorders()
{
	prosdata();
	if(bil == 0)
	{
		cout << "Sr.No.\t\tQt.\t\tItem\t\tprice" << endl;
		cout << "______________________________________________________________________________" << endl;
		for(int i = 0; i < ni; i++)
		{
			cout << i + 1 << "\t\t" << qt[i] << "\t\t"; outitem(i);cout << "\t\t" << pricepo[i] << endl;
		}
		cout << "______________________________________________________________________________" << endl;
		cout << "TOTAL : \t\t\t\t\t\t\t" << total << endl;
	}
	else
	{
		file << "Sr.No.\t\t\tQt.\t\t\tItem\t\t\tprice\n";
		file << "_________________________________________________________________________________\n";
		for(int i = 0; i < ni; i++)
		{
			file << i + 1; file << "\t\t\t"; file << qt[i]; file << "\t\t\t"; outitem(i);file << "\t\t\t"; file << pricepo[i]; file << "\n";
		}
		file << "_________________________________________________________________________________\n";
		file << "TOTAL : \t\t\t\t\t\t\t\t"; file << total; file << "\n";
		cout << "Thank You For Choosing Our Restuarant!" << endl;
	}
}
void table :: outitem(int n)
{
	if(bil == 0)
	{
		if(hold[n] == 0)
			cout << "Coke";
		else if(hold[n] == 1)
			cout << "Mountain Dew";
		else if(hold[n] == 2)
			cout << "French Fries";
		else if(hold[n] == 3)
			cout << "Noodles";
		else if(hold[n] == 4)
			cout << "Prawns";
		else if(hold[n] == 5)
			cout << "Ice Cream";
		else if(hold[n] == 6)
			cout << "Bolinas";
	}
	else
	{
		if(hold[n] == 0)
			file << "Coke";
		else if(hold[n] == 1)
			file << "Mountain Dew";
		else if(hold[n] == 2)
			file << "French Fries";
		else if(hold[n] == 3)
			file << "Noodles";
		else if(hold[n] == 4)
			file << "Prawns";
		else if(hold[n] == 5)
			file << "Ice Cream";
		else if(hold[n] == 6)
			file << "Bolinas";
	}
}
void table :: edit()
{
	int n, a, b;
	char q;
	cout << "1 : Edit Quantity of Orders\n2 : Cancel an Order\n0 : Back\n-->";
	cin >> n;
	switch(n)
	{
		//system("cls");
		case 1:
		do{
			system("cls");
			showorders();
			cout << "Which Order's quantity would you want to change?(Sr.No)\n-->";
			cin >> a;
			cout << "How many would you like?\n-->";
			cin >> b;
			qt[a - 1] = b;
			cout << "Changes Done! Any More?(Y/N)\n-->";
			cin >> q;
		}while(q == 'y' || q == 'Y');
		break;
		case 2:
		do{
			system("cls");
			showorders();
			cout << "Which Order would you want to cancel?(Sr.No)\n-->";
			cin >> a;
			for(int i = a - 1; i < ni; i++)
			{
				orders[i] = orders[i + 1];
				pricepo[i] = pricepo[i + 1];
				qt[i] = qt[i + 1];
			}
			ni--; ptr--;			
			cout << "Changes Done! Any More(Y/N)\n-->";
			cin >> q;
		}while(q == 'y' || q == 'Y');
		break;
	}
}
void table :: check()
{
	int chck = 0;
	for(int i = 0; i < ptr; i++)
	{
		if(orders[i] == orders[ptr])
		{
			qt[i] += qt[ptr];
			qt[ptr] = qt[ptr + 1];
			orders[ptr] = orders[ptr + 1];
			chck = 1;
			break;
		}
	}
	if(chck == 0)
		ptr++;
}
void table :: bill()
{
	system("cls");
	showorders();
	bil = 1;
	showorders();	
}
void outmenu()
{
	char arro[100];
	ifstream fileo ("menu.txt");
	while(!fileo.eof())
	{
		fileo.getline(arro,100);
		cout << arro << endl;
	}
	fileo.close();
}
void settable()
{
	char name[20] = "Table";
	char temp[10] = {0};
	int x = tno;
	itoa(tno, temp, 10);
	strcat(name, temp);
	strcat(name, ".txt");
	t[tno].file.open(name);
	int n;
	do
	{
		system("cls");	
		cout << "1 : Place Order\n2 : Check Orders\n3 : Edit Orders\n4 : Bill\n0 : Back\n-->";
		cin >> n;
		system("cls");
		switch(n)
		{
			case 1:
			t[tno].order();
			break;				
			case 2:
			t[tno].showorders();
			cout << "Press any key to continue-->";
			getch();
			break;			
			case 3:
			t[tno].edit();
			break;				
			case 4:
			t[tno].bill();
			cout << "Press any key to continue-->";
			getch();
		}	
	}while(n != 0);
}	
int main()
{
	int n;
	do
	{
		system("cls");
		cout << "1 : Enter Table\n0 : Exit\n-->";
		cin >> n;
		switch(n)
		{
			case 1:
			cout << "Enter Table No :\n-->";
			cin >> tno;
			settable();
			break;			
			case 2:
			break;
		}
	}while(n != 0);
	return 0;
}