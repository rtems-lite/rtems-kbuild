# if LIBPCI
# 
# EXTRA_DIST=
# 
# ## PCI Library
# include_HEADERS = pci.h
# include_pcidir = $(includedir)/pci
# include_pci_HEADERS =	pci/access.h pci/cfg.h \
# 			pci/cfg_auto.h pci/cfg_static.h \
# 			pci/cfg_peripheral.h pci/cfg_read.h \
# 			pci/ids.h pci/ids_extra.h pci/irq.h \
# 			pci/pcireg.h
# 
# noinst_LIBRARIES = libpci.a
# 
# libpci_a_SOURCES  = pci_access.c
# libpci_a_SOURCES += pci_access_func.c
# libpci_a_SOURCES += pci_access_io.c
# libpci_a_SOURCES += pci_access_mem.c
# libpci_a_SOURCES += pci_access_mem_be.c
# libpci_a_SOURCES += pci_access_mem_le.c
# libpci_a_SOURCES += pci_cfg.c
# libpci_a_SOURCES += pci_cfg_auto.c
# libpci_a_SOURCES += pci_cfg_print_code.c
# libpci_a_SOURCES += pci_cfg_read.c
# libpci_a_SOURCES += pci_cfg_static.c
# libpci_a_SOURCES += pci_cfg_peripheral.c
# libpci_a_SOURCES += pci_dev_create.c
# libpci_a_SOURCES += pci_find.c
# libpci_a_SOURCES += pci_find_dev.c
# libpci_a_SOURCES += pci_for_each.c
# libpci_a_SOURCES += pci_for_each_dev.c
# libpci_a_SOURCES += pci_for_each_child.c
# libpci_a_SOURCES += pci_get_dev.c
# libpci_a_SOURCES += pci_irq.c
# libpci_a_SOURCES += pci_print.c

CONFIG_LIBPCI := y
obj-$(CONFIG_LIBPCI) += pci_access.o
obj-$(CONFIG_LIBPCI) += pci_access_func.o
obj-$(CONFIG_LIBPCI) += pci_access_io.o
obj-$(CONFIG_LIBPCI) += pci_access_mem.o
obj-$(CONFIG_LIBPCI) += pci_access_mem_be.o
obj-$(CONFIG_LIBPCI) += pci_access_mem_le.o
obj-$(CONFIG_LIBPCI) += pci_cfg.o
obj-$(CONFIG_LIBPCI) += pci_cfg_auto.o
obj-$(CONFIG_LIBPCI) += pci_cfg_print_code.o
obj-$(CONFIG_LIBPCI) += pci_cfg_read.o
obj-$(CONFIG_LIBPCI) += pci_cfg_static.o
obj-$(CONFIG_LIBPCI) += pci_cfg_peripheral.o
obj-$(CONFIG_LIBPCI) += pci_dev_create.o
obj-$(CONFIG_LIBPCI) += pci_find.o
obj-$(CONFIG_LIBPCI) += pci_find_dev.o
obj-$(CONFIG_LIBPCI) += pci_for_each.o
obj-$(CONFIG_LIBPCI) += pci_for_each_dev.o
obj-$(CONFIG_LIBPCI) += pci_for_each_child.o
obj-$(CONFIG_LIBPCI) += pci_get_dev.o
obj-$(CONFIG_LIBPCI) += pci_irq.o
obj-$(CONFIG_LIBPCI) += pci_print.o

# 
# # Driver manager PCI bus
# libpci_a_SOURCES += pci_bus.c

obj-$(CONFIG_LIBPCI) += pci_bus.o

# include_drvmgrdir = $(includedir)/drvmgr

#ERROR
subdir-ccflags-y := -I$(obj)/drvmgr
subdir-ccflags-y := -I$(obj)/pci

# include_drvmgr_HEADERS = pci_bus.h
# 
# endif
# 
# include $(srcdir)/preinstall.am
# include $(top_srcdir)/automake/local.am
# 
