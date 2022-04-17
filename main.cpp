//
// Created by beloin on 14/04/2022.
//

#include <iostream>
#include "string"
#include "FileFormatIdentifier.h"
#include "FileFormatFacade.h"

using namespace std;


void show_formats(FileType *t, string *fileFormat) {
    int to_return;

    cout << "Choose File format:" << endl;
    if (*t == FileType::VIDEO) {
        for (int i = 0; i < IF_V; ++i) {
            cout << i << ": " << VIDEO_FORMATS[i] << endl;
        }
        cin >> to_return;
        if (to_return >= IF_V) to_return = 0;
        *fileFormat = VIDEO_FORMATS[to_return];
    } else if (*t == FileType::IMAGE){
        for (int i = 0; i < IF_S; ++i) {
            cout << i << ": " << IMAGE_FORMATS[i] << endl;
        }
        cin >> to_return;
        if (to_return >= IF_S) to_return = 0;
        *fileFormat = IMAGE_FORMATS[to_return];
    } else if (*t == FileType::DOC) {
        for (int i = 0; i < IF_D; ++i) {
            cout << i << ": " << DOC_FORMATS[i] << endl;
        }
        cin >> to_return;
        if (to_return >= IF_D) to_return = 0;
        *fileFormat = DOC_FORMATS[to_return];
    }
}

int main() {
    // Ask for file name
    string file;
    cout << "Write your file with extension: ";

    getline(cin, file);

    cout << file << endl;

    FileType tp = FileFormatIdentifier::identify(&file);

    // Asks for type to change
    auto *to_format = new string;
    show_formats(&tp, to_format);

    auto fileFacade = new FileFormatFacade();

    auto output = new string;
    fileFacade->format(&file, &tp, to_format, output);

    // Show "Changed" file.
    cout << "Formatted File: " << *output;

    return 0;
}