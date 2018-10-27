#include <iostream>
using namespace std;
#include "functions.H"

// example of string copy operation
  void  _stringCopy(char *destination, const char *source) {
      int i=0;
      while(source[i]) { //assuming that while loops stop executing when the statement inside gives a 0, or a bool false, and continuing otherwise?
          destination[i] = source[i];
          i++;
      }
      destination[i] = '\0';
  }

//more elegant implementation of string copy
  void _stringCopy2(char *destination, const char *source) {
    //check if source is not null and destination is not null
      while(*destination++ = *source++);
  }

//example implementation of string length.
  int _stringLength(const char* str) {

      int len=0;
      while(*str++) len++; 
        //i.e. length++ as long as a dereferenced str pointer does not give a 0; and it's not possible to give a 0 accidentally when your type is char
      return len;
  }
//example implementation of string compare
  int _stringComparison(const char* s1, const char* s2) {
    while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2; 
  }


void _stringCatenate(char* s1, const char* s2) {
  while(*s1) s1++;
  while(*s2){
    *s1 = *s2;
    s2++;
    s1++;
  }
  *s1 = 0;
}

//check if string s2 is inside or embedded within string s1
  char* _stringString(char *s1, char *s2) {
    //find string lengths
      int s1Length = _stringLength(s1);
      int Lengths2 = _stringLength(s2);
    //unimportant declarations
      char* currentChar = s1;
      bool works = false;    
      char* forReturn = NULL;
    char* firstScan = s1;
    char* secondScan = NULL;
    char* currentCharTwo = s2;
    for(int o = 0; o < s1Length; o++){
      if(*firstScan == *currentCharTwo){
        secondScan = firstScan;
        for(int i = 0; i < Lengths2 && *secondScan == *currentCharTwo; i++){
          secondScan++; 
          currentCharTwo++;
          if(i == (Lengths2 - 1)){
            works = true;
            forReturn = firstScan;
          }
        }
      }
      firstScan++;
    }
    return forReturn;
  }
void _stringNCopy(char *s1, char* s2, int n) {
  int i = 1;
  while(*s2 && i <= n){
    *s1 = *s2;
    s1++;
    s2++;
    i++;
  }
}

int _stringNComparison(char* s1, char*s2) {//***
  int n = 0;
  char* current1 = s1;
  char* current2 = s2;
  while(*current1 && *current2){
    if(*current1 == *current2){
      n++;
      current2++;
    }
    current1++;
  }
  return n; //somewhat questionable because it doesn't bounce to the next similar character on the s2 end***
}

void _stringNCatenate(char* s1, const char *s2, int n) {
  while(*s1) {
    s1++;
  }
  for(int i = 0; *s2 && (i<n);i++){
    *s1 = *s2;
    s2++;
    s1++;
  }
  *s1 = '\0';
}
