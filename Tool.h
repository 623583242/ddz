#pragma once
#include "cocos2d.h"
#include "iconv.h"
#include <iostream>
#include <string.h>
int code_convert(const char *from_charset, const char *to_charset, const char *inbuf, size_t inlen, char *outbuf, size_t outlen);
 
std::string u2a(const char *inbuf);
  
std::string a2u(const char *inbuf);
