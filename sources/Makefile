CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

SOURCES = main.cpp vkapp.cpp ovk.cpp

Pidventure: main.cpp
	g++ $(CFLAGS) -o Pidventure $(SOURCES) $(LDFLAGS)

.PHONY: test clean

test: Pidventure
	./Pidventure

clean:
	rm -f Pidventure