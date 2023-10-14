#ifndef _VKAPP_H_
#define _VKAPP_H_

#include "ovk.h"

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class vkApp{
public:
    void run();

private:
    GLFWwindow* window;
    VkInstance instance;
    VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;

    void createInstance();


    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();

};

std::set<std::string> get_supported_extensions();

#endif