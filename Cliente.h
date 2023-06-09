/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Cliente.h
 * Author: Renan
 *
 * Created on 5 de Junho de 2023, 10:01
 */

#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>

using namespace std;

class Cliente {
public:
    Cliente();
    Cliente(const Cliente& orig);
    virtual ~Cliente();
    
    
    
    void inserir(int nPessoas);
    void consultar(int idP);
    void consultarTodos(int nPessoas);
    void deletar();
    void editar(int idP, int nPessoas);
    void menu();
private:

};

#endif /* CLIENTE_H */

