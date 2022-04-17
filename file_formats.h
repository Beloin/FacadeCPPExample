//
// Created by beloin on 14/04/2022.
//

#ifndef FACADE_FILE_TYPES_H
#define FACADE_FILE_TYPES_H

#include "string"

using namespace std;

enum FileType {
    IMAGE, VIDEO, DOC
};

extern const int IF_S;
extern const int IF_V;
extern const int IF_D;
extern const string IMAGE_FORMATS[];
extern const string VIDEO_FORMATS[];
extern const string DOC_FORMATS[];

void setup_formats();
bool isIn(string *format, string arr[], int n);
bool isVideo(string *format);
bool isImage(string *format);
bool isDOC(string *format);

#endif //FACADE_FILE_TYPES_H
