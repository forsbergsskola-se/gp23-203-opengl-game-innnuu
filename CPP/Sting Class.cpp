#include "string.h"
#include <iostream>

using namespace std;


int main()
{
    string helloWorld("Hello", 100);
    helloWorld.append(", World/n");
    helloWorld.append("Alli");
    helloWorld.append("hopa!");

    helloWorld.print();

    }

