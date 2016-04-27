# include $(top_srcdir)/automake/compile.am
# 
# project_lib_LIBRARIES = libz.a
# 
# libz_a_SOURCES = adler32.c
# libz_a_SOURCES += compress.c
# libz_a_SOURCES += crc32.c crc32.h
# libz_a_SOURCES += deflate.c deflate.h
# libz_a_SOURCES += gzclose.c gzguts.h gzlib.c gzread.c gzwrite.c
# libz_a_SOURCES += infback.c
# libz_a_SOURCES += inffast.c inffast.h
# libz_a_SOURCES += inffixed.h
# libz_a_SOURCES += inflate.c inflate.h
# libz_a_SOURCES += inftrees.c inftrees.h
# libz_a_SOURCES += trees.c trees.h
# libz_a_SOURCES += uncompr.c
# libz_a_SOURCES += zconf.h
# libz_a_SOURCES += zlib.h
# libz_a_SOURCES += zutil.c zutil.h

CONFIG_ZLIB := y
obj-$(CONFIG_ZLIB) += adler32.o
obj-$(CONFIG_ZLIB) += compress.o
obj-$(CONFIG_ZLIB) += crc32.o
obj-$(CONFIG_ZLIB) += deflate.o
obj-$(CONFIG_ZLIB) += gzclose.o
obj-$(CONFIG_ZLIB) += gzlib.o
obj-$(CONFIG_ZLIB) += gzread.o
obj-$(CONFIG_ZLIB) += gzwrite.o
obj-$(CONFIG_ZLIB) += infback.o
obj-$(CONFIG_ZLIB) += inffast.o
obj-$(CONFIG_ZLIB) += inflate.o
obj-$(CONFIG_ZLIB) += inftrees.o
obj-$(CONFIG_ZLIB) += trees.o
obj-$(CONFIG_ZLIB) += uncompr.o
obj-$(CONFIG_ZLIB) += zutil.o

# 
# include_HEADERS = zlib.h zconf.h
# 
# zconf.h: $(srcdir)/zconf.h.in
# 	sed \
# 	  -e 's,#ifdef Z_PREFIX.* may be ,#if 1 /* was ,' \
# 	  -e 's,#ifdef HAVE_UNISTD_H.* may be ,#if 1 /* was ,' \
# 	< $(srcdir)/zconf.h.in > zconf.h
# CLEANFILES = zconf.h
# EXTRA_DIST = zconf.h.in
# 
# include $(srcdir)/preinstall.am
# include $(top_srcdir)/automake/local.am
#