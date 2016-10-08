// SampleDLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "SampleDLL.h"


// This is an example of an exported variable
SAMPLEDLL_API int nSampleDLL=0;

// This is an example of an exported function.
SAMPLEDLL_API int fnSampleDLL(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see SampleDLL.h for the class definition
CSampleDLL::CSampleDLL()
{
	return;
}
