  #include <iostream>
  using namespace std;
  //By Ivan "Yiyuan" Feng
  //The commented code below can be enabled for checking code behavior purposes, such as tracking a specific variable as it passes through the code pathways, or are helpful explanations.

  int main() {
    int numCards = 21;
    // string pileOriginal[numCards] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21"};
    //for code checking purposes, switch to the numbered card names above for ease of reading
    string pileOriginal[numCards] = {"|8 of Diamonds|","|7 of Diamonds|", "|Ace of Spades|","|Queen of Clubs|", "|Joker|", "|King of Spades|", "|Queen of Diamonds|", "|Ace of Hearts|","|6 of Spades|","|5 of Spades|","|3 of Clubs|","|4 of Clubs|","|4 of Spades|","|8 of Clubs|", "|7 of Hearts|", "|8 of Hearts|", "|5 of Diamonds|", "|Jack of Diamonds|", "|10 of Diamonds|", "|2 of Hearts|"};
    int w = 0;
    while(w<1) {
      string arrayTrio[3][numCards/3];
      
      int b;
      int c;
      int a = 0;

      for(b = 0; b <3; b++){
        for(c = 0; c <7; c++) {
          arrayTrio [b][c] = pileOriginal[a];
          a++;
        }
      }
      cout<<"Here are some cards."<<endl;
      for(b = 0; b <3; b++){
        cout<<"The cards in the ";
        if(b == 0){
          cout<<"1st ";
        }
        if(b == 1){
          cout<<"2nd ";
        }
        if (b == 2){
          cout<<"3rd ";
        }
        cout<<"pile are "<< endl << "{ ";
        for(c = 0; c <7; c++) {
          cout<<arrayTrio[b][c]<<" ";
          if(c == 6){
            cout<<"}" << endl<<endl;
          }
        }
      }
      //recursive scrambling part begins
      int choice;
      int zero;
      cout<<"User, if you wish to play the game, think of a card. Press 0 when you are ready. Otherwise, press any other number to exit."<<endl;
      cin>>zero;
      if(zero != 0){
        break;
      }
      cout<<"\nChoose the pile that it is in by entering 1, 2, or 3."<<endl;
      cin>>choice;

      string arrayTrio2nd[3][numCards/3];

      int arrayOrder[3];

      if (choice == 1){
        arrayOrder[0] = 2;
        arrayOrder[1] = 1;
        arrayOrder[2] = 3;
      }
      else if (choice == 2){
        arrayOrder[0] = 3;
        arrayOrder[1] = 2;
        arrayOrder[2] = 1;
      }
      else if (choice == 3){
        arrayOrder[0] = 1;
        arrayOrder[1] = 3;
        arrayOrder[2] = 2;
      }  
      for(b = 0; b <3; b++){
        for(c = 0; c <7; c++) {
          arrayTrio2nd[b][c] = arrayTrio[(arrayOrder[b]-1)][c];
        }
      }

      string pileOriginal2[numCards];
      // cout<<"The cards in the mega array are { ";
      a = 0;
      for(b = 0; b <3; b++){
        for(c = 0; c <7; c++) {
            pileOriginal2[a] = arrayTrio2nd[b][c];
            // cout<<pileOriginal2[a]<<" ";
            a++;
        }
      }
      // cout<<"}"<<endl;

      string arrayTrio3rd[3][numCards/3];
      a = 0;
      for(c = 0; c <7; c++) {
        for(b = 0; b <3; b++) {
          arrayTrio3rd[b][c] = pileOriginal2[a];
          a++;
        }
      }

      for(b = 0; b <3; b++){
        cout<<endl<<"The cards in the scrambled ";
        if(b == 0){
          cout<<"1st ";
        }
        if(b == 1){
          cout<<"2nd ";
        }
        if (b == 2){
          cout<<"3rd ";
        }
        cout<<"pile are "<< endl << "{ ";
        for(c = 0; c <7; c++) {
          cout<<arrayTrio3rd[b][c]<<" ";
          if(c == 6){
            cout<<"}" << endl;
          }
        }
      }
      //Recursive Scrambling part ends
      //recursive scrambling part begins
      int choice2;
      cout<<"Choose a card. \nNow choose the pile that it is in by entering 1, 2, or 3."<<endl;
      cin>>choice2;

      string arrayTrio4th[3][numCards/3];

      int arrayOrder2[3];
      
      if (choice2 == 1){
        arrayOrder2[0] = 2;
        arrayOrder2[1] = 1;
        arrayOrder2[2] = 3;
      }
      else if (choice2 == 2){
        arrayOrder2[0] = 3;
        arrayOrder2[1] = 2;
        arrayOrder2[2] = 1;
      }
      else if (choice2 == 3){
        arrayOrder2[0] = 1;
        arrayOrder2[1] = 3;
        arrayOrder2[2] = 2;
      }  
      // int p = 0;
      // for (p = 0; p<3 ; p++){
      //   cout<<arrayOrder2[p]<<endl;
      // }
      for(b = 0; b <3; b++){
        for(c = 0; c <7; c++) {
          arrayTrio4th[b][c] = arrayTrio3rd[(arrayOrder2[b]-1)][c];
        }
      }


      string pileOriginal3[numCards];
      // cout<<"The cards in the mega array are { ";
      a = 0;
      for(b = 0; b <3; b++){
        for(c = 0; c <7; c++) {
            pileOriginal3[a] = arrayTrio4th[b][c];
            // cout<<pileOriginal3[a]<<" ";
            a++;
        }
      }
      // cout<<"}"<<endl;

      string arrayTrio5th[3][numCards/3];
      a = 0;
      for(c = 0; c <7; c++) {
        for(b = 0; b <3; b++) {
          arrayTrio5th[b][c] = pileOriginal3[a];
          a++;
        }
      }

      for(b = 0; b <3; b++){
        cout<<endl<<"The cards in the scrambled ";
        if(b == 0){
          cout<<"1st "; 
        }
        if(b == 1){
          cout<<"2nd ";
        }
        if (b == 2){
          cout<<"3rd ";
        }
        cout<<"pile are "<< endl << "{ ";
        for(c = 0; c <7; c++) {
          cout<<arrayTrio5th[b][c]<<" ";
          if(c == 6){
            cout<<"}" << endl;
          }
        }
      }
      //Recursive Scrambling part ends
      //recursive scrambling part begins
      int choice3;
      cout<<"Choose a card. \nNow choose the pile that it is in by entering 1, 2, or 3."<<endl;
      cin>>choice3;

      string arrayTrio6th[3][numCards/3];

      int arrayOrder3[3];
      
      if (choice3 == 1){
        arrayOrder3[0] = 2;
        arrayOrder3[1] = 1;
        arrayOrder3[2] = 3;
      }
      else if (choice3 == 2){
        arrayOrder3[0] = 3;
        arrayOrder3[1] = 2;
        arrayOrder3[2] = 1;
      }
      else if (choice3 == 3){
        arrayOrder3[0] = 1;
        arrayOrder3[1] = 3;
        arrayOrder3[2] = 2;
      }  
      // p = 0;
      // for (p = 0; p<3 ; p++){
      //   cout<<arrayOrder3[p]<<endl;
      // }
      for(b = 0; b <3; b++){
        for(c = 0; c <7; c++) {
          arrayTrio6th[b][c] = arrayTrio5th[(arrayOrder3[b]-1)][c];
        }
      }


      string pileOriginal4[numCards];
      // cout<<"The cards in the mega array are { ";
      a = 0;
      for(b = 0; b <3; b++){
        for(c = 0; c <7; c++) {
            pileOriginal4[a] = arrayTrio6th[b][c];
            // cout<<pileOriginal4[a]<<" ";
            a++;
        }
      }
      // cout<<"}"<<endl;

      string arrayTrio7th[3][numCards/3];
      a = 0;
      for(c = 0; c <7; c++) {
        for(b = 0; b <3; b++) {
          arrayTrio7th[b][c] = pileOriginal4[a];
          a++;
        }
      }

      // for(b = 0; b <3; b++){
      //   cout<<endl<<"The cards in the scrambled ";
      //   if(b == 0){
      //     cout<<"1st "; 
      //   }
      //   if(b == 1){
      //     cout<<"2nd ";
      //   }
      //   if (b == 2){
      //     cout<<"3rd ";
      //   }
      //   cout<<"pile are "<< endl << "{ ";
      //   for(c = 0; c <7; c++) {
      //     cout<<arrayTrio7th[b][c]<<" ";
      //     if(c == 6){
      //       cout<<"}" << endl;
      //     }
      //   }
      // }
      cout<<endl<<"The Card you have in mind is the "<<arrayTrio7th[1][3]<<"."<<endl;
      //Recursive Scrambling part ends
      int zero1;
      cout<<"Press 0 to continue."<<endl;
      cin>>zero1;//this really is just for a pause, not for real input

      string yesNo;
      cout<<endl<<endl<<endl<<"Would like you to play another game? Y/N"<<endl;
      cin>>yesNo;
      
      if(yesNo == "no" || yesNo == "No" || yesNo == "N" || yesNo == "n"){
        w++;
      }
      
    }
    cout<<endl<<"Game terminates.";
    return 0;
  }# Magic-Cards-Trick-Attempt-20102
