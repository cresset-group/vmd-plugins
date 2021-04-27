/* MACHINE GENERATED FILE, DO NOT EDIT! */

#ifndef PLUGIOMANAGERINIT_H
#define PLUGIOMANAGERINIT_H

#include "vmdplugin.h"
#include "import_graphics_plugin.h"
#include "molfile_plugin.h"
#include "vmdconio.h"
#include "vmdplugin.h"

#ifdef __cplusplus
extern "C" {
#endif
    int PlugIOManagerInitAll(void *v, vmdplugin_register_cb cb);
    int PlugIOManagerFreeAll();
#ifdef __cplusplus
}
#endif
#endif
