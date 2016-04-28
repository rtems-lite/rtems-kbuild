CONFIG_LIBNETWORKING := y
ifeq ($(CONFIG_LIBNETWORKING),y)

obj-y += kern/
obj-y += lib/
obj-n += libc/
obj-y += net/
obj-y += netinet/
obj-y += nfs/
obj-y += rtems/

subdir-ccflags-y := -DINET -DNFS
subdir-ccflags-y += -DDIAGNOSTIC -DBOOTP_COMPAT -D_KERNEL -D__BSD_VISIBLE
# Add -DFORWARD_PROTOCOL to enable UDP forwarding -- requires missing net/pf.h
# break compile if this not defined.
subdir-ccflags-y += -DFORWARD_PROTOCOL 

# FIXME
subdir-ccflags-y += -I$(obj)

endif
