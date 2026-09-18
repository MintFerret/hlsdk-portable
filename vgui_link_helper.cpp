#include "support.h"

extern "C"
{
extern void InitVGUISupportAPI( vguiapi_t *api );

struct {const char *name;void *func;} lib_vgui_exports[] = {
{ "InitVGUISupportAPI", &InitVGUISupportAPI },
{ 0, 0 }
};
}
