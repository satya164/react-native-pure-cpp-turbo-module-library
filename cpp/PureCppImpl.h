#pragma once

#include <PureCppTurboModuleLibrarySpecJSI.h>

#include <memory>
#include <string>

namespace facebook::react {

class PureCppImpl : public NativePureCppTurboModuleLibraryCxxSpec<PureCppImpl> {
public:
    PureCppImpl(std::shared_ptr<CallInvoker> jsInvoker);

    double multiply(jsi::Runtime &rt, double a, double b);
};

}
