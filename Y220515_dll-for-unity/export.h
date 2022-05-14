#pragma once

#ifdef Y220515DLLFORUNITY_EXPORTS
#   define EXPORT __declspec(dllexport)
#else
#   define EXPORT __declspec(dllimport)
#endif

class ExportTest
{
public:
    int TestFunc(int a);
};

extern "C" EXPORT ExportTest * createExportTest();
extern "C" EXPORT void freeExportTest(ExportTest * instance);
extern "C" EXPORT int getResult(ExportTest * instance, int a);