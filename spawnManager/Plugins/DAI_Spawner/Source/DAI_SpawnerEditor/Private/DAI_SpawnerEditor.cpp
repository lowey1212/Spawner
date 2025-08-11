// Copyright Epic Games, Inc. All Rights Reserved.

#include "DAI_SpawnerEditor.h"

#define LOCTEXT_NAMESPACE "FDAI_SpawnerEditorModule"

void FDAI_SpawnerEditorModule::StartupModule()
{
// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FDAI_SpawnerEditorModule::ShutdownModule()
{
// This function may be called during shutdown to clean up your module. For modules that support dynamic reloading,
// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDAI_SpawnerEditorModule, DAI_SpawnerEditor)

