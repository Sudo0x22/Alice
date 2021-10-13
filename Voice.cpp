#include <iostream>
#include <vector>
#include <string>

#include"headers/Voice.h"
#include"headers/Main.h"
#include"headers/Read.h"
#include"headers/Help.h"


#define AliceOS (LINUX <= 0)
#define os_system (WINDOWS_TYPE_64 == 0)

template<typename T> void toLoad(T& Input, const char args[]) {}
template<typename C> void toRun(C& InputType, const char argv[]) {}

class Voice {
public:
  bool isTalking(char ch) {
    return ch == 'A' || ch == 'B';
  }
  int alice_age(int age) {
    return age = 1;
  }
  static void toTalk(char ch) {
    std::string talking = "[+] Hello There [+]";
    int talking_buffer = talking.length();
    if (talking_buffer == 0) {
      fprintf(stderr, "Failed to Load Please Reload Alice....\n");
      exit(EXIT_FAILURE);
    } else {
      talking_buffer++;
    }
  }
};
