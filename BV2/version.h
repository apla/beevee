#ifndef VERSION_H
#define VERSION_H

	//Date Version Types
	static const char DATE[] = "24";
	static const char MONTH[] = "08";
	static const char YEAR[] = "2008";
	static const double UBUNTU_VERSION_STYLE = 8.08;
	
	//Software Status
	static const char STATUS[] = "Development";
	static const char STATUS_SHORT[] = "d";
	
	//Standard Version Type
	static const long MAJOR = 2;
	static const long MINOR = 1;
	static const long BUILD = 2;
	static const long REVISION = 1;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 7;
	#define RC_FILEVERSION 2,1,2,1
	#define RC_FILEVERSION_STRING "2, 1, 2, 1\0"
	static const char FULLVERSION_STRING[] = "2.1.2.1";
	
	//SVN Version
	static const char SVN_REVISION[] = "0";
	static const char SVN_DATE[] = "unknown date";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 1;
	

#endif //VERSION_h
