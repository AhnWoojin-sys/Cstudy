#include <iostream>
#include <cstring>

using namespace std;

class MyString{
private:
    char* stringContent;
    int stringLength;
    int memoryCapacity;
public:
    MyString(char c);
    MyString(const char* stringContent);
    MyString(MyString &string);
    ~MyString();
    int length()const;

    void print() const;
    void println() const;

    MyString& assign(const MyString &str);
    MyString& assign(const char* str);

    int capacity(){return memoryCapacity ; } 
    void reserve(int capacity);

    char at(int idx);

    MyString& insert(int idx, const MyString& str);
    MyString& insert(int idx, const char* str);
    MyString& insert(int idx, char c);
};

// Define Mystring constructor for C
MyString::MyString(char c){
        this->stringContent = new char[1];
        this->stringContent[0] = c; 
        stringLength = 1;
        memoryCapacity = 1;
}
// Define Mystring constructor for string
MyString::MyString(const char* stringContent){
    this->stringContent = new char[strlen(stringContent)];
    strcpy(this->stringContent, stringContent);
    stringLength = strlen(this->stringContent);
    memoryCapacity = stringLength; 
}
// Define Mystring constructor for copy string
MyString::MyString(MyString &string){
    this->stringContent = new char[strlen(string.stringContent)];
    strcpy(this->stringContent, string.stringContent);
    stringLength = strlen(this->stringContent);
    memoryCapacity = stringLength;
}

// Define MyString distructor
MyString::~MyString(){
    delete []stringContent;
}

void MyString::print() const{
    for(int i=0;i<stringLength;i++){
        cout<<stringContent[i];
    }
}

void MyString::println() const{
    for(int i=0;i<stringLength;i++){
        cout<<stringContent[i];
    }
    cout<<endl;
}

int MyString::length() const {
    return stringLength;
}

MyString& MyString::assign(const MyString &str){
    if(memoryCapacity < str.stringLength){
        delete []stringContent;
        stringContent = new char[str.stringLength];
        memoryCapacity = str.stringLength;
    }
    for(int i=0;i<str.stringLength;i++){
        stringContent[i] = str.stringContent[i];
    }
    stringLength = str.stringLength;

    return *this;
}

MyString& MyString::assign(const char* str){
    int strLength = strlen(str);
    if(memoryCapacity < strlen(str)){
        delete []stringContent;

        stringContent = new char[strLength];
        memoryCapacity = strLength;
    }
    for(int i=0;i<strlen(str);i++){
        stringContent[i] = str[i];
    }
    stringLength = strLength;

    return *this;
}

void MyString::reserve(int size){
    if (size > memoryCapacity){
        char *previousStringPtr = stringContent;
        stringContent = new char[size];
        memoryCapacity = size;
        for(int i=0;i<stringLength;i++){
            stringContent[i] = previousStringPtr[i];
        }
    delete []previousStringPtr;
    }

    // Keep do not anything, if size is smaller than memory allocated
}

char MyString::at(int idx){
    if(memoryCapacity < idx || 0 > idx)
        return ' ';
    else
        return stringContent[idx];
}


MyString& MyString::insert(int idx, const MyString& str){
    if(str.stringLength < idx || 0 > idx){
        cout<<"Nothing string  or character in parameter"<<endl;
        return *this;
    }
    // if full capacity
    if(stringLength + str.stringLength > memoryCapacity){
        char* previousStringContent = stringContent; // Save previous string
        memoryCapacity = stringLength + str.stringLength;
        stringContent = new char[memoryCapacity]; 

        int i;
        for(i=0;i<idx;i++){
            stringContent[i] = previousStringContent[i];
        }
        for(int j=0;j!=str.stringLength;j++){
            stringContent[i+j] = str.stringContent[j];
        }
        for(;i<idx+str.stringLength;i++){
            stringContent[i + str.stringLength] = previousStringContent[i];
        }
        delete []previousStringContent;
        stringLength += str.stringLength;

        return *this;
    }

    for(int i=stringLength-1;i>=idx;i--){
        stringContent[i + str.stringLength] = str.stringContent[i]; 
    }
    for(int i=0;i<str.stringLength;i++){
        stringContent[i+idx] = str.stringContent[i];
    }
    stringLength += str.stringLength;

    return *this;
}
MyString& MyString::insert(int idx, const char* str){
    MyString temp(str);
    return insert(idx, temp);
}
MyString& MyString::insert(int idx, char c){
    MyString temp(c);
    return insert(idx, temp);
}

int main(void){
    MyString c("woo");
    MyString str("Hel");
    
    str.println();
    str.println();

    str.assign("What");
    str.println();
    str.reserve(20);
    cout<<str.capacity()<<endl;
    str.insert(2, c);
    cout<<str.length()<<endl;
    str.println();

    return 0;
};