all: link

CFLAGS = -DHAVE_MALLOC_USABLE_SIZE=1 -DHAVE_MMAP=1 -DHAVE_SHM_OPEN=1 -DHAVE_SHM_UNLINK=1 -DTH_EXPORTS -DUSE_C11_ATOMICS=1 -D_FILE_OFFSET_BITS=64


# comp::
# 	gcc $C_DEFINES -c *.c

# DEPS = *.c

obj := $(patsubst %.c,%.o,$(wildcard *.c))

%.o:%.c
	gcc $(CFLAGS) -c -o $@ $<

# comp: %.o

link: $(obj)
	ar -cvq libtorch.a *.o


test::
	gcc -o bar TEST/bar.c -L. -ltorch -lm && ./bar

clean::
	rm -f *.o
clean::
	rm -f *.a
