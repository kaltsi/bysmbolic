all:
	g++ -fPIC -shared -Wall -o libzhared.so -Wl,-Bsymbolic zhared.cpp
	g++ -fPIE -Wall -o main main.cpp -L. -lzhared

