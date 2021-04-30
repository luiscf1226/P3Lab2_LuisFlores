#include <iostream>
#include <cstdlib>
#include <math.h> 
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void recursion(int ,int ,int [],int []);
void print(int [],int );
void print3(int[],int[]);
void print4(int);
void print5(int);
void sumatoria(int[],int);

int menu(){

	
	while(true){
		cout<<"MENU"<<endl;
		cout<<"1. Ejercicio 1 "<<endl<<"2. Ejercicio 2 "<<endl<<"3. Ejercicio 3"<<endl<<"4. Salir"<<endl;
		int valor;
		cin>>valor;
		if(valor > 0&& valor < 5)
			return valor;
		
	}
	
}
int main(int argc, char** argv) {
	int main=0;
	while(main!=4){
		switch(main=menu()){
			case 1:{
				float max;
				cout<<"Ingrese un valor de max : "<<endl;
				cin>>max;
				while(max>0&&max<100){
					int arr1[100];
					int arr2[100];
					for(int i=0;i<=100;i++){
						arr1[i]=0;	
					}
					arr2[0]=1;
					recursion(0,max,arr1,arr2);
					
				}
				break;
			}
			case 2:{
				int arr[20];
				for(int i=0;i<=20;i++){
					arr[i]=0+(rand()%100);
				}
				for(int i=0;i<=20;i++){
					cout<<"    "<<arr[i]<<endl;
				}
				sumatoria(arr,20);
				break;
			}
			case 3:{
				int arr1[10];
				int arr2[10];
				for(int i=0;i<=10;i++){
					arr1[i]=0+(rand()%20);
					arr2[i]=0+(rand()%20);
				}
				print3(arr1,arr2);
				
				break;
			}
			case 4:{
				cout<<"el programa se acabara "<<endl;
				
				break;
			}
		}//sitwch
	}//while
	return 0;
}
void recursion(int n , int max, int arr[],int arr2[]){
	
	if(n==max){
		
	}else{
		arr2[n+1]=arr[n]+arr[n+1];
		for(int i=0;i<=max;i++){
			if(arr2[0]!=0){
				cout<<arr2[i];
			}
		}
		arr[n]=arr2[n];
		recursion(n++,max,arr,arr2);
		
	}
	
}
void print3(int a[],int a2[]){

	for(int i=1;i<=10;i++){
		cout<<" vuelta : "<<i<<"   ";
		print4(a[i]);
		cout<<endl<<"              ";
		
		//cout<<"         numero: "<<a[i]<<"     "<<endl;
		print5(a2[i]);
		cout<<endl;
		//cout<<"         numero: "<<a2[i];
		cout<<endl;
	}

}
void print4(int n){
	int cont=0;
	char un=177;
	while(cont<=n){
		cout<<un;
		cont++;
	}	
	
}
void print5(int n){
	int cont=0;
	char un=178;
	while(cont<=n){
		cout<<un;
		cont++;
	}	
	
}
void sumatoria(int a[],int size){
	double suma=0.00;
	double prom=0.00;
	for(int i=0;i<=20;i++){
		suma=suma+a[i];
	}
	cout<<suma<<endl;
	prom=suma/20.00;
	cout<<prom<<endl;
	int n=20;
	
	double cc=0.00;
	double f=0.00;
	for (int j=0;j<20;j++){
		int num=a[j];
		double acum=(num-prom);
		
	}
	cc=pow(acum,2);
	cout<<cc<<endl;
	double resp=cc/20.00;
	cout<<resp<<endl;
	
	cout<<"la respuesta es: "<<sqrt(resp)<<endl;
	
}

