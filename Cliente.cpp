/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Cliente.cpp
 * Author: Renan
 * 
 * Created on 5 de Junho de 2023, 10:01
 */

#include "Cliente.h"

#include <iostream>

using namespace std;

Cliente::Cliente() {
}

Cliente::Cliente(const Cliente& orig) {
}

Cliente::~Cliente() {
}

struct Pessoa{
        int id, idCarro;
        string nome, cpf;
};


Pessoa cliente[999];



void Cliente::inserir(int nPessoas){
    for(int i=0; i<nPessoas; i++){
        cout << "ID: " << i << "\n";
        cliente[i].id = i;
        cout << "Nome: ";
        cin >> cliente[i].nome;
        cout << "CPF: ";
        cin >> cliente[i].cpf;
        cout << "ID do carro de atribuição: ";
        cin >> cliente[i].idCarro;
    }
}

void Cliente::consultar(int idP){
    
    cout << "ID: " << cliente[idP].id << "\n";
    cout << "Nome: " << cliente[idP].nome << "\n";
    cout << "CPF: " << cliente[idP].cpf << "\n";
    cout << "ID Carro: " << cliente[idP].idCarro << "\n";
}

void Cliente::consultarTodos(int nPessoas){ 
    for(int i=0; i<nPessoas; i++){        
        cout << "ID: " << cliente[i].id << "\n";
        cout << "Nome: " << cliente[i].nome << "\n";
        cout << "CPF: " << cliente[i].cpf << "\n";
        cout << "ID Carro: " << cliente[i].idCarro << "\n";
        cout << "\n\n";
    }
}

void Cliente::editar(int idP, int nPessoas){
    for(int i=0; i<nPessoas; i++){
        if(idP==cliente[idP].id){
            cout << "Editando cliente ID: " << cliente[idP].id << "\n";
            cout << "Nome: ";
            cin >> cliente[idP].nome;
            cout << "CPF: ";
            cin >> cliente[idP].cpf;
            cout << "ID Carro: ";
            cin >> cliente[idP].idCarro;
            cout << "\n\n";
        }
    }
}