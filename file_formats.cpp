//
// Created by beloin on 17/04/2022.
//

#include "file_formats.h"
#include <algorithm>

const int IF_S = 4;
const int IF_V = 5;
const int IF_D = 3;

const string IMAGE_FORMATS[] = {"JPG", "PNG", "JPEG", "GIF"};
const string VIDEO_FORMATS[] = {"MP4", "OGG", "MOV", "MPEG", "YUV"};
const string DOC_FORMATS[] = {"PDF", "DOC", "DOCX"};

bool isIn(string *format, string arr[], int n){
    transform(format->begin(), format->end(), format->begin(), ::tolower);


    for (int i = 0; i < n; ++i) {
        transform(arr[i].begin(), arr[i].end(), arr[i].begin(), ::tolower);
        if (arr[i] == *format) return true;
    }

    return false;
}

bool isVideo(string *format){
    return isIn(format, const_cast<string *>(VIDEO_FORMATS), IF_V);
}

bool isImage(string *format){
    return isIn(format, const_cast<string *>(IMAGE_FORMATS), IF_S);
}

bool isDOC(string *format){
    return isIn(format, const_cast<string *>(DOC_FORMATS), IF_D);
}

