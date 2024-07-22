#include "include/ola_maps/ola_maps_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "ola_maps_plugin.h"

void OlaMapsPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  ola_maps::OlaMapsPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
