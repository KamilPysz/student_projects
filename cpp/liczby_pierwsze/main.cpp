#include <iostream>



using namespace std;

bool isPrime(int num){
    if(num<2){
	return false;
}
for (int i=2; i*i<=num; ++i){
if(num % i==0){
    return false;
    }
}
return true;
}

void wyswietl(int start, int end){
    cout<<"Liczby pierwsze w zakresie:";
    for (int i = start;i<= end; ++i){
	if(isPrime(i)){
	    cout<<i<<" ";
}
}
cout<<endl;
}





int main(){

    int start, end;
	cout<<"Podaj poczatek zakresu";
	cin>>start;

	cout<<"Podaj koniec zakresu";
	cin>>end;
	wyswietl(start,end);






return 0;
}
