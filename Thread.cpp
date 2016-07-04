//
// Created by Pedro Soares on 03/07/16.
//

#include "Thread.h"

using namespace Tigre;

Thread::Thread() {

}

Thread::~Thread() {

}

void Thread::Run() {
    throw new ThreadException("Método não criado");
}

void Thread::Start() {
    thread tmp(&Thread::ThreadController, this);
    this->thread_ = &tmp;
    this->thread_->detach();
}

void Thread::ThreadController() {
    isRunning = true;
    Run();
    isRunning = false;
}

bool Thread::IsRunning() {
    return isRunning;
}