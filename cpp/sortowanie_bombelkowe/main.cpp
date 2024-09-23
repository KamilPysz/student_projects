#include <iostream>

using namespace std;

void sortowanie(int tab[],int size)
{
	for (int i=0;i<size;i++){
		for(int j=1;j<size-i;j++){
			if(tab[j-1]>tab[j])
			swap(tab[j-1], tab[j]);
				}
		}
 for(int y=0;y<4;y++){
	cout<<tab[y];
	}
}

int main(){
	int tab1[4]={3,2,5,4};
	
	
	sortowanie(tab1,4);


	
	
	return 0;
}
