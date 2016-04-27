# include $(top_srcdir)/automake/compile.am
# 
# if LIBNETWORKING
# if HAS_PTHREADS
# include_mghttpddir = $(includedir)/mghttpd
# 
# project_lib_LIBRARIES = libmghttpd.a
# libmghttpd_a_CPPFLAGS = $(AM_CPPFLAGS)
# # libmghttpd_a_CPPFLAGS += -DHAVE_MD5
# libmghttpd_a_CPPFLAGS += -DNO_SSL -DNO_POPEN -DNO_CGI -DUSE_WEBSOCKET
# 
# libmghttpd_a_SOURCES = mongoose.c mongoose.h

LIBNETWORKING := y
HAS_PTHREADS := y

ifeq ($(LIBNETWORKING),y)
ifeq ($(HAS_PTHREADS),y)
obj-y += mongoose.o
endif
endif

subdir-ccflags-y := -DHAVE_MD5
subdir-ccflags-y := -DNO_SSL -DNO_POPEN -DNO_CGI -DUSE_WEBSOCKET

# include_mghttpd_HEADERS = mongoose.h
# endif
# endif
# 
# include $(srcdir)/preinstall.am
# include $(top_srcdir)/automake/local.am
#