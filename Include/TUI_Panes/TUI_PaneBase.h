#ifndef TUI_PANEBASE_H
#define TUI_PANEBASE_H

#include <cmath>
#define _USE_MATH_DEFINES

#include "UILib.h"
#include "c_AppDataIO.h"
using namespace UILib;

#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <glm/glm.hpp>
#include <GLFW/glfw3.h>
using namespace std;
using namespace glm;

//  namespace VKDR
namespace AppCore {
    
    // ************************************************************ //
    // TUI_PaneBase Class                                           //
    // ************************************************************ //
    class TUI_PaneBase {

    public:

       TUI_PaneBase( AppDataIO & inAppData );
        virtual ~TUI_PaneBase();

        void                    UpdateDimensions( float inX, float inY, float inW, float inH);
        void                    UpdateMode( string inMode );

        virtual void            DrawPane();
    
    protected:

        float                   X = 0.0f;
        float                   Y = 0.0f;
        float                   Width = 0.0f;
        float                   Height = 0.0f;
        string                  Mode = "";
        AppDataIO &             AppData;

        virtual void            StartPane();
        virtual void            FinishPane();

    };

}

#endif // TUI_PANEBASE_CPP