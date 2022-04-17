//
// Created by beloin on 14/04/2022.
//

#ifndef FACADE_FILEFORMATFACADE_H
#define FACADE_FILEFORMATFACADE_H

#include "formatters/ImageFormater.h"
#include "formatters/VideoFormater.h"
#include "formatters/DocFormatter.h"
#include "file_formats.h"

class FileFormatFacade {

private:
    ImageFormater* imageFormater =  new ImageFormater();
    VideoFormater* videoFormater = new VideoFormater();
    DocFormatter* docFormatter =  new DocFormatter();


public:
    void format(string *input, const FileType *type, string* format, string *output);
};


#endif //FACADE_FILEFORMATFACADE_H
