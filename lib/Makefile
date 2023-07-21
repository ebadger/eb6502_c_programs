SRC = $(wildcard *.c)
EXE :=$(SRC:.c=)

all: $(SRC)
	cl65  -v -W error -t ebadger -Osir -Cl -C ../hgr2.cfg -c $(SRC)

clean:
	rm -f *.bin *.list *.o
