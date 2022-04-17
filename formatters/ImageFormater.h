//
// Created by beloin on 17/04/2022.
//

#ifndef FACADE_IMAGEFORMATER_H
#define FACADE_IMAGEFORMATER_H
#include "Formatter.h"

class ImageFormater : public Formatter {
public:
    void format(string *input, string *format, string *output) override;
};


#endif //FACADE_IMAGEFORMATER_H
