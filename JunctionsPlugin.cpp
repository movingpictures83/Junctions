#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "JunctionsPlugin.h"

void JunctionsPlugin::input(std::string file) {
 inputfile = file;
}

void JunctionsPlugin::run() {}

void JunctionsPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "junc ";
myCommand += " ";
myCommand += inputfile + " ";
myCommand += ">";
myCommand += " ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<JunctionsPlugin> JunctionsPluginProxy = PluginProxy<JunctionsPlugin>("Junctions", PluginManager::getInstance());
