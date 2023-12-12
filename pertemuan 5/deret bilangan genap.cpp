#include <iostream>
using namespace std;
int main (){

	int a = 0, b = 0, c = 0;
	
	cout <<" deret bilangan genap\n ";
	for(a = 2; a <= 20; a++){
		if ( a % 2 == 0){
			cout<< a;
			b = b + a;
		}
		else{
			if ( a == 20){
			cout<< "";
			}
			else {
				cout<< " + ";
			}
		
		}
	}
	cout << " = " << b;
}
