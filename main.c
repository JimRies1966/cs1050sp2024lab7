/*****************************************************************************
 * main.c for Lab 7
 * CMP_SC 1050
 * SP 20204
 * February 23, 2024
 * by Jim Ries
 * 
 * DO NOT CHANGE THIS FILE
 * 
 *****************************************************************************/
#include <stdio.h>
#include "dnd.h"

// Symbolic Constants
#define PARTYSIZE 5

// Local Functions
void RunTests(void)
{
    int dndPartyArray[PARTYSIZE][ATTRIBUTECOUNT] =
    {
        {13,16,15,7,9,13},      // Ignar The Magnificent
        {11,7,13,12,7,10},      // Brother Anastacio
        {14,11,10,15,11,4},     // Thumrak Deeprock
        {14,16,15,11,12,13},    // Ilvisar Zinleth
        {7,6,14,16,9,10},       // Leoorin Springwater
    };

    int dndMostImportanAttributes[] =
    {
        0,  // Strength for Fighter
        2,  // Wisdom for Cleric
        4,  // Dexterity for Rogue
        5,  // Charisma for Sorcerer
        1,  // Intelligence for Wizard
    };

    int countClasses = sizeof(dndMostImportanAttributes)/sizeof(int);

    printf("Dnd Party List:\n");
    Print2DIntArrayWithAverages(dndPartyArray,PARTYSIZE);
    printf("\n");

    printf("Most important attributes:\n");
    Print1DIntArrayWithWords(dndMostImportanAttributes,countClasses);
    printf("\n");

#ifdef HONORS
    printf("Best class for each character:\n");
    PrintBestClassForChar(dndPartyArray,PARTYSIZE,dndMostImportanAttributes, countClasses);
    printf("\n");
#endif
}

int main(void)
{
    RunTests();
}
