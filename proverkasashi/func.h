#ifndef AL_FUNC_H
#define AL_FUNC_H


#include <iostream>
#include <fstream>

namespace al
{

/*******************************************************
 * SPECS:
 * exit codes:
 * 0 - OK
 * 1 - Unexpected error
 * 100 - File doesn't exists
 * 101 - File's empty
 * 102 - Unexpected file stream fail
 * 200 - OK interruption
********************************************************/

    int len_nsq(std::fstream* f, double& avg);

}

#endif AL_FUNC_H