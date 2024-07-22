#ifndef FLUTTER_PLUGIN_OLA_MAPS_PLUGIN_H_
#define FLUTTER_PLUGIN_OLA_MAPS_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace ola_maps {

class OlaMapsPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  OlaMapsPlugin();

  virtual ~OlaMapsPlugin();

  // Disallow copy and assign.
  OlaMapsPlugin(const OlaMapsPlugin&) = delete;
  OlaMapsPlugin& operator=(const OlaMapsPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace ola_maps

#endif  // FLUTTER_PLUGIN_OLA_MAPS_PLUGIN_H_
