#include <iostream>

using namespace std;

int main(){

	char tab[2][2]={{'~','~'},{'~','~'}};
	int row,col;
	int strow,stcol;
	cout<<"podaj pola w których ma być statek";
	cin>>strow;
	cin>>stcol;
	tab[strow][stcol] = 'S';
	cout<<"podaj pole w które chcesz strzelic";
	do{
		cout<<"Podaj wiersz (1-2)";
		cin>>row;
		cout<<"Podaj kolumne (1-2)";
		cin>>col;
		if(tab[row][col]=='S'){
			cout<<"Trafiony";
		}	else{
			cout<<"pudło";
		}
			}while(tab[row][col]!='S');

	return 0;
}
