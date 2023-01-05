/*========================================
 *    rrc.c: rrc (return return code) command version 1.0.0
 *        Copyright 2023
 *                  Hiroyuki Kikuchi (hjfk07@gmail.com)
 *        Last Modified: 2023/01/05
 *========================================
 */
/* rrc version 1.0.0 : the first release.                                       */
/*                                              by Hiroyuki Kikuchi  2023/01/05 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ret = 0;

    if (argc == 1)
    {
        // no arguments
        ret = EXIT_SUCCESS;
    }
    else if (argc > 2)
    {
        printf("too many arguments. 0 or 1 argument(s) are required.\n");
        ret = EXIT_FAILURE;
    }
    else
    {
        ret = atoi(argv[1]);
    }

    printf("exit code: %d\n", ret);
    exit(ret);

}
