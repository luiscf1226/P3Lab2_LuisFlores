#include <iostream>
#include <cstdlib>
#include <math.h> 
#include <cmath>
#include <stdlib.h>
#include <time.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void recursion(int ,int ,int [],int []);
void print(int [],int );
void print3(int[],int[]);
void print4(int);
void print5(int);
void desviacion(int[],int);

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
				int arr1[100];
				int arr2[100];
					for(int i=0;i<100;i++){
						arr1[i]=0;
						arr2[i]=0;	
					}
				recursion(0,max+2,arr1,arr2);
				//agrego 2 vueltas mas para que me imprima lo debido	
				break;
			}
			case 2:{
				int arr[20];
				srand(time(NULL));
				for(int i=0;i<20;i++){
					arr[i]=0+(rand()%100);
				}
				for(int i=0;i<20;i++){
					cout<<"    "<<arr[i]<<endl;
				}
				desviacion(arr,20);
				break;
			}
			case 3:{
				int arr1[10];
				int arr2[10];
				srand (time(NULL));
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
void recursion(int n , int max, int arr[100],int arr2[100]){
	
	if(n==max){
		cout<<"FINNNN "<<endl;
		
	}else{
		for(int i=0;i<n;i++){
			if(i==0||i==n-1){
				arr2[i]=1;
			}
			else{
				arr2[i]=arr[i-1]+arr[i];
				
			}
		}
		for(int i=0;i<n;i++){
			arr[i]=arr2[i];
			cout<<arr2[i]<< " ";
			arr2[i]=0;
		}
		cout<<endl;
		recursion(n+1,max,arr,arr2);
		
		
	}
	
}
void print3(int a[],int a2[]){

	for(int i=1;i<=10;i++){
		cout<<" "<<i<<"   ";
		print4(a[i]);
		cout<<endl<<"     ";
		
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
	while(cont<n){
		cout<<un;
		cont++;
	}	
	
}
void print5(int n){
	int cont=0;
	char un=178;
	while(cont<n){
		cout<<un;
		cont++;
	}	
	
}
void desviacion(int a[],int size){
	double suma=0.00;
	double prom=0.00;
	for(int i=0;i<20;i++){
		suma=suma+a[i];
	}

	prom=suma/20.00;

	double num=0.00;

	for (int j=0;j<20;j++){
		num+=pow(a[j]-prom,2);
		
	}

	double resp=num/20.00;

	
	cout<<"la respuesta es: "<<sqrt(resp)<<endl;
	
}

