#include <iostream>
using namespace std;
main(){
/*	
	int i =0;
	int contar=0;
	for (i=4;i<=8;i+=2){// 4 hasta 7 ; 4 hasta 8
		cout<<i<<endl;
		contar++;
	}
	cout<<"i fuera: "<<i<<endl;
	cout<<"ciclos: "<<contar<<endl;
	system("pause");
*/
/*
	for (int i=0;i<10; i++){
		if(i==5){
		cout<<"if"<<endl;
		continue;
		}
		cout<<i<<endl;
	}
	cout<<"fuera del for"<<endl;
*/
/*
	for (float i=0;i<10; i+=0.1){
		cout<<i<<endl;	
	}
	cout<<"fuera del for"<<endl;
*/
/*
	//int 4 bytes
	int datos[] = {10,40,100,250};
	
	for (int i : datos){
		cout<<i<<endl;
	}
	for (int i=0;i<tam; i++)
	cout<<datos[i]<<endl;
*/
	int inicio = 0, fin = 0, res = 0;
	cout<<"ingrese tabla inicial:";
	cin>>inicio;
	cout<<"ingrese tabls final:";
	cin>>fin;
	
	for (int rango=inicio;rango<=fin;rango++){
	cout<<"tabla del "<<rango<<endl;
		for (int i=1;i<=10;i++){
		res = rango * i;
		cout<<rango<<" x "<< i <<" = "<<res<<endl;
		}
	}	

}

