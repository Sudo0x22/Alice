#pragma once
#include<vector>
#include<string>

using namespace std;

class Math {
    public:
        inline void to_get_math(long long int x, long long int y);
        inline void get_math(long int* _x, long int* _y);
        bool isMathRunning(std::vector<float> load_math, std::vector<vector<int>> result);
    private:
        bool math_running = false;
        int math_total = 1;
    protected:
        inline void lol_math(long int ptr, long int ptr_x);
        inline void lol_math_l(long int* _ptr, long int* _ptr_x);
};

class MathObjects {
    public:
        std::vector<std::vector<std::string>> get_strings();
        std::vector<std::vector<int>> string_length();
        inline void loadVec(const MathObjects& Vec);
};

class LoadMath {

};