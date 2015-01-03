#include "discopartylogger.h"
#include <stdarg.h>
#include <stdio.h>


namespace DiscoPartyHider
{
namespace DiscoPartyLogger
{
void logError(const char * format, ...)
{
    va_list args;
    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
}
}
};
