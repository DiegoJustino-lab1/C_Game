#pragma once

#ifdef DLL_EXPORT
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

extern "C" {
    DLLIMPORT void description(void);
    DLLIMPORT void reset(void);
    DLLIMPORT void update(void);
    DLLIMPORT void controller(int key, int button);
}