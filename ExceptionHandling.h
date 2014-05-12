#ifndef EXCEPTIONHANDLING_H
#define EXCEPTIONHANDLING_H

#include <exception>
#include <string>

using namespace std;

// Exception class
class MyException : public exception
{
public:
    void raise() const
    {
        cout << "Exception: "; throw *this;
    }
};
// Global exception object to be thrown and caught
MyException missingFile;


// Exception: Wrong file name entered
void exceptionWrongFile(string fileName)
{
    try
    {
        missingFile.raise();
    }

    catch(MyException &missingFile)
    {
        cout << fileName << " is not a valid file name." << endl;
        exit(1);
    }
}

#endif // EXCEPTIONHANDLING_H
