a.out:
	gcc -o a src/main.c src/leapyear.c

clean:
	rm main

test: a.out
	bash test.sh