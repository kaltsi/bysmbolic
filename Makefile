LFLAGS?=-Wl,-Bsymbolic

all:
	g++ -fPIC -shared -Wall $(CFLAGS) -o libzhared.so $(LFLAGS) zhared.cpp
	g++ -fPIE -Wall $(CFLAGS) -o main main.cpp -L. -lzhared


clean:
	rm -f main libzhared.so
