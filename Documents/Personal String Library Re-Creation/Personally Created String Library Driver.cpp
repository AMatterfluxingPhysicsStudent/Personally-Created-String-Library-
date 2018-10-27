#include <iostream>
using namespace std;
#include "functions.H"

int main() {
  //declaration of variables
    const char* mysource = "demon king";
    char mydestination[100];
    const char* mySource2 = "Demon King";
    char myDestination2[100];
  //stringCopy versions  
    _stringCopy(mydestination, mysource);
    cout << "stringCopy: " << mydestination << endl;

    _stringCopy2(myDestination2, mySource2);
    cout << "stringCopy2: " << myDestination2 << endl;

  //stringLength:
    int l = _stringLength(mydestination);
    cout << "stringLength: " << l << endl;
  //stringComparision
    const char *s1 = "tricksters";
    const char *s2 = "trickster";
    cout << "S1 & S2 compare as follows : " <<_stringComparison(s1,s2)<<endl;
  
  //stringCatenate
    char lemon1[] = "Le";
    char lemon2[] = "mon";
    cout<<"Piecing together "<<lemon1<<" and "<<lemon2;
    _stringCatenate(lemon1, lemon2);
    cout<<" gives!: "<<lemon1<<endl;
//stringstring i.e. stringEmbeddedCheckFor
    char s3[] = "AmF BmT";
    char s4[] = "m";
    char s5[] = "Seven letters";
    char* display;
    display = _stringString(s3, s4);
    cout<<"Between "<<s3<<" and "<<s4<<", the first common letter is "<<*display<<", the letter followed by ";
    char* WTF = display;
    WTF++;
    cout<<WTF<<endl;
  //_stringNCopy  
    char copyFrom[] = "123456789";
    char copyTo[10];
    _stringNCopy(copyTo, copyFrom, 5);
    cout<<"stringNCopy to: "<<copyTo<<endl;

  //_stringNComparison
    char s6[] = "abc6defg";
    char s7[] = "cdefg";
    int holder = _stringNComparison(s6, s7);
    cout<<"stringNComparison: "<<s6<<" and "<<s7<<" has "<<holder<<" letters in common."<<endl;

  //_stringNCatenate
    char hello2[] = "Hello";
    const char WWW[] = " WorldWorldWorld";
    int m = 5;
    _stringNCatenate(hello2, WWW, m);
    cout<<"stringNCatenate for "<<m<<": "<<hello2<<endl;
  return 0;
}
