/* Branch Monitor 
 * Introspection Client
 * Marcus Botacin, 2017
 */

#include "introspection.h"

/* Function Offsets for the wow64win.dll  */
/* Wow64 is required for running x86 under x64 */

static FUNCTION_INTROSPECTION wow64win[]={
{"sdwhwin32",303520},
{"sdwhcon",303376},
{"Unknown",0},
};
