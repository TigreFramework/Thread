//
// Created by Pedro Soares on 03/07/16.
//

#ifndef THREAD_THREAD_H
#define THREAD_THREAD_H

#include <iostream>
#include <string>
#include <thread>
#include "ThreadException.h"

namespace Tigre {

    using namespace std;

    class Thread {

        public:
            Thread();
            ~Thread();
            void Start();
            bool IsRunning();

        private:
            bool isRunning = false;
            thread *thread_;
            virtual void Run();
            void ThreadController();

    };

}


#endif //THREAD_THREAD_H
