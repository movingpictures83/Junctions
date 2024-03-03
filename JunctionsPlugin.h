#ifndef JunctionsPLUGIN_H
#define JunctionsPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class JunctionsPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Junctions";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
