
#ifndef C_FILM_H
#define C_FILM_H

#include "listFilm.h"
#include "nodeTrie.h"
#include <string.h>
#include <time.h>
#include <stdlib.h>




struct CellFilm** timeArray(char* fileName);

void findByDirector(char* director, struct NodeTrie* trie, char* destination);
void findByGenre(char* genre, struct NodeTrie* genres, char* destination);
void findByDuration(int duration, struct ListFilm** timeArray, char* destination);
void randomFilm(struct ListFilm** timeArray, char* destination);
void allDirectors(struct NodeTrie* trie, char* destination);
void allFilms(struct NodeTrie* trie, char* destination);
void printTopDirector(struct NodeTrie* trie, char* destination);
void clearInput();
void createAccount(char* hashUser, char* hashPass);

#endif //C_FILM_H
