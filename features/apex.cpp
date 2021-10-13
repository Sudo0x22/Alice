#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>

#define Apex 0x11
#define Loader 0x22

class ApexOne {
    int old_result;
    std::vector<std::vector<std::string>> new_title;
    bool LoadRunning;

    public:
        inline void OpenLoader(std::string title_of_loader) {
            title_of_loader = "[ Alice ]";
        }
        bool isLoaderRunning(int total_result) {

        }
        static void DrawTitle(int x, int y);

};

inline void ApexOne::OpenLoader(std::string title_of_loader) {
    int x = 5;
    int y = 12;
    const char new_title_[] = "[ Alice ]";
    bool isTitle = true;
    for (int i = 0; i < title_of_loader.size(); i++) {
        title_of_loader.begin();
        title_of_loader.push_back(title_of_loader[i]);
        if (title_of_loader != "") {
            DrawTitle(x, y);
        } else {
            fprintf(stderr, "Failed To Load Title\n");
        }
    }
}

bool ApexOne::isLoaderRunning(int total_result) {

}