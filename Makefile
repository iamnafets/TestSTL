bench: teststl testraw
	time ./teststl
	time ./testraw

clean:
	rm -f teststl testraw

teststl: teststl.cpp
	g++ -O3 -o teststl teststl.cpp

testraw: testraw.cpp
	g++ -O3 -o testraw testraw.cpp
