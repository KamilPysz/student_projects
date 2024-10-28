#include <iostream>

using namespace std;

int main(){

	char tab[3][3]={{'~','~','~'},{'~','~','~'},{'~','~','~'};
	int row,col;
	int strow,stcol;
	cout<<"podaj pola w których ma być statek";
	cin>>strow;
	cin>>stcol;
	tab[strow][stcol] = 'S';
	cout<<"podaj pole w które chcesz strzelic";
	
		cout<<"Podaj wiersz (1-2)";
		cin>>row;
		cout<<"Podaj kolumne (1-2)";
		cin>>col;
		if(tab[row][col]=='S'){
			cout<<"Trafiony";
		}	else{
			cout<<"pudło";
		}
		

	return 0;
}
