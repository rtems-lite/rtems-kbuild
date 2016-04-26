board-n += altera-cyclone-v/
board-n += atsam/
board-n += beagle/
board-n += csb336/
board-n += csb337/
board-n += edb7312/
board-n += gdbarmsim/
board-n += gumstix/
board-n += lm3s69xx/
board-n += lpc176x/
board-n += lpc24xx/
board-n += lpc32xx/
board-n += raspberrypi/
board-n += realview-pbx-a9/
board-n += rtl22xx/
board-y += shared/
board-y += smdk2410/
board-n += stm32f4/
board-n += stm32f4x/
board-n += stm32f7x/
board-n += tms570/
board-n += xilinx-zynq/

boarddirs := $(patsubst %,c/src/lib/libbsp/arm/%,$(board-y))

core-y += c/src/lib/libbsp/shared/
core-y += $(boarddirs)

