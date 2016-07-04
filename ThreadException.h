//
// Created by Pedro Soares on 03/07/16.
//

#ifndef THREAD_THREADEXCEPTION_H
#define THREAD_THREADEXCEPTION_H

#include <string>
#include <exception>

namespace Tigre {

    class ThreadException : public std::exception {
        public:
            /** Constructor (C strings).
             *  @param message C-style string error message.
             *                 The string contents are copied upon construction.
             *                 Hence, responsibility for deleting the \c char* lies
             *                 with the caller.
             */
            explicit ThreadException(const char* message);

            /** Constructor (C++ STL strings).
             *  @param message The error message.
             */
            explicit ThreadException(const std::string& message);

            /** Destructor.
             * Virtual to allow for subclassing.
             */
            virtual ~ThreadException();

            /** Returns a pointer to the (constant) error description.
             *  @return A pointer to a \c const \c char*. The underlying memory
             *          is in posession of the \c Exception object. Callers \a must
             *          not attempt to free the memory.
             */
            virtual const char* what() const throw (){
                return msg_.c_str();
            }

        protected:
            /** Error message.
             */
            std::string msg_;

    };
}


#endif //THREAD_THREADEXCEPTION_H
