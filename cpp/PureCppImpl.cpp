#include "PureCppImpl.h"

namespace facebook::react {

PureCppImpl::PureCppImpl(std::shared_ptr<CallInvoker> jsInvoker): NativePureCppTurboModuleLibraryCxxSpec(std::move(jsInvoker)) {}

double PureCppImpl::multiply(jsi::Runtime& rt, double a, double b) {
    return a * b;
}

}
