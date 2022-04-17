//
// Created by beloin on 14/04/2022.
//

#include <iostream>
#include "FileFormatIdentifier.h"
#include "file_formats.h"

using namespace std;

FileType FileFormatIdentifier::identify(string *s) {
    auto *ft = new string;
    parseFormat(s, ft);

    if (isDOC(ft)) {
        return FileType::DOC;
    }
    else if (isImage(ft)) {
        return FileType::IMAGE;
    }

    return FileType::VIDEO;
}
