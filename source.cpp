#include <bits/stdc++.h>
#include <locale.h>
using namespace std;
 

int main()
{ 	setlocale(LC_ALL, "Turkish");
	int x;
	cin>>x;
	switch (x/100)
	{
	case 1:
		cout<<"yüz";
		break;
	case 2:
		cout<<"ikiyüz";
		break;
	case 3:
		cout<<"üçyüz";
		break;
	case 4:
		cout<<"dörtyüz";
		break;
	case 5:
		cout<<"beşyüz";
		break;
	case 6:
		cout<<"altıyüz";
		break;
	case 7:
		cout<<"yediyüz";
		break;
	case 8:
		cout<<"sekizyüz";
		break;	
	case 9:
		cout<<"dokuzyüz";
		break;
	default:
		break;}
	x-=x/100*100;
	switch (x/10)
	{
	case 1:
		cout<<"on";
		break;
	case 2:
		cout<<"yirmi";
		break;
	case 3:
		cout<<"otuz";
		break;
	case 4:
		cout<<"kırk";
		break;
	case 5:
		cout<<"elli";
		break;
	case 6:
		cout<<"otuz";
		break;
	case 7:
		cout<<"yetmiş";
		break;
	case 8:
		cout<<"seksen";
		break;	
	case 9:
		cout<<"doksan";
		break;
	default:
		break;}
	x-=x/10*10;
	switch (x)
	{
	case 1:
		cout<<"bir";
		break;
	case 2:
		cout<<"iki";
		break;
	case 3:
		cout<<"üç";
		break;
	case 4:
		cout<<"dört";
		break;
	case 5:
		cout<<"beş";
		break;
	case 6:
		cout<<"altı";
		break;
	case 7:
		cout<<"yedi";
		break;
	case 8:
		cout<<"sekiz";
		break;	
	case 9:
		cout<<"dokuz";
		break;
	default:
		break;}
	
		
	
return 0;
}
