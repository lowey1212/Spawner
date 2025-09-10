#include "DAI_Hub.h"
#include "DAI_HubLogging.h"

DEFINE_LOG_CATEGORY(LogDAIHub);

#define LOCTEXT_NAMESPACE "FDAI_HubModule"

void FDAI_HubModule::StartupModule()
{
    UE_LOG(LogDAIHub, Log, TEXT("DAI Hub module startup"));
}

void FDAI_HubModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDAI_HubModule, DAI_Hub)

