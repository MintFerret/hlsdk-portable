#include "support.h"

extern "C"
{
extern int GetVGUISupportAPI( int version, vgui_support_interface_t *iface, const vgui_support_api_t *engfuncs );

struct {const char *name;void *func;} lib_vgui_exports[] = {
{ "GetVGUISupportAPI", &GetVGUISupportAPI },
{ 0, 0 }
};
}
