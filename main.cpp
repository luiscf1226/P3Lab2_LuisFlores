#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void recursion(int ,int ,int [],int []);
void print(int [],int );
void print3(int[],int[]);
void print4(int);
void print5(int);

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
	char un=177;
	char dos=178;
	int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
	c1=a[0];
	c2=a[1];
	c3=a[2];
	c4=a[3];
	c5=a[4];
	c6=a[5];
	c7=a[6];
	c8=a[7];
	c9=a[8];
	c10=a[9];
	cout<<c1<<"   "<<c2<<" "<<c3<<"   "<<c4<<" "<<"   "<<c5<<" "<<"   "<<c6<<" "<<"   "<<c7<<" "<<"   "<<c8<<" "<<"   "<<c9<<" "<<c10<<endl;
	
	print4(c1);
	
}
void print4(int n){
	int cont=0;
	char un=177;
	while(cont<=n){
		cout<<un;
		cont++;
	}	
	
}

