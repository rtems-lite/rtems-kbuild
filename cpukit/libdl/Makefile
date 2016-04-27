# if LIBDL
# 
# include $(top_srcdir)/automake/compile.am
# 
# noinst_LIBRARIES = libdl.a
# libdl_a_SOURCES = \
#   dlfcn-shell.c \
#   dlfcn.c \
#   fastlz.c \
#   rap-shell.c \
#   rap.c \
#   rtl.c \
#   rtl-alloc-heap.c \
#   rtl-allocator.c \
#   rtl-chain-iterator.c \
#   rtl-debugger.c \
#   rtl-elf.c \
#   rtl-error.c \
#   rtl-find-file.c \
#   rtl-obj-cache.c \
#   rtl-obj-comp.c \
#   rtl-obj.c \
#   rtl-rap.c \
#   rtl-shell.c \
#   rtl-string.c \
#   rtl-sym.c \
#   rtl-trace.c \
#   rtl-unresolved.c

CONFIG_LIBDL := y
obj-$(CONFIG_LIBDL) += dlfcn-shell.o
obj-$(CONFIG_LIBDL) += dlfcn.o
obj-$(CONFIG_LIBDL) += fastlz.o
obj-$(CONFIG_LIBDL) += rap-shell.o
obj-$(CONFIG_LIBDL) += rap.o
obj-$(CONFIG_LIBDL) += rtl.o
obj-$(CONFIG_LIBDL) += rtl-alloc-heap.o
obj-$(CONFIG_LIBDL) += rtl-allocator.o
obj-$(CONFIG_LIBDL) += rtl-chain-iterator.o
obj-$(CONFIG_LIBDL) += rtl-debugger.o
obj-$(CONFIG_LIBDL) += rtl-elf.o
obj-$(CONFIG_LIBDL) += rtl-error.o
obj-$(CONFIG_LIBDL) += rtl-find-file.o
obj-$(CONFIG_LIBDL) += rtl-obj-cache.o
obj-$(CONFIG_LIBDL) += rtl-obj-comp.o
obj-$(CONFIG_LIBDL) += rtl-obj.o
obj-$(CONFIG_LIBDL) += rtl-rap.o
obj-$(CONFIG_LIBDL) += rtl-shell.o
obj-$(CONFIG_LIBDL) += rtl-string.o
obj-$(CONFIG_LIBDL) += rtl-sym.o
obj-$(CONFIG_LIBDL) += rtl-trace.o
obj-$(CONFIG_LIBDL) += rtl-unresolved.o

# 
# libdl_a_SOURCES += rtl-mdreloc-@RTEMS_CPU@.c

RTEMS_CPU := $(ARCH)
obj-$(CONFIG_LIBDL) += rtl-mdreloc-$(RTEMS_CPU).o

# libdl_a_CPPFLAGS = $(AM_CPPFLAGS) -DRTEMS_RTL_RAP_LOADER=1 -DRTEMS_RTL_ELF_LOADER=1
subdir-ccflags-y := -DRTEMS_RTL_RAP_LOADER=1 -DRTEMS_RTL_ELF_LOADER=1

# 
# endif
# 
# include $(srcdir)/preinstall.am
# include $(top_srcdir)/automake/local.am
# 
