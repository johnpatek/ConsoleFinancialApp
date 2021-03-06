#ifndef XMLTEXTFILE_H
#define XMLTEXTFILE_H

#include <vector>
#include <iostream>
#include <string>
#include "Markup.h"
#include "AuxiliaryMethods.h"
#include "DateMethods.h"
using namespace std;

class XMLTextFile {
    const string NAME_OF_FILE; //which file?
    string downloadNameFile();

public:
    XMLTextFile(string nameOfFile) : NAME_OF_FILE(nameOfFile) {}

};
#endif // XMLTEXTFILE_H
