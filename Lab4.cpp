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

void llenarmatrix(int*** Matriz, int n){
    int globito;
    for(int i=0;i<n;i++){
         for(int j =0;j<3;j++){
	      for(int k=0;k<n;k++){
	           
	      }
         }
    }

}

void imprimirmatriz(int*** Matriz,int n){
    for(int i=0; i <n;i++){
        for(int j=0;j<3;j++){
	    for(int k=0;k<n;k++){
	         cout<<Matriz[i][j][k]<<endl;
	    }cout<<n;
	}cout<<n;
    }cout<<n;
} 


void Eldos(){
   int n;
   int x;
   int a;
	cout<<n<<endl;
   cout<<"Ingrese el grado mas alto del polinomio: "<<endl; 
   cin>>n;
   int*** Matriz = creatematrix(n);
   for(int i=0;i<n+1;i++){
       cout<<"Ingrese el polinomio X^"<<i<<": ";
       cin>>x;
       Matriz[0][0][i]=x;
       x=0;
      
   }imprimirmatriz(Matriz, n);
}

int menu(){	
    
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
           
              Eldos();
//	      imprimirmatriz(Matriz, n);

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




