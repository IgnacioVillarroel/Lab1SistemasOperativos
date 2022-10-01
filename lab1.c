//Laboratorio 1 Sistemas Operativos
//Alumnos: Joakin Roa - Ignacio Villarroel

//Se añaden las librerías a utilizar
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <sys/wait.h>

//Descripción: 
int main(int argc, char *arg[]){
    //Variables a utilizar (POR EL MOMENTO)
    int opt, flag = 0, ppid = getpid(), pid;
    double wideDisks
}

/*SE DEBE REALIZAR 
1) LECTURA DE PARAMETROS DE ENTRADA (USAR GETOPT PROBABLEMENTE)
2) SE DEBEN VALIDAR LOS PARAMETROS DE ENTRAR
3) APLICAR PIPES POR HIJOS (CREO QUE ES BIDIRECCIONAL)
4) CREACION DE FORKS PARA LOS ARCHIVOS DE ENTRADA
5) ALMACENAR LOS VALORES REFERENTES A LOS SOLICITADO
6) NO OLVIDAR EL ESPACIO DE MEMORIA RESERVADA.