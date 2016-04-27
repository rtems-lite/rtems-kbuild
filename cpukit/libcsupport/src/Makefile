# include $(top_srcdir)/automake/multilib.am
# include $(top_srcdir)/automake/compile.am
# 
# noinst_LIBRARIES = libcsupport.a libcalloc.a
# libcsupport_a_CPPFLAGS = $(AM_CPPFLAGS)
# libcalloc_a_CPPFLAGS = $(AM_CPPFLAGS)
# 
# include_rtemsdir = $(includedir)/rtems
# include_rtems_HEADERS  = include/iosupp.h
# include_rtems_HEADERS += include/ringbuf.h
# include_rtems_HEADERS += include/rtems/tod.h
# include_rtems_HEADERS += include/spurious.h
# include_rtems_HEADERS += include/vmeintr.h
# 
# ## rtems
# include_rtems_HEADERS += include/rtems/assoc.h
# include_rtems_HEADERS += include/rtems/deviceio.h
# include_rtems_HEADERS += include/rtems/error.h
# include_rtems_HEADERS += include/rtems/libcsupport.h
# include_rtems_HEADERS += include/rtems/libio.h
# include_rtems_HEADERS += include/rtems/libio_.h
# include_rtems_HEADERS += include/rtems/malloc.h
# include_rtems_HEADERS += include/rtems/termiostypes.h
# include_rtems_HEADERS += include/rtems/gxx_wrappers.h
# 
# ##  General stuff
# ERROR_C_FILES = src/error.c src/__assert.c
# 
# ASSOCIATION_C_FILES = src/assoclocalbyname.c \
#     src/assoclocalbyremotebitfield.c src/assoclocalbyremote.c \
#     src/assocnamebad.c src/assocnamebylocalbitfield.c \
#     src/assocnamebylocal.c src/assocnamebyremotebitfield.c \
#     src/assocnamebyremote.c src/assocptrbylocal.c src/assocptrbyname.c \
#     src/assocptrbyremote.c src/assocremotebylocalbitfield.c \
#     src/assocremotebylocal.c src/assocremotebyname.c

CONFIG_ASSOCIATION_C_FILES := y
obj-$(CONFIG_ASSOCIATION_C_FILES) += assoclocalbyname.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assoclocalbyremotebitfield.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assoclocalbyremote.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assocnamebad.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assocnamebylocalbitfield.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assocnamebylocal.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assocnamebyremotebitfield.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assocnamebyremote.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assocptrbylocal.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assocptrbyname.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assocptrbyremote.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assocremotebylocalbitfield.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assocremotebylocal.o
obj-$(CONFIG_ASSOCIATION_C_FILES) += assocremotebyname.o

# 
# BASE_FS_C_FILES = src/base_fs.c src/mount.c src/unmount.c src/libio.c \
#     src/mount-mgr.c src/mount-mktgt.c src/libio_init.c \
#     src/privateenv.c \
#     src/libio_exit.c \
#     src/open_dev_console.c src/__usrenv.c src/rtems_mkdir.c
# BASE_FS_C_FILES += src/uenvgetgroups.c

CONFIG_BASE_FS_C_FILES := y
obj-$(CONFIG_BASE_FS_C_FILES) += base_fs.o
obj-$(CONFIG_BASE_FS_C_FILES) += mount.o
obj-$(CONFIG_BASE_FS_C_FILES) += unmount.o
obj-$(CONFIG_BASE_FS_C_FILES) += libio.o
obj-$(CONFIG_BASE_FS_C_FILES) += mount-mgr.o
obj-$(CONFIG_BASE_FS_C_FILES) += mount-mktgt.o
obj-$(CONFIG_BASE_FS_C_FILES) += libio_init.o
obj-$(CONFIG_BASE_FS_C_FILES) += privateenv.o
obj-$(CONFIG_BASE_FS_C_FILES) += libio_exit.o
obj-$(CONFIG_BASE_FS_C_FILES) += open_dev_console.o
obj-$(CONFIG_BASE_FS_C_FILES) += __usrenv.o
obj-$(CONFIG_BASE_FS_C_FILES) += rtems_mkdir.o
obj-$(CONFIG_BASE_FS_C_FILES) += uenvgetgroups.o

# 
# TERMIOS_C_FILES = src/cfgetispeed.c src/cfgetospeed.c src/cfsetispeed.c \
#     src/cfsetospeed.c src/tcgetattr.c src/tcsetattr.c src/tcdrain.c \
#     src/tcflow.c src/tcflush.c src/tcgetpgrp.c src/tcsendbreak.c \
#     src/tcsetpgrp.c src/termios.c src/termiosinitialize.c \
#     src/termios_baud2index.c src/termios_baud2num.c src/termios_num2baud.c \
#     src/termios_setinitialbaud.c src/termios_baudtable.c src/cfsetspeed.c \
#     src/cfmakeraw.c src/termios_setbestbaud.c

CONFIG_TERMIOS_C_FILES := y
obj-$(CONFIG_TERMIOS_C_FILES) += cfgetispeed.o cfgetospeed.o cfsetispeed.o
obj-$(CONFIG_TERMIOS_C_FILES) += cfsetospeed.o tcgetattr.o tcsetattr.o tcdrain.o
obj-$(CONFIG_TERMIOS_C_FILES) += tcflow.o tcflush.o tcgetpgrp.o tcsendbreak.o
obj-$(CONFIG_TERMIOS_C_FILES) += tcsetpgrp.o termios.o termiosinitialize.o
obj-$(CONFIG_TERMIOS_C_FILES) += termios_baud2index.o termios_baud2num.o termios_num2baud.o
obj-$(CONFIG_TERMIOS_C_FILES) += termios_setinitialbaud.o termios_baudtable.o cfsetspeed.o
obj-$(CONFIG_TERMIOS_C_FILES) += cfmakeraw.o termios_setbestbaud.o
 
# SYSTEM_CALL_C_FILES = src/open.c src/close.c src/read.c src/write.c \
#     src/write_r.c \
#     src/lseek.c src/ioctl.c src/mkdir.c src/mknod.c src/mkfifo.c src/rmdir.c \
#     src/chdir.c src/chmod.c src/fchdir.c src/fchmod.c src/fchown.c src/chown.c \
#     src/link.c src/unlink.c src/umask.c src/ftruncate.c src/utime.c src/fstat.c \
#     src/fcntl.c src/fpathconf.c src/getdents.c src/fsync.c src/fdatasync.c \
#     src/pipe.c src/dup.c src/dup2.c src/symlink.c src/readlink.c \
#     src/chroot.c src/sync.c src/_rename_r.c src/statvfs.c src/utimes.c src/lchown.c
# 
# ## Until sys/uio.h is moved to libcsupport, we have to have networking
# ## enabled to compile these.  Hopefully this is a temporary situation.
# if NEWLIB
# SYSTEM_CALL_C_FILES += src/readv.c src/writev.c
# endif

CONFIG_SYSTEM_CALL_C_FILES := y
obj-$(CONFIG_SYSTEM_CALL_C_FILES) += open.o close.o read.o write.o
obj-$(CONFIG_SYSTEM_CALL_C_FILES) += write_r.o
obj-$(CONFIG_SYSTEM_CALL_C_FILES) += lseek.o ioctl.o mkdir.o mknod.o mkfifo.o rmdir.o
obj-$(CONFIG_SYSTEM_CALL_C_FILES) += chdir.o chmod.o fchdir.o fchmod.o fchown.o chown.o
obj-$(CONFIG_SYSTEM_CALL_C_FILES) += link.o unlink.o umask.o ftruncate.o utime.o fstat.o
obj-$(CONFIG_SYSTEM_CALL_C_FILES) += fcntl.o fpathconf.o getdents.o fsync.o fdatasync.o
obj-$(CONFIG_SYSTEM_CALL_C_FILES) += pipe.o dup.o dup2.o symlink.o readlink.o
obj-$(CONFIG_SYSTEM_CALL_C_FILES) += chroot.o sync.o _rename_r.o statvfs.o utimes.o lchown.o
# 
# ## Until sys/uio.h is moved to libcsupport, we have to have networking
# ## enabled to compile these.  Hopefully this is a temporary situation.
# if NEWLIB
# SYSTEM_CALL_C_FILES += src/readv.c src/writev.c
# endif
CONFIG_NEWLIB := y
ifeq ($(CONFIG_NEWLIB),y)
obj-$(CONFIG_SYSTEM_CALL_C_FILES) += readv.o writev.o
endif

# 
# DIRECTORY_SCAN_C_FILES =
# ## Newlib SHOULD have provided this one
# DIRECTORY_SCAN_C_FILES += src/readdir_r.c
# ## Comment out when using these from newlib's unix directory
# DIRECTORY_SCAN_C_FILES += src/getcwd.c
# 
# ID_C_FILES = src/getegid.c src/geteuid.c src/getgid.c src/getgroups.c \
#     src/getlogin.c src/getpgrp.c src/getpid.c src/getppid.c src/getuid.c \
#     src/seteuid.c src/setgid.c src/setuid.c src/setegid.c src/setpgid.c \
#     src/setsid.c

CONFIG_DIRECTORY_SCAN_C_FILES := y
obj-$(CONFIG_DIRECTORY_SCAN_C_FILES) += readdir_r.o
obj-$(CONFIG_DIRECTORY_SCAN_C_FILES) += getcwd.o
CFLAGS_getcwd.o := -DMAXPATHLEN=1024

CONFIG_ID_C_FILES := y
obj-$(CONFIG_ID_C_FILES) += getegid.o geteuid.o getgid.o getgroups.o
obj-$(CONFIG_ID_C_FILES) += getlogin.o getpgrp.o getpid.o getppid.o getuid.o
obj-$(CONFIG_ID_C_FILES) += seteuid.o setgid.o setuid.o setegid.o setpgid.o
obj-$(CONFIG_ID_C_FILES) += setsid.o

# 
# MALLOC_C_FILES = src/malloc_initialize.c src/malloc.c \
#     src/realloc.c src/_calloc_r.c src/_malloc_r.c \
#     src/free.c src/_free_r.c \
#     src/_realloc_r.c src/mallocfreespace.c \
#     src/mallocgetheapptr.c src/mallocsetheapptr.c \
#     src/mallocinfo.c src/malloc_walk.c \
#     src/posix_memalign.c \
#     src/rtems_memalign.c src/malloc_deferred.c \
#     src/malloc_dirtier.c src/malloc_p.h \
#     src/rtems_heap_extend_via_sbrk.c \
#     src/rtems_heap_null_extend.c \
#     src/rtems_heap_extend.c \
#     src/rtems_heap_greedy.c
# MALLOC_C_FILES += src/cachealignedalloc.c
# MALLOC_C_FILES += src/cachecoherentalloc.c

CONFIG_MALLOC_C_FILES := y
obj-$(CONFIG_MALLOC_C_FILES) += malloc_initialize.o malloc.o
obj-$(CONFIG_MALLOC_C_FILES) += realloc.o _calloc_r.o _malloc_r.o
obj-$(CONFIG_MALLOC_C_FILES) += free.o _free_r.o
obj-$(CONFIG_MALLOC_C_FILES) += _realloc_r.o mallocfreespace.o
obj-$(CONFIG_MALLOC_C_FILES) += mallocgetheapptr.o mallocsetheapptr.o
obj-$(CONFIG_MALLOC_C_FILES) += mallocinfo.o malloc_walk.o
obj-$(CONFIG_MALLOC_C_FILES) += posix_memalign.o
obj-$(CONFIG_MALLOC_C_FILES) += rtems_memalign.o malloc_deferred.o
obj-$(CONFIG_MALLOC_C_FILES) += malloc_dirtier.o
obj-$(CONFIG_MALLOC_C_FILES) += rtems_heap_extend_via_sbrk.o
obj-$(CONFIG_MALLOC_C_FILES) += rtems_heap_null_extend.o
obj-$(CONFIG_MALLOC_C_FILES) += rtems_heap_extend.o
obj-$(CONFIG_MALLOC_C_FILES) += rtems_heap_greedy.o
obj-$(CONFIG_MALLOC_C_FILES) += cachealignedalloc.o
obj-$(CONFIG_MALLOC_C_FILES) += cachecoherentalloc.o

# 
# PASSWORD_GROUP_C_FILES = src/pwdgrp.c
# PASSWORD_GROUP_C_FILES += src/getgrent.c
# PASSWORD_GROUP_C_FILES += src/getgrnam.c
# PASSWORD_GROUP_C_FILES += src/getpwent.c

PASSWORD_GROUP_C_FILES := y
obj-$(PASSWORD_GROUP_C_FILES) += pwdgrp.o
obj-$(PASSWORD_GROUP_C_FILES) += getgrent.o
obj-$(PASSWORD_GROUP_C_FILES) += getgrnam.o
obj-$(PASSWORD_GROUP_C_FILES) += getpwent.o

# 
# TERMINAL_IDENTIFICATION_C_FILES = src/ctermid.c
# ## 20 Nov 2008: Now using these from newlib's posix directory
# TERMINAL_IDENTIFICATION_C_FILES += src/isatty.c src/isatty_r.c
# ## Comment out when using these from newlib's unix directory
# TERMINAL_IDENTIFICATION_C_FILES += src/ttyname.c

CONFIG_TERMINAL_IDENTIFICATION_C_FILES := y
obj-$(CONFIG_TERMINAL_IDENTIFICATION_C_FILES) += ctermid.o
obj-$(CONFIG_TERMINAL_IDENTIFICATION_C_FILES) += isatty.o isatty_r.o
obj-$(CONFIG_TERMINAL_IDENTIFICATION_C_FILES) += ttyname.o

# 
# LIBC_GLUE_C_FILES = src/__getpid.c src/__gettod.c src/__times.c \
#     src/truncate.c src/access.c src/stat.c src/lstat.c src/pathconf.c \
#     src/newlibc_reent.c src/newlibc_exit.c \
#     src/kill_noposix.c src/utsname.c src/realpath.c

CONFIG_LIBC_GLUE_C_FILES := y
obj-$(CONFIG_LIBC_GLUE_C_FILES) += __getpid.o __gettod.o __times.o
obj-$(CONFIG_LIBC_GLUE_C_FILES) += truncate.o access.o stat.o lstat.o pathconf.o
obj-$(CONFIG_LIBC_GLUE_C_FILES) += newlibc_reent.o newlibc_exit.o
obj-$(CONFIG_LIBC_GLUE_C_FILES) += kill_noposix.o utsname.o realpath.o

# 
# BSD_LIBC_C_FILES = src/strlcpy.c src/strlcat.c src/issetugid.c
# 
# libcsupport_a_SOURCES = src/gxx_wrappers.c src/getchark.c src/printk.c \
#     src/printk_plugin.c src/putk.c src/vprintk.c \
#     src/rtems_putc.c \
#     src/printf_plugin.c \
#     src/sup_fs_location.c \
#     src/sup_fs_eval_path.c \
#     src/sup_fs_eval_path_generic.c \
#     src/sup_fs_check_permissions.c \
#     src/sup_fs_next_token.c \
#     src/sup_fs_exist_in_same_instance.c \
#     src/sup_fs_mount_iterate.c \
#     src/sup_fs_deviceio.c \
#     src/clonenode.c \
#     src/freenode.c \
#     src/resource_snapshot.c \
#     $(BSD_LIBC_C_FILES) $(BASE_FS_C_FILES) $(MALLOC_C_FILES) \
#     $(ERROR_C_FILES) $(ASSOCIATION_C_FILES)

CONFIG_BSD_LIBC_C_FILES :=y
obj-$(CONFIG_BSD_LIBC_C_FILES) += strlcpy.o strlcat.o issetugid.o
# 
# libcsupport_a_SOURCES =
obj-y += gxx_wrappers.o getchark.o printk.o
obj-y += printk_plugin.o putk.o vprintk.o
obj-y += rtems_putc.o
obj-y += printf_plugin.o
obj-y += sup_fs_location.o
obj-y += sup_fs_eval_path.o
obj-y += sup_fs_eval_path_generic.o
obj-y += sup_fs_check_permissions.o
obj-y += sup_fs_next_token.o
obj-y += sup_fs_exist_in_same_instance.o
obj-y += sup_fs_mount_iterate.o
obj-y += sup_fs_deviceio.o
obj-y += clonenode.o
obj-y += freenode.o
obj-y += resource_snapshot.o
#     $(BSD_LIBC_C_FILES) $(BASE_FS_C_FILES) $(MALLOC_C_FILES) \
#     $(ERROR_C_FILES) $(ASSOCIATION_C_FILES)



# 
# libcsupport_a_SOURCES += $(LIBC_GLUE_C_FILES) $(PASSWORD_GROUP_C_FILES) \
#     $(TERMINAL_IDENTIFICATION_C_FILES) $(SYSTEM_CALL_C_FILES) \
#     $(DIRECTORY_SCAN_C_FILES) $(ID_C_FILES) src/envlock.c \
#     $(TERMIOS_C_FILES) src/getpagesize.c src/getrusage.c
# 
# libcsupport_a_SOURCES += src/flockfile.c src/funlockfile.c src/ftrylockfile.c

obj-y += envlock.o
obj-y += getpagesize.o getrusage.o
obj-y += flockfile.o funlockfile.o ftrylockfile.o

# 
# libcalloc_a_SOURCES = src/calloc.c

obj-y += calloc.o

# libcalloc_a_CFLAGS = -fno-builtin
subdir-ccflags-y := -fno-builtin

# 
# EXTRA_DIST = src/TODO src/CASES src/README
# 
# include $(srcdir)/preinstall.am
# include $(top_srcdir)/automake/local.am
# 