#ifndef _DND_H
#define _DND_H

// Symbolic Constants
#define ATTRIBUTECOUNT 6

// Prototypes for jimr-written functions
const char * ClassFromNumber(int classNumber);
const char * AttributeFromNumber(int attributeNumber);

// Prototypes for student-written functions
void Print2DIntArrayWithAverages(int array[][ATTRIBUTECOUNT], int rows);
void Print1DIntArrayWithWords(int array[], int count);

// Prototypes for HONORS student-written functions
void PrintBestClassForChar( int partyArray[][ATTRIBUTECOUNT], int rows, 
                            int attributeArray[], int count);
#endif