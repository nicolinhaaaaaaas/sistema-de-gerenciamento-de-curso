#ifndef ALUNOS_H
#define ALUNOS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 Lista* lista_cria();

 Alunos* realizar_matricula(void);

 Lista* inserir_matricula(Lista* Lista_matricula, Alunos* nome);

 Lista* Lst_listar(Lista* lista_matricula);
 
 Lista* exibe_matricula(Alunos* Lista_matricula);

#endif