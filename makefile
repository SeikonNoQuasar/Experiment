all: prova

abbozzo: abbozzo.cpp unit.h item.h champion.h sivir.h botrk.h
	g++ -c abbozzo.cpp -o abbozzo.o
unit: unit.h unit.C
	g++ -c unit.C -o unit.o

item: item.h item.C
	g++ -c item.C -o item.o

champion: champion.h champion.C unit.h
	g++ -c champion.C -o champion.o

sivir: sivir.h sivir.cpp champion.h unit.h
	g++ -c sivir.cpp -o sivir.o

botrk: botrk.h botrk.C item.h
	g++ -c botrk.C -o botrk.o

prova: abbozzo.o unit.o item.o champion.o sivir.o botrk.o
	g++ abbozzo.o unit.o item.o champion.o sivir.o botrk.o -o prova

clean:
	rm *.o *~

