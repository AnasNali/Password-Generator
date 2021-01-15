#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

static const string alphanum ="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!?_";  // letras que se van a generar

// Generar un numero aleatorio un determinada extension
string genRandomWord(int length){
  string s; // string vacio
  
  for(int i = 0; i < length; i++)
  {
    s += alphanum[rand()%alphanum.length()]; // la da al string un valor aleatorio
  }
  
  return s; //devuelve el string
}

int main(){
  
  // introduces la cantidad de claves
  int ListaTotal;
  cout << " Cuantas claves quieres generar?" << endl;
  cin >> ListaTotal;
  
  // obtienes el largo de las claves
  int length = 0;
  cout << "Escoge el largo de la clave?" << endl;
  cin >> length;
  
  srand(time(0));
  
  // Generar n cantidad de letras
  for(int i = 0; i < ListaTotal; i++)
  {
    cout << genRandomWord(length) << endl; // aparecen las claves
  }
  
  cout << "El proceso ha terminado" << endl;
  cout << endl;

  system("PAUSE");
  return 0;
}