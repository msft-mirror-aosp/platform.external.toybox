/* readahead.c - preload files into disk cache.
 *
 * Copyright 2013 Rob Landley <rob@landley.net>
 *
 * No standard.

USE_READAHEAD(NEWTOY(readahead, NULL, TOYFLAG_BIN))

config READAHEAD
  bool "readahead"
  default y
  help
    usage: readahead FILE...

    Preload files into disk cache.
*/

#include "toys.h"

static void do_readahead(int fd, char *name)
{
  if (posix_fadvise(fd, 0, 0, POSIX_FADV_WILLNEED)) perror_msg_raw(name);
}

void readahead_main(void)
{
  loopfiles(toys.optargs, do_readahead);
}
