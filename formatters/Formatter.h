//
// Created by beloin on 17/04/2022.
//

#ifndef FACADE_FORMATTER_H
#define FACADE_FORMATTER_H

#include <iostream>
#include <algorithm>
#include "string"

using namespace std;

class Formatter {

public:
    // Default Formatter
    virtual void format(string *input, string* format, string *output){
        cout << "Formatting: " << *input << " To: " << *format << endl;
        // Get file name and inject in output
        parseFileName(input, output);
        transform(format->begin(), format->end(), format->begin(), ::tolower);
        *output += "." + *format;
    }
    /**
     * Parses format and return only file_name
     * @param in
     * @param out
     */
    void parseFileName(string *in, string* out) {
        // last "." pos
        int dotPos;
        for (int i = 0; i < in->length(); ++i) {
            char c = in->at(i);
            if (c == '.'){
                dotPos = i;
            }
        }

        *out = "";
        for (int i = 0; i < dotPos; ++i) {
            *out += in->at(i);
        }
    }

};


#endif //FACADE_FORMATTER_H
