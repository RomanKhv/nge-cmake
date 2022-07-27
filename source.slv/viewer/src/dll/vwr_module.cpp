#include "vis_params.h"

namespace viewer
{

__declspec(dllexport) std::vector<std::string> get_vis_params()
{
    return get_scalar_params();
}

}
