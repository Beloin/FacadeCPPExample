//
// Created by beloin on 17/04/2022.
//

#include "ImageFormater.h"
#include <iostream>

using namespace std;

void ImageFormater::format(string *input, string *format, string *output) {
    cout << "Formatting: " << input << endl;

    // Get file name and inject in output
    parseFileName(input, output);

    *output += "." + *format;
}