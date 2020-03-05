#pragma once

#define STRINGIZE2(s) #s
#define STRINGIZE(s) STRINGIZE2(s)
 
#define VERSION_MAJOR           0
#define VERSION_MINOR           15
#define VERSION_REVISION        1
 
#define FILE_VERSION            VERSION_MAJOR, VERSION_MINOR, VERSION_REVISION, 0
#define FILE_VERSION_STRING     STRINGIZE(VERSION_MAJOR) "." STRINGIZE(VERSION_MINOR) "." STRINGIZE(VERSION_REVISION) ".0" 

#define PRODUCT_VERSION         FILE_VERSION
#define PRODUCT_VERSION_STRING  FILE_VERSION_STRING

#define COMPANY_NAME            "Microsoft Corporation"
#define COPYRIGHT_NOTE          "Copyright (C) 2019 Microsoft Corporation"
 
