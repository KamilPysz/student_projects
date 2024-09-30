#include <iostream>
#include <vector>

using namespace std;

//void sortowanie(int tab[],int size)
//{
//	for (int i=0;i<size;i++){
//		for(int j=1;j<size-i;j++){
//			if(tab[j-1]>tab[j])
//			swap(tab[j-1], tab[j]);
//				}
//		}
// for(int y=0;y<4;y++){
//	cout<<tab[y];
//	}
//}

int main(){
	int tab1[4]={3,2,5,4};

	vector<int> liczby;
		liczby.push_back(3);
		liczby.push_back(2);
		liczby.push_back(5);
		liczby.push_back(4);

//	cout<<"Elementy Wektora";
//	for(int i=0; i<liczby.size();++i){
//		cout<<liczby[i]<<" ";
//	}


	for(int i=0; i<liczby.size()-1;i++){
		for(int j=0;j<liczby.size()-1;j++){
			if(liczby[j]>liczby[j+1])
			swap(liczby[j],liczby[j+1]);
				}
		}
	for(int y=0; y<liczby.size();y++){
		cout<<liczby[y];
	}






	return 0;
}
