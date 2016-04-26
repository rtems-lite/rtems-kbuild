/* BSP dependent options file */
/* automatically generated -- DO NOT EDIT!! */

#ifndef __BSP_OPTIONS_H
#define __BSP_OPTIONS_H

/* include/bspopts.tmp.  Generated from bspopts.h.in by configure.  */
/* include/bspopts.h.in.  Generated from configure.ac by autoheader.  */

/* If defined, then the BSP Framework will put a non-zero pattern into the
   RTEMS Workspace and C program heap. This should assist in finding code that
   assumes memory starts set to zero. */
#define BSP_DIRTY_MEMORY 0

/* If defined, print a message and wait until pressed before resetting board
   when application exits. */
#define BSP_PRESS_KEY_FOR_RESET 0

/* If defined, prints the exception context when an unexpected exception
   occurs. */
/* #undef BSP_PRINT_EXCEPTION_CONTEXT */

/* If defined, reset the board when the application exits. */
#define BSP_RESET_BOARD_AT_EXIT 1

/* If defined, enable options which optimize executingon the Skyeye simulator.
   Speed up the clock ticks while the idle task is running so time spent in
   the idle task is minimized. This significantly reduces the wall time
   required to execute the RTEMS test suites. */
/* #undef ON_SKYEYE */







#endif /* __BSP_OPTIONS_H */
