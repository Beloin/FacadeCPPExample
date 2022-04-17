//
// Created by beloin on 14/04/2022.
//

#include "FileFormatFacade.h"
#include "file_formats.h"

void FileFormatFacade::format(string *input, const FileType *type, string* format, string *output) {

    if (*type == FileType::IMAGE) {
        this->imageFormater->format(input, format, output);
        return;
    }

    if (*type == FileType::VIDEO) {
        this->videoFormater->format(input, format, output);
        return;
    }

    if (*type == FileType::DOC) {
        this->docFormatter->format(input, format, output);
        return;
    }

}
