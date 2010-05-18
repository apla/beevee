#ifndef VERSION_H
#define VERSION_H

	//Software Status
	static const char STATUS[] = "Release";
	static const char STATUS_SHORT[] = "r";
	
	//Standard Version Type
	static const long MAJOR = 2;
	static const long MINOR = 1;
	static const long BUILD = 2;
	static const long REVISION = 14;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 71;
	#define RC_FILEVERSION 2,1,2,14
	#define RC_FILEVERSION_STRING "2, 1, 2, 14\0"
	static const char FULLVERSION_STRING[] = "2.1.2.14";
	
	//SVN Version
	static const char SVN_REVISION[] = "0";
	static const char SVN_DATE[] = "unknown date";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 6;
	

#endif //VERSION_h
