//TESTING TESTING UNIX

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCARDS 52
#define NPROPS 2
#define NSUITS 4
#define NFACES 13

// card text values using array of pointers to preinitialized constant text strings
char* suit[]={"hearts","spades","clubs","diamonds"};

char* face[]={"blank","ace","two","three","four","five","six","seven","eight","nine",
"ten","jack","queen","king"};

// function prototypes used for manipulating cards
void PrintCard(int deck[NCARDS][NPROPS], int i);
void InitDeck(int deck[NCARDS][NPROPS]);
void SwapCards(int deck[NCARDS][NPROPS], int src, int dest);
void ShuffleDeck(int deck[NCARDS][NPROPS]);
int GetPlayValue(int deck[NCARDS][NPROPS], int i);

int main()
{

//deck of cards
// face, suite, card value
int deck[NCARDS][NPROPS];
time_t rawtime=time(NULL);
int i;

srand(time(NULL));
// init the deck
// loop on the cards
InitDeck(deck);
for (i=0; i<NCARDS; i++)
{
PrintCard(deck,i);
}

ShuffleDeck(deck);

// print the deck
puts("The shuffled deck is:");
for (i=0; i<NCARDS; i++)
{
PrintCard(deck,i);
}
printf("Printed on %s", ctime(&rawtime));
system("PAUSE");

return 0;
}
