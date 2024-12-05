kfl.exe: wykres.o libcalc.a
	g++ wykres.o libcalc.a -o kfl.exe

wykres.o: wykres.cpp
	g++ -c -o3 wykres.cpp -o wykres.o

libcalc.a: obliczenia.o
	ar rcs libcalc.a obliczenia.o

obliczenia.o: obliczenia.cpp
	g++ -c -o3 obliczenia.cpp -o obliczenia.o

clean:
	rm *.o *.a *.exe
