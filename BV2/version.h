#ifndef VERSION_H
#define VERSION_H

	//Software Status
	static const char STATUS[] = "Development";
	static const char STATUS_SHORT[] = "d";
	
	//Standard Version Type
	static const long MAJOR = 2;
	static const long MINOR = 1;
	static const long BUILD = 1;
	static const long REVISION = 4;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 32;
	#define RC_FILEVERSION 2,1,1,4
	#define RC_FILEVERSION_STRING "2, 1, 1, 4\0"
	static const char FULLVERSION_STRING[] = "2.1.1.4";
	
	//SVN Version
	static const char SVN_REVISION[] = "8";
	static const char SVN_DATE[] = "2008-08-23T18:55:41.613924Z";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 5;
	

#endif //VERSION_h
