#include "platformerEngine_lib.h"
#include "input.h"
#include "platform.h"
#include <iostream>

#define APPENTRY
#define GL_GLEXT_PROTOTYPES
#include "glcorearb.h"

#ifdef _WIN32
#include "win32_platform.cpp"
#endif

#include "gl_renderer.cpp"
int main()
{
    BumpAllocator transientStorage = make_bump_Allocator(MB(50));

    platform_create_window(1200, 720, "GameEngine");
    input.screenSizeX = 1200;
    input.screenSizeY = 720;
    gl_init(&transientStorage);

    while (running)
    {
        platform_update_window();
        gl_render();
        platform_swap_buffers();
    }

    return 0;
}