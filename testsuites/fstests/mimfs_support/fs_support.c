/*
 *  $Id$
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "pmacros.h"

#include "fs_config.h"

#include <sys/stat.h>
#include <sys/types.h>

#include <rtems/libio.h>



void test_initialize_filesystem(void)
{
  int rc=0;
  rc=mkdir(BASE_FOR_TEST,0777);
  rtems_test_assert(rc==0);


  rc=mount(NULL,
      BASE_FOR_TEST,
      "imfs",
      RTEMS_FILESYSTEM_READ_WRITE,
      NULL);
  rtems_test_assert(rc==0);
}


void test_shutdown_filesystem(void)
{
  int rc=0;
  rc=unmount(BASE_FOR_TEST) ;
  rtems_test_assert(rc==0);
}

/* configuration information */

/* drivers */
#define CONFIGURE_APPLICATION_NEEDS_CLOCK_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER

/**
 * Configure base RTEMS resources.
 */
#define CONFIGURE_RTEMS_INIT_TASKS_TABLE
#define CONFIGURE_MEMORY_OVERHEAD                  512
#define CONFIGURE_MAXIMUM_TASKS                    rtems_resource_unlimited (10)
#define CONFIGURE_MAXIMUM_SEMAPHORES               rtems_resource_unlimited (10)
#define CONFIGURE_MAXIMUM_MESSAGE_QUEUES           rtems_resource_unlimited (6)
#define CONFIGURE_MAXIMUM_PARTITIONS               rtems_resource_unlimited (4)
#define CONFIGURE_MAXIMUM_TIMERS                   10


/**
 * Configure file system and libblock.
 */
#define CONFIGURE_USE_IMFS_AS_BASE_FILESYSTEM
#define CONFIGURE_LIBIO_MAXIMUM_FILE_DESCRIPTORS  100
#define CONFIGURE_MAXIMUM_DRIVERS                  100
#define CONFIGURE_APPLICATION_NEEDS_LIBBLOCK


#define CONFIGURE_INIT
#include <rtems/confdefs.h>

