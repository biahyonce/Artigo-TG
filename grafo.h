#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

/// Funções básicas do grafo
typedef struct grafo Grafo;
Grafo* cria_grafo (int qtd_vertices);                           // Função que cria o grafo
int insere_aresta (Grafo* g, int r1, int r2);                   // Função que insere uma aresta no grafo
int remove_aresta (Grafo* g, int v1, int v2);                   // Função que remove uma aresta do grafo
int verifica_adjacencia (Grafo* g, int v1, int v2);             // Função que verifica se dois vértices são adjacentes
void exibe_grafo (Grafo* g);                                    // Função que exibe o grafo
void libera_grafo (Grafo** g);                                  // Função que libera o grafo

/// Vértice
typedef struct vertice vertice;
int formata_rotulo (Grafo* g, int vertice);                         // Função que retorna o rótulo de um vértice
int indice_rotulo (Grafo* g, int rotulo);                           // Retorna o índice de um vértice à partir do seu rótulo
int insere_rotulo (Grafo* g, int x, int y, int tamanho);            // Função que verifica se os rótulos x e y já estão presentes no grafo e os insere
void preenche_vertice (Grafo* g, int i, int r);                     // Função que insere o vértice no grafo

/// Aresta
typedef struct aresta aresta;

/// Funções específicas do trabalho
int numero_vertices (Grafo* g);                                 // Função que retorna a quantidade de vertices de um grafo
int numero_arestas (Grafo* g);                                  // Função que retorna a quantidade de arestas do grafo
int conta_adjacentes (Grafo* g, int v1);                        // Função que conta os vértices adjacentes a um vértice específico
int maximo_adjacente (Grafo* g);                                // Função que retorna qual a quantidade máxima de adjacentes do grafo
int grau_medio (Grafo* g);                                      // Função que retorna o grau médio do grafo


#endif // GRAFO_H_INCLUDED
