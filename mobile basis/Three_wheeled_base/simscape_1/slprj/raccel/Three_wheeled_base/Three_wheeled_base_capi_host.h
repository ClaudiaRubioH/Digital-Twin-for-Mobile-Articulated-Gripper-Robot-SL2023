#ifndef RTW_HEADER_Three_wheeled_base_cap_host_h__
#define RTW_HEADER_Three_wheeled_base_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
Three_wheeled_base_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void Three_wheeled_base_host_InitializeDataMapInfo (
Three_wheeled_base_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
