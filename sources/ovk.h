#ifndef __OVK_H__
#define __OVK_H__

#include <vulkan/vulkan.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>
#include <stdexcept>
#include <set>
#include <vector>
#include <string>
#include <cstdlib>



class ovkImage{

};

class ovkDevice{
public:
    // list support
    // help with object management
private:
    VkDevice device;
};

class ovkPhysicalDevice{
public:
    // list support
    // help with devices
private:
    VkPhysicalDevice physicalDevice;
};

class ovkInstance{
public:
    // list extensions
    // create and cleanup
    // list pysical devices and utils
private:
    VkInstance instance;
};


#endif