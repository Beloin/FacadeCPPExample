//
// Created by beloin on 14/04/2022.
//

#ifndef FACADE_FILEFORMATIDENTIFIER_H
#define FACADE_FILEFORMATIDENTIFIER_H

#include "string"
#include "file_formats.h"
#include <iostream>

using namespace std;

using namespace std;

class FileFormatIdentifier {

public:
    static FileType identify(string *s);

private:
    /**
     * Parses format and return only format
     * @param in
     * @param out
     */
     static void parseFormat(string *in, string* out) {
        // last "." pos
        int dotPos;
        for (int i = 0; i < in->length(); ++i) {
            char c = in->at(i);
            if (c == '.'){
                dotPos = i;
            }
        }

        *out = "";
        for (unsigned int i = in->length()-1; i > dotPos; --i) {
            *out += in->at(i);
        }

        reverse(out);
    }

    static void reverse(string *str){
        string *t = new string;
        *t = "";
        for (int i = str->length()-1; i >= 0 ; --i) {
            *t += str->at(i);
        }
        *str = *t;
     }

};


#endif //FACADE_FILEFORMATIDENTIFIER_H
