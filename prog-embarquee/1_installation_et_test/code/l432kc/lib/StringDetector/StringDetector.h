#ifndef STRINGDETECTOR_H
#define STRINGDETECTOR_H

#include "Arduino.h"
#include <string>

class StringDetector
{
private:
    bool detected;
    
public:
    StringDetector();
    StringDetector(std::string str);


};



#endif /* STRINGDETECTOR_H */
