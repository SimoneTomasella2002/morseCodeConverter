main:
	rm -f morse.out
	g++ *.cpp -Wall -Werror -Wpedantic -o morse.out

launch:
	./morse.out

clean: 
	rm -f morse.out