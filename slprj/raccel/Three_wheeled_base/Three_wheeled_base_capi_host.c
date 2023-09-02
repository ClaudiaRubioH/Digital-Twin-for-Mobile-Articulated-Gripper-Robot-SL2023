#include "Three_wheeled_base_capi_host.h"
static Three_wheeled_base_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Three_wheeled_base_host_InitializeDataMapInfo(&(root), "Three_wheeled_base");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
