#ifndef _STRICMP_H_
#define _STRICMP_H_

#ifdef WIN32
#define stricmp _stricmp
#else
#define stricmp strcasecmp
#endif

#endif