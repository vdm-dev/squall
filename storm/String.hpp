#ifndef STORM_STRING_HPP
#define STORM_STRING_HPP

#include <cstdint>
#include <cstdlib>

#define STORM_MAX_PATH 260
#define STORM_MAX_STR 0x7FFFFFFF

int32_t SStrCmp(const char* string1, const char* string2, size_t maxchars);

int32_t SStrCmpI(const char* string1, const char* string2, size_t maxchars);

size_t SStrCopy(char* dest, const char* source, size_t destsize);

char* SStrDupA(const char* string, const char* filename, uint32_t linenumber);

uint32_t SStrHashHT(const char* string);

size_t SStrLen(const char* string);

#endif
