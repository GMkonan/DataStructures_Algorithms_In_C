all:
		gcc binarySearch.c -o ./bin/bs

		gcc selectionSort.c -o ./bin/ss.o
clean:
			rm -rf ./bin/*
