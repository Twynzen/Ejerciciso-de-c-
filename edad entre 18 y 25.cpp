#include<iostream>

using namespace std;

int main(){
	
	int num1,num2,num3,num4;
	
	cout<<"Digite el primer numero:  ";
	cin>>num1;
	
	cout<<"Digite el segundo numero:  ";
	cin>>num2;
	
	cout<<"Digite el tercer numero:  ";
	cin>>num3;
	
	cout<<"Digite el cuarto numero para ver si coincide con alguno anterior:  ";
	cin>>num4;
	 
	 if((num4==num2),(num4==num1),(num3==num4)){
	 	cout<<"El cuarto numero coincide con un numero anterior ";
	
	 }else{
	 	cout<<"El numero no es ninguno de los anteriores";
	 }
	 
	

	
	
	
	return 0;
}
