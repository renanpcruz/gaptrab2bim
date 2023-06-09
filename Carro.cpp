/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Carro.cpp
 * Author: Renan
 * 
 * Created on 5 de Junho de 2023, 11:26
 */

#include "Carro.h"
#include <iostream>

using namespace std;

Carro::Carro() {
}

Carro::Carro(const Carro& orig) {
}

Carro::~Carro() {
}



struct Veiculo{
    int id;
    string placa, modelo;
};

Veiculo carro[999];

void Carro::inserir(int nCarros){
    for(int i=0; i<nCarros; i++){
        cout << "ID: " << i << "\n";
        carro[i].id = i;
        cout << "Placa: ";
        cin >> carro[i].placa;
        cout << "Modelo: ";
        cin >> carro[i].modelo;
    }
}

void Carro::consultar(int idC){
    cout << "ID: " << carro[idC].id << "\n";
    cout << "Placa: " << carro[idC].placa << "\n";
    cout << "Modelo: " << carro[idC].modelo << "\n";
    
}

void Carro::consultarTodos(int nCarros){
    for(int i=0; i<nCarros; i++){
        cout << "ID: " << carro[i].id << "\n";
        cout << "Placa: " << carro[i].placa << "\n";
        cout << "Modelo: " << carro[i].modelo << "\n\n";
    }
}

void Carro::editar(int idC, int nCarros){
    for(int i=0; i<nCarros; i++){
        if(idC==carro[idC].id){
            cout << "Editando carro ID: " << carro[idC].id;
            cout << "Placa: ";
            cin >> carro[idC].placa;
            cout << "Modelo: ";
            cin >> carro[idC].modelo;
            cout << "\n\n";
        }
    }
}