#ifndef SCRABBLE_H
#define SCRABBLE_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

void mostrarPuntajes(const vector<string>& nombres, const vector<int>& puntajes);
void inicializarDiccionario(const string& archivo);
void iniciarDiccionarioInverso(const string& archivo, const string& salida, queue<string>& mensajes);
void toLowerCase(string& str);
bool esPalabraValida(const string& palabra, const string& diccionario);
bool contieneSimbolosInvalidos(const string& palabra);
int calcularPuntaje(const string& palabra);
void obtenerPuntaje(const string& palabra, const string& diccionario, const string& diccionarioInverso, bool simulacion);

int leerVariablePersistente();
void escribirVariablePersistente(int valor);

void mostrarAyuda();

#endif // SCRABBLE_H
