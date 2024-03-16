#include "scrabble.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
        if (argc != 2) {
        cerr << "Uso incorrecto. Ejecute './main ayuda' para ver los comandos." << endl;
        return 1;
    }

    string comando(argv[1]);

    if (comando == "ayuda") {
        mostrarAyuda();
        return 0;
    }

    string diccionario = "diccionario.txt";
    string diccionarioInverso = "diccionario_inverso.txt";

  int r = leerVariablePersistente();
  
    if (comando == "1") {
        inicializarDiccionario(diccionario);
        escribirVariablePersistente(1);
    } else if (comando == "2") {
      if(r==1){
        queue<string> mensajes;
        iniciarDiccionarioInverso(diccionario, diccionarioInverso, mensajes);
      }
      else{
        cout << "Debe inicializar el diccionario primero" << endl;
      }
    } else if (comando == "3") {
      if(r==1){
        string palabra;
        cout << "=== Calcular Puntaje de Palabra ===" << endl;
        cout << "Ingrese la palabra: ";
        cin >> palabra;
        obtenerPuntaje(palabra, diccionario, diccionarioInverso, false);  // No es una simulación
      }else{
        cout << "Debe inicializar el diccionario primero" << endl;
      }
      
    } else if (comando == "4") {
      if(r==1){
        escribirVariablePersistente(0);
        cout << "Saliendo del programa." << endl;
        return 0;
      }
      else{
        cout << "Debe inicializar el diccionario primero" << endl;
      }
    }
    
    else {
         cerr << "Comando no válido. Ejecute './main ayuda' para ver los comandos." << endl;
         return 0;
        }

    return 0;
}

