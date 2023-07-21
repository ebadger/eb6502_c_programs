TARGET = $(notdir $(shell pwd))

ALL_C = $(wildcard *.c) $(wildcard *.h)

all: $(ALL_C)
	cl65 -v -W error -t ebadger -Osir -Cl -C ../hgr2.cfg -o $(TARGET).bin -l $(TARGET).list $(TARGET).c ../lib/*.o

clean:
	rm -f *.bin *.list *.o
