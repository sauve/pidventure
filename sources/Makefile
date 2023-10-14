CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

SOURCES = main.cpp vkapp.cpp ovk.cpp

VulkanTest: main.cpp
	g++ $(CFLAGS) -o VulkanTest $(SOURCES) $(LDFLAGS)

.PHONY: test clean

test: VulkanTest
	./VulkanTest

clean:
	rm -f VulkanTest