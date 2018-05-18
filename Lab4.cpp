#include <iostream>

using namespace std;

int*** creatematrix(int n){
   int*** matriz = new int**[n];
   for(int i=0;i<n;i++){
        matriz[i]= new int*[3];
   }
   for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
             matriz[i][j] = new int [n];
        }
   }
   return matriz;
}

void llenarmatrix(int*** Matrixa, int n){
    for(int i=0;i<n;i++){
         for(int j =0;j<n;j++){
	      for(int k=0;k<n;k++){
	           Matrixa[i][j][k] = Matrixa[i][j][k] + Matrixa[i][j][k];
	      }
         }
    }

}

void imprimirmatriz(int*** Matrixa,int n){
    for(int i = 0; i <n+1;i++){
        for(int j=0;j<3;i++){
	    for(int k=0;k<n+1;i++){
	        cout<<Matrixa[i][j][k]<<endl;
	    }
	}
    }
} 


int menu(){	
    
    int n=0;
    int*** Matrixa = creatematrix(n);
    int x;
    int a;
	
    int opcion = 0;
    do{
        cout<<"     MENU"<<endl
            <<"Opcion  1"<<endl
            <<"Opcion  2"<<endl
            <<"Opcion  3"<<endl
	    <<"Salir   4"<<endl
            <<"Ingrese una opcion: ";
            cin >> opcion;

            if(opcion < 1 || opcion > 4){
                cout <<"Opcion fuera de rango, intente de nuevo"<<endl;
                opcion = 0;
            }
            if(opcion == 1){


            }

            if(opcion == 2){
              cout<<"Ingrese el grado mas alto del polinomio: "<<endl; cin>>n;
	      for(int i=0;i<n;i++){
	           cout<<"Ingrese el polnomio X^"<<i<<": ";cin>>x;
	      }
	      
	      imprimirmatriz(Matrixa, n);           


            }

            if(opcion == 3){

            }

	    if(opcion == 4){
               cout<<"Buen dia."<<endl;
	    }
       } while (opcion == 0);
         return opcion;
}



int main(){
   menu();
   
}




