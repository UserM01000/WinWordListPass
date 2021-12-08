#ifdef _WIN32
  #include <bits/stdc++.h>
  #include <time.h>
  const char limpiar[] = "cls";
  const char color[] = "color a";
  const char listar[] = "";
#else
  #include <stdlib.h>
  #include <iostream>
  #include <fstream>
  #include <cstdlib>
  #include <string>
  #include <cstdio>
  #include <time.h>
  const char limpiar[] = "clear";
  const char color[] = "echo -ne \"\e[1;31m\"";
  const char listar[] = "ls";
#endif

void banner();
void exit();

using namespace std;

string caracter = "!@#$%?&*+";
string numeros = "123456789";

int main()
{
    int num, num2;
    char op, op2;
    string nombre1, dicci;
    ofstream archivo;

    system(limpiar);
    system(color);
    banner();
    cout<<"Pongale un nombre a su diccionario\nMas el .txt: ";
    getline(cin,dicci);

    archivo.open(dicci.c_str(),ios::out);

    if(archivo.fail()){
        system(limpiar);
        cout<<"Diccionario no creado :C\n \n[Developer] ---> https://t.me/HackForAll1\n\n";
        exit();
        return 0;
    }
    else{
    cout<<"\nDigite Primer nombre: ";
    getline(cin,nombre1);

    cout<<"\nDesea numeros aleatorios [y] [n]: ";
    cin>> op;
  if( op == 'y' || op == 'Y'){
     cout<<"\nDeseas simbolos aleatorios [y] [n]: ";
     cin>> op2;
  if( op2 == 'y' || op2 == 'Y'){
     cout<<"\nDigite la cantidad de numeros aleatorios: ";
     cin>>num;
     for(int x=9;x>0;x--){
       for(int D=0;D<num+1;D++){
           cout<< nombre1 << D <<" ";
           cout<< endl;
           cout<< nombre1 << caracter[x] <<" ";
           cout<< endl;
           cout<< nombre1 << caracter[x] << D <<" ";
           cout<< endl;
           cout<< nombre1 << D << caracter[x] <<" ";
           cout<< endl;
           archivo << nombre1 << D <<" ";
           archivo << endl;
           archivo << nombre1 << caracter[x] <<" ";
           archivo << endl;
           archivo << nombre1 << caracter[x] << D <<" ";
           archivo << endl;
           archivo << nombre1 << D << caracter[x] <<" ";
           archivo << endl;
       }
     }
      archivo.close();
      system(limpiar);
      cout<<"Diccionari created succesful!"<<endl;
      system(listar);
      exit();
   }
  else{
     system(limpiar);
     cout<<"Ingrese la cantidad de repeticiones del nombre\n";
     cout<<"con numeros aleatorios: ";
     cin>>num;
     cout<<"Ingrese del 1 al 9999.. para los numeros aleatorios y\n";
     cout<<"su longitud: ";
     cin>>num2;
     srand(time(0));
     for(int D=0;D<num+1;D++){
        cout<< nombre1 << 1+(rand()%num2) <<" ";
        cout<< endl;
        archivo << nombre1 << 1+(rand()%num2) <<" ";
        archivo << endl;
     }
      archivo.close();
      system(limpiar);
      cout<<"Diccionari created succesful!"<<endl;
      system(listar);
      exit();
    }
   }
   else{
     for(int x=9;x>0;x--){
         cout<< nombre1 << caracter[x] <<" ";
         cout<< endl;
         archivo << nombre1 << caracter[x] <<" ";
         archivo << endl;
     }
     archivo.close();
     system(limpiar);
     cout<<"Diccionari created succesful!"<<endl;
     system(listar);
     exit();
   }
}

}

void banner(){
    cout<<"-------------------------"<<endl;
    cout<<" WELCOME TO WORDLISTPASS  -----> [https://t.me/HackForAll1]"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"\n";
}

void exit(){
    cout<<"-------------------------"<<endl;
    cout<<"        GOODBYE :D       "<<endl;
    cout<<"-------------------------"<<endl;
}
