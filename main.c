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

void PrintCard(int deck[NCARDS][NPROPS], int i){
    int cardFace = deck[i][0];
    int cardSuit = deck[i][1];
    printf("Card is %s of %s", cardFace, cardSuit);
}

void InitDeck(int deck[NCARDS][NPROPS]){
    for (int i=0; i<=NCARDS-1; i++){
    //Face value
    deck[i][0] = (i / 4) + 1;
    //Suit
    deck[i][1] = i % 4;
    }
}

