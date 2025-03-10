//TESTING TESTING UNIX & WINDOWS

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
void ShuffleDeck(int deck[NCARDS][NPROPS]);
void SwapCards(int deck[NCARDS][NPROPS], int src, int dest);

int main()
{

//deck of cards
// face, suite
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
printf("Printed on %s and Made by Lorenzo Guzman", ctime(&rawtime));

return 0;
}

void PrintCard(int deck[NCARDS][NPROPS], int i){
    int cardFace = deck[i][0];
    int cardSuit = deck[i][1];
    printf("%s of %s \n", face[cardFace], suit[cardSuit]);
}

void InitDeck(int deck[NCARDS][NPROPS]){
    for (int i=0; i<NCARDS; i++){
    //Face
    deck[i][0] = (i % NFACES) + 1;
    //Suit
    deck[i][1] = i % NSUITS;
    }
}
void SwapCards(int deck[NCARDS][NPROPS], int src, int dest){
    int tmp;
    int i;
    for (i=0; i<2; i++){
        tmp = deck[dest][i];
        deck[dest][i] = deck[src][i];
        deck[src][i] = tmp;
    }
}
void ShuffleDeck(int deck[NCARDS][NPROPS]){
    for(int i=0; i<NCARDS-1; i++){

    }
}
