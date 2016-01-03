#include <stdio.h>
#include <stdlib.h>
#include <version.h>

int main()
{
    printf("Observability v%s (%s)\n", OBSERVABILITY_VERSION, OBSERVABILITY_BUILD_SYSTEM_NAME);
    return 0;
}
