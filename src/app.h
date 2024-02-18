
// standard libraries

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <chrono>


// Application classes


#include "cObj.h"
#include "cOutput.h"


// Application data store

struct sDataStore
{
    std::vector<cObj *> theInput;
    std::vector<cOutput *> theOutput;

};

extern sDataStore theDataStore;

// free functions

void generate();

void calculate();

std::string textOutput();

bool unitTest();

