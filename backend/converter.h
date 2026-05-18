#ifndef CONVERTER_H
#define CONVERTER_H

#if defined(_WIN32) || defined(_WIN64)
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT __attribute__((visibility("default")))
#endif


EXPORT int mergeFiles(int arraySize, char ** filesArray, char * outName);

EXPORT void generateLatex(char * inName, char * outName);

#endif