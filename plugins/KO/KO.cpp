// PluginKO.cpp
// Wendy Carlos (mail@madskjeldgaard.dk)

#include "SC_PlugIn.hpp"
#include "KO.hpp"

static InterfaceTable* ft;

namespace KO {

KO::KO() {
    mCalcFunc = make_calc_function<KO, &KO::next>();
    next(1);
}

void KO::next(int nSamples) {
    const float* input = in(0);
    const float* gain = in(1);
    float* outbuf = out(0);

    // simple gain function
    for (int i = 0; i < nSamples; ++i) {
        outbuf[i] = input[i] * gain[i];
    }
}

} // namespace KO

PluginLoad(KOUGens) {
    // Plugin magic
    ft = inTable;
    registerUnit<KO::KO>(ft, "KO", false);
}
