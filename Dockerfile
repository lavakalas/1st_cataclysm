FROM gcc:14

COPY ./Person.c /usr/src/oop/
WORKDIR /usr/src/oop/
RUN gcc -o output.bin Person.c
CMD ["./output.bin"]
