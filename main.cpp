/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Renan
 *
 * Created on 5 de Junho de 2023, 10:01
 */

#include <cstdlib>

#include <iostream>

#include "Cliente.h"
#include "Carro.h"




using namespace std;



/*
 * 
 */
int main(int argc, char** argv) {

    
    int nPessoas, nCarros, opc, id;
    Cliente obj;
    Carro obj2;
    
    cout << "Insira quantos carros vai registrar: ";
    cin >> nCarros;
    
    obj2.inserir(nCarros);
    
    cout << "Insira quantos clientes vai registrar: ";
    cin >> nPessoas;
    
    obj.inserir(nPessoas);
    
    cout << "Menu CLIENTE:"<<"\n";
    cout << "1 - Consultar por ID\n";
    cout << "2 - Consultar Todos\n";
    cout << "3 - Editar por ID\n";
    cout << "0 - Sair";
    cout << "\n\n";
    
    cin >> opc;
    
    while(opc!=0){
        switch(opc){
            case 1:
                cout << "Digite o ID para ser buscado: ";
                cin >> id;
                obj.consultar(id);
                cout << "Digite outra opção, ou 0 para sair: ";
                cin >> opc;
                break;
            case 2:
                obj.consultarTodos(nPessoas);
                cout << "Digite outra opção, ou 0 para sair: ";
                cin >> opc;
                break;
            case 3:
                cout << "Digite o ID para editra: ";
                cin >> id;
                obj.editar(id, nPessoas);
                cout << "Digite outra opção, ou 0 para sair: ";
                cin >> opc;
                break;
        }
    }
    
    
    cout << "Menu CARRO:"<<"\n";
    cout << "1 - Consultar por ID\n";
    cout << "2 - Consultar Todos\n";
    cout << "3 - Editar por ID\n";
    cout << "0 - Sair";
    cout << "\n\n";
    
    cin >> opc;
        
    while(opc!=0){
        switch(opc){
            case 1:
                cout << "Digite o ID para ser buscado: ";
                cin >> id;
                obj2.consultar(id);
                cout << "Digite outra opção, ou 0 para sair: ";
                cin >> opc;
                break;
            case 2:
                obj2.consultarTodos(nPessoas);
                cout << "Digite outra opção, ou 0 para sair: ";
                cin >> opc;
                break;
            case 3:
                cout << "Digite o ID para editra: ";
                cin >> id;
                obj2.editar(id, nPessoas);
                cout << "Digite outra opção, ou 0 para sair: ";
                cin >> opc;
                break;
        }
    }
       
    return 0;
}



