#include<iostream>
#include <string>
#include <vector>
#include <cstdlib>

#define Title AliceProgram
#define loginTextBoxSize 14
#define passwdTextBoxSize 14

#include"includes/login.h"
#include"headers/Main.h"
#include"headers/Help.h"


inline void Login::EnterPassword(std::string password) {
        printf("Enter Password: ");
        std::cin >> password;
        int pass_length = 10;
        if (password.length() != pass_length) {
                fprintf(stderr, "[Alice]: Please Enter A Strong Password\n");
                exit(EXIT_FAILURE);
        } else {
                printf("[Alice]: Welcome: To Alice Program Nice To Meet u\n");
        }
}

inline void Login::EnterUsername(std::string username) {
        class Login toLogin;
        std::string password;
        printf("Enter Username: ");
        std::cin >> username;
                if (username != "") {
                        toLogin.EnterPassword(password);
                } else {
                        fprintf(stderr, "[Alice]: Failed Please Enter A Username\n");
                        exit(EXIT_FAILURE);
                }

        int total_logins = 0;
        long long int ptr_address;
        std::string usernamelength;
        if (usernamelength.length() != 10) {

        }
}