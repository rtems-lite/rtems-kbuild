# include $(top_srcdir)/automake/compile.am
# 
# if LIBNETWORKING
# if LIBSHELL
# include_rtemsdir = $(includedir)/rtems
# include_rtems_HEADERS = pty.h telnetd.h passwd.h
# 
# project_lib_LIBRARIES = libtelnetd.a
# libtelnetd_a_SOURCES = check_passwd.c des.c pty.c telnetd.c
# libtelnetd_a_CPPFLAGS = $(AM_CPPFLAGS)
# endif
# endif

LIBNETWORKING := y
LIBSHELL := y
ifeq ($(LIBNETWORKING),y)
ifeq ($(LIBSHELL),y)
obj-y += check_passwd.o des.o pty.o telnetd.o
endif
endif

# FIXME:
# include_rtemsdir = $(includedir)/rtems
# subdir-ccflags-y := -I$(includedir)/rtems

# 
# EXTRA_DIST = README
# 
# include $(srcdir)/preinstall.am
# include $(top_srcdir)/automake/local.am
# 
