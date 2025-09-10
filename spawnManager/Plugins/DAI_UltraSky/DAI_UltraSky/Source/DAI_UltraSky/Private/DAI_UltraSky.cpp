#include "Modules/ModuleManager.h"

class FDAI_UltraSkyModule final : public IModuleInterface
{
public:
    virtual void StartupModule() override {}
    virtual void ShutdownModule() override {}
};

IMPLEMENT_MODULE(FDAI_UltraSkyModule, DAI_UltraSky)

