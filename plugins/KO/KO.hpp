// PluginKO.hpp
// Wendy Carlos (mail@madskjeldgaard.dk)

#pragma once

#include "SC_PlugIn.hpp"

namespace KO {

class KO : public SCUnit {
public:
    KO();

    // Destructor
    // ~KO();

private:
    // Calc function
    void next(int nSamples);

    // Member variables
};

} // namespace KO
