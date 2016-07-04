//
// Created by Pedro Soares on 03/07/16.
//

#include "ThreadException.h"

using namespace Tigre;

ThreadException::ThreadException(const char *message): msg_(message) {

}

ThreadException::ThreadException(const std::string &message) : msg_(message) {

}

ThreadException::~ThreadException() throw (){

}


