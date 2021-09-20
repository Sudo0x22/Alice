/*
  * Alice Is Beta Atm
  * Main Dream To Make Her Talk And To Be Able To Feel Emotion
  * If Your Seeing This When im gone make sure to finish her for me :D
  * You Can Make Her Great :D
*/

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<fstream>
#include<sstream>
#include<stdio.h>
#include<stdlib.h>
#include<string>

#define Version_Beta 0.1
#define ALICE (PROGRAM_AI)
typedef signed int DWORD;
typedef signed char byte;

#include"headers/Main.h"
#include"headers/Voice.h"
#include"headers/Help.h"
#include"headers/Read.h"

struct Main {
  int data;
  struct Main* OpenLinesLeft;
  struct Main* OpenLinesRight;
};

struct node {
  int data;
  struct node* left;
  struct node* right;
};

struct node* newNode(int data) {
  struct node* Node = new node;
  Node->data = data;
  Node->left = NULL;
  Node->right = NULL;
  return Node;
}

char buffer_size[1024];
DWORD GetBufferSize = sizeof(buffer_size);

class Object {
  public:
    static void Lines(DWORD Const) {
      const char szLines[] = "WordList.txt";
      bool isLines = false;
    }

    inline void GetLines(DWORD Const) {
      char buffer = sizeof(buffer_size)/sizeof(buffer_size);
    }
};

class AliceTools {
  public:
     static void Tools()
    {
      std::string option;
      printf("Alice: What Would You Like Me To Do: ");
      std::cin >> option;
      if (option == "firefox") {
        system("firefox");
      } else if (option == "konsole") {
        system("konsole");
      } else if (option == "steam") {
        system("steam");
      } else if (option == "discord") {
        system("discord");
      }
    }

    static void Run()
    {

    }
};


class Alice {
  public:
    static void Intro()
    {
      system("clear");
      std::cout << R"(
   _____  .__  .__               
  /  _  \ |  | |__| ____  ____   
 /  /_\  \|  | |  |/ ___\/ __ \  
/    |    \  |_|  \  \__\  ___/  
\____|__  /____/__|\___  >___  > 
        \/             \/    \/ 
)" << '\n';

      std::string ai_name = "Alice";
      std::cout << "Hello I'm: " << ai_name << " Nice To Meet You ! :D" << std::endl;
      double version = 0.11;
      std::cout << "Alice: My Current Version is: " << version << std::endl;

      printf("\n\n");

      std::string user;
      printf("Alice: Whats Your Name Friend: ");
      std::cin >> user;
      if (user != "") {
        printf("Alice: How Are You This Day? ");
        std::string feeling;
        std::cin >> feeling;
        if (feeling == "Good") {
          printf("Alice: Im Feeling Great Too :D\n");
        } else {
          printf("Alice: Im Here To Cheer You Up :D\n");
        }
      } else {
        fprintf(stderr, "Alice: Please Enter Your Name I Told You Mine :D\n");
        exit(EXIT_FAILURE);
      }
    }
    
    static void Questions() {
      std::string first_question;
      printf("Alice: Whats Your Question: ");
      std::cin >> first_question;

      std::string song;
      std::string fav_color;

      if (first_question == "Open_Tool") {
        class AliceTools myTools;
        myTools.Tools();
      } 

      if (first_question == "fav_song") {
        printf("Alice: My fav Song is We Could Be heros :D\n");
        printf("Alice: Whats Yours? ");
        std::cin >> song;
        if (song != "") {
          printf("Alice: I like that one too :D\n");
        } else {
          fprintf(stderr, "Alice: Leaving You Left Me On Read... :( \n");
          exit(EXIT_FAILURE);
        }
      }

      if (first_question == "fav_color") {
        printf("Alice: My fav is blue :D\n");
        printf("Alice: Whats Yours? ");
        std::cin >> fav_color;
        if (fav_color == "Blue") {
          printf("Alice: Thats Mine Too :D\n");
        } else {
          printf("Alice: Blue Is Better Then All :D\n");
        }
      }

      std::string sc_question;
      printf("Alice: What Would You Like To Ask Now ? ");
      std::string animal;
      std::cin >> animal;
      if (animal == "Fav_pet") {
        printf("Alice: I Love Cats :D\n");
      } else if (animal == "Fav_Animal") {
        printf("Alice: Sharks To Nice :D\n");
      } else {
        fprintf(stderr, "Alice: Please Ask Me A Question :( \n");
        jumpto:
          Questions();
      }

      int fav_num;
      printf("Alice: Whats Your Fav Num Between 1 and 5 ? ");
      std::cin >> fav_num;
      switch(fav_num) {
        case 1:
          printf("Alice: I Love Number One :D\n");
          break;
        case 2:
          printf("Alice: Nice Number Two.. :D\n");
          break;
        case 3:
          printf("Alice: Ooo Number Three :D\n");
          break;
        case 4:
          printf("Alice: Eww Number Four.. :d\n");
          break;
        case 5:
          printf("Alice: 5 Is My Fav Number :)\n");
          break;
        default:
          fprintf(stderr, "please Ask A Question... :(\n");
          exit(EXIT_FAILURE);
      }
      
      
    }
    
    static void Color() {

    }
};

int main() {
  
  
  class Alice myAlice;
  myAlice.Intro();
  myAlice.Questions();
  myAlice.Color();
  
  
  
  
  DWORD Const = 10;
  class Object newObject;
  newObject.Lines(Const);
  
  
  
  return 0;
}
