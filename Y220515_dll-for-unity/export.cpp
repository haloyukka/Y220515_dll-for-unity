#include "pch.h"
#include "export.h"

int ExportTest::TestFunc(int a)
{
    return a + 5;
}

EXPORT ExportTest* createExportTest()
{
    return new ExportTest();
}

EXPORT void freeExportTest(ExportTest* instance)
{
    delete instance;
}

EXPORT int getResult(ExportTest* instance, int a)
{
    return instance->TestFunc(a);
}