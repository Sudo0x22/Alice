#include<iostream>

class Login {
    public:
        inline void EnterUsername(std::string username);
        inline void EnterPassword(std::string password);
    private:
        std::string username_tool;
        std::string password_tool;
};
