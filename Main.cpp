/*
 * Alice Is Beta Atm
 * Main Dream To Make Her Talk And To Be Able To Feel Emotion
 * If Your Seeing This When im gone make sure to finish her for me :D
 * You Can Make Her Great :D
 *
 * i Tried so Hard And Got Far But In The End it doesn't even matter
 * thinking about ending it all
 * and go back to where i belong H3ll
 */

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#define Version_Beta 0.1
#define ALICE (PROGRAM_AI)
typedef signed int DWORD;
typedef signed char byte;

#include "headers/Main.h"
#include "headers/Voice.h"
#include "headers/Help.h"
#include "headers/Read.h"
#include "includes/login.h"
#include "includes/math.h"
#include "features/SDK.h"


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
        std::cout << R"(

        [ + ] Type Out Program [ + ]

        [ 1 ] ~firefox:
        [ 2 ] ~konsole:
        [ 3 ] ~steam:
        [ 4 ] ~discord:
)" << '\n';

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
        int head = 14;
        int body = sizeof(head)/sizeof(head);
        bool isRun = true;

        float z = 14;
        float y = 12;
        float x = 9;

        if (isRun == false) {
                fprintf(stderr, "Reload Alice Please.....\n");
                exit(EXIT_FAILURE);
        } else {
                printf("Alice Is Running And Well :D..\n");
        }

        struct AliceMain* MainAlice;
}
};

// std::vector<std::vector<std::string>> MathObjects::get_strings()
// {
      // std::string error_msg = "[Alice]: Error Please Reload Program";
      // std::string welcome = "[Alice]: Welcome To My Program :D";

// }

// std::vector<std::vector<int>> MathObjects::string_length() {
        // class MathObjects myObjects;
       // myObjects.get_strings();
// }

class Tools {
public:
static void Calculator() {
        int num_one;
        int num_two;
        int new_result;

        printf("Enter First Number: ");
        std::cin >> num_one;

        char sum;
        printf("Enter Operator: ");
        std::cin >> sum;

        printf("Enter Second Number: ");
        std::cin >> num_two;

        switch(sum) {
        case '+':
                new_result = num_one + num_two;
                std::cout << "[Alice]: Answer Is: " << new_result << std::endl;
                break;
        case '-':
                new_result = num_one - num_two;
                std::cout << "[Alice]: Answer Is: " << new_result << std::endl;
                break;
        case '*':
                new_result = num_one * num_two;
                std::cout << "[Alice]: Answer Is: " << new_result << std::endl;
                break;
        case '/':
                new_result = num_one / num_two;
                std::cout << "[Alice]: Answer Is: " << new_result << std::endl;
                break;
        case '>':
                new_result = num_one > num_two;
                std::cout << "[Alice]: Answer Is: " << new_result << std::endl;
                break;
        case '<':
                new_result = num_one < num_two;
                std::cout << "[Alice]: Answer Is: " << new_result << std::endl;
                break;
        default:
                fprintf(stderr, "[Alice]: Enter A Operator :D\n");
        }
}
static void LinkDownloader() {
        // adding soon
}

static void Checker() {
        // adding soon
}
};

class Login toLogin;

inline void Login::EnterPassword(std::string password) {
        printf("[Alice]: Enter Your Password: ");
        getline(std::cin, password);
        int pass_length = 10;
        if (password.length() != pass_length) {
                fprintf(stderr, "[Alice]: Password Has To Be 10 Chars\n");
                exit(EXIT_FAILURE);
        } else {
                std::cout << "[Alice]: Welcome To Alice Program \n" << std::endl;
        }
}

inline void Login::EnterUsername(std::string username) {
        printf("[Alice]: Enter Your Name: ");
        std::string password;
        getline(std::cin, username);
                if (username != "") {
                        toLogin.EnterPassword(password);
                } else {
                        fprintf(stderr, "[Alice]: Please Enter A Name\n");
                        exit(EXIT_FAILURE);
                }
}

class Alice {
public:
static void Intro()
{
        system("clear");
        std::cout << R"(
                                             
      .;:cccc:.                .:cccc:;.     
     OWoc;,';kWx':lol'...loo:'xWO:,;:ldWO   
    ,Mc        :xo'.'lddl'.,okc.       cM,    
    oW                :o                Wd   
    kWc.             ,O'              .:Nx   
    .oWMk,.        ..'k,...        ':OMNl    
       ,lc':,lx0XWWMMMMMMMMWWNKOdc,.:c'      
          kMMMMMMNWWMMMMMMWWNMMMMMM:         
           okkkkkkkkkkkkkkkkkkkkkkk          
         .. ,Ocooc;:kK00Kkc;cooc0,..         
         kW0kMWlllo0WMMMMW0olloWM:N0l       
          O'WMMXxokkWMMMMWkkoxXMMcMlO        
           xOWMMMMWMMMMMMMMWMMMMKlN''        
           .;,NMMMMMMKXXKMMMMMMW,,O          
              lMMMMMNKxxKNMMMMMd .x           
               lWWW0:.  .:0WWWo  l:
                .cKWMMNNMMWKc. ;l.                                   
                   .;lddl,. ,c..    
)" << '\n';

        std::string ai_name = "Alice";
        std::cout << "Hello I'm: " << ai_name << " Nice To Meet You ! :D" << std::endl;
        double version = 0.11;
        std::cout << "[Alice]: My Current Version is: " << version << std::endl;

        printf("\n\n");
        std::string username;

       toLogin.EnterUsername(username);
       printf("[Alice]: How Are You Feeling Today? ");
       std::string feeling;
       getline(std::cin, feeling);
       if (feeling == "Good") {
               printf("[Alice]: Im Feeling Good To :D\n");
       } else {
               printf("[Alice]: Im Here To Cheer You Up :D\n");
       }
}

static void Questions() {
        std::string song;
        std::string fav_color;

        std::string new_question;
        printf("[Alice]: Whats Your Question? ");
        getline(std::cin, new_question);
        if (new_question == "fav_song") {
                printf("[Alice]: My fav Song is We Could Be heros :D\n");
                printf("[Alice]: Whats Yours? ");
                getline(std::cin, song);
                if (song != "") {
                        printf("[Alice]: I like that one too :D\n");
                } else {
                        fprintf(stderr, "[Alice]: Leaving You Left Me On Read... :( \n");
                        exit(EXIT_FAILURE);
                }
        }


        printf("\n");
        std::string another_question;
        printf("[Alice]: What Would You Like To Ask Now? ");
        getline(std::cin, another_question);
        if (another_question == "fav_color") {
                printf("[Alice]: My fav is blue :D\n");
                printf("[Alice]: Whats Yours? ");
                getline(std::cin, fav_color);
                if (fav_color == "Blue") {
                        printf("[Alice]: Thats Mine Too :D\n");
                } else {
                        printf("[Alice]: Blue Is Better Then All :D\n");
                }
        }

        printf("\n");
        std::string sc_question;
        printf("[Alice]: What Question Would You Like To Ask Now?  ");
        std::string animal;
        getline(std::cin, animal);
        if (animal == "Fav_pet") {
                printf("[Alice]: I Love Cats :D\n");
        } else if (animal == "Fav_Animal") {
                printf("[Alice]: Sharks To Nice :D\n");
        } else {
                fprintf(stderr, "[Alice]: Please Ask Me A Question :( \n");
jumpto:
                Questions();
        }

        printf("\n");
        int fav_num;
        printf("[Alice]: Whats Your Fav Num Between 1 and 5 ? ");
        std::cin >> fav_num;
        switch(fav_num) {
        case 1:
                printf("[Alice]: I Love Number One :D\n");
                break;
        case 2:
                printf("[Alice]: Nice Number Two.. :D\n");
                break;
        case 3:
                printf("[Alice]: Ooo Number Three :D\n");
                break;
        case 4:
                printf("[Alice]: Eww Number Four.. :d\n");
                break;
        case 5:
                printf("[Alice]: 5 Is My Fav Number :)\n");
                break;
        default:
                fprintf(stderr, "please Ask A Question... :(\n");
                exit(EXIT_FAILURE);
        }

        printf("\n");
        char toLoadTools = 'Y';
        printf("[Alice]: Do You Want To Use Tools ?");
        std::cin >> toLoadTools;

        if (toLoadTools == 'Y') {
                system("clear"); class Tools myTools;
                int new_tool;
                std::cout << R"(

          [ 1 ] ~For Calulator:
          [ 2 ] ~Link Downloader:
          [ 3 ] ~Checker:

        )" << '\n';
                printf("[Alice]: Enter Tool You Want To Use: ");
                std::cin >> new_tool;
                switch(new_tool) {
                case 1:
                        myTools.Calculator();
                        break;
                case 2:
                        myTools.LinkDownloader();
                        break;
                case 3:
                        myTools.Checker();
                default:
                        fprintf(stderr, "Please Enter A Option: ");
                }
        }

        printf("\n");

        char toLoadProgram = 'Y';
        printf("[Alice]: Do You Wish For Me To Open A Program For You? ");
        std::cin >> toLoadProgram;
        if (toLoadProgram == 'Y') {
                std::string first_question;
                printf("[Alice]: Enter OpenProgram To See Tools I Can Run :D ");
                std::cin >> first_question;
                if (first_question == "OpenProgram") {
                        class AliceTools myTools;
                        myTools.Tools();
                }
        } else {
                fprintf(stderr, "[Alice]: Exiting Now Bye :D\n");
                exit(EXIT_SUCCESS);
        }





}

static void Color() {

}

// load tools

};

void toAlice::toRun(const toAlice& AliceWorking) {
        // testing

}

int main() {


        char ch;


        class Alice myAlice;
        myAlice.Intro();
        myAlice.Questions();
        myAlice.Color();


        DWORD Const = 10;
        class Object newObject;
        newObject.Lines(Const);



        return 0;
}
