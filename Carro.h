/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Carro.h
 * Author: Renan
 *
 * Created on 5 de Junho de 2023, 11:26
 */

#ifndef CARRO_H
#define CARRO_H

using namespace std;

class Carro {
public:
    Carro();
    Carro(const Carro& orig);
    virtual ~Carro();
    void inserir(int nCarros);
    void consultar(int idC);
    void consultarTodos(int nCarros);
    void deletar();
    void editar(int idC, int nCarros);
    


private:

};

#endif /* CARRO_H */

