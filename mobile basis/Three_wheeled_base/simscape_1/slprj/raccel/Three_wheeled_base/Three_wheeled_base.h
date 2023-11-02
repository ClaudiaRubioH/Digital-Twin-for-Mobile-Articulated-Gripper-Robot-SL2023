#ifndef RTW_HEADER_Three_wheeled_base_h_
#define RTW_HEADER_Three_wheeled_base_h_
#ifndef Three_wheeled_base_COMMON_INCLUDES_
#define Three_wheeled_base_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "Three_wheeled_base_d319c82e_1_gateway.h"
#endif
#include "Three_wheeled_base_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Three_wheeled_base
#define NSAMPLE_TIMES (1) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (1) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (8)   
#elif NCSTATES != 8
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T myzglu2kvm [ 8 ] ; } B ; typedef struct { real_T
ckev2c5ei4 ; void * fbzxsb2wcd ; void * ouil5isr5c ; void * auxbpxmxfv ; void
* fe0r0o5ohz ; void * cbtr2e4xig ; void * ncbmpcixp5 ; void * d5t13p34c2 ;
void * kvol4nlk1n ; int_T gytdm1s1n5 ; boolean_T kan5f4lxkd ; } DW ; typedef
struct { real_T gsxwk32dp2 [ 8 ] ; } X ; typedef struct { real_T gsxwk32dp2 [
8 ] ; } XDot ; typedef struct { boolean_T gsxwk32dp2 [ 8 ] ; } XDis ; typedef
struct { real_T gsxwk32dp2 [ 8 ] ; } CStateAbsTol ; typedef struct { real_T
gsxwk32dp2 [ 8 ] ; } CXPtMin ; typedef struct { real_T gsxwk32dp2 [ 8 ] ; }
CXPtMax ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X
rtX ; extern DW rtDW ; extern mxArray * mr_Three_wheeled_base_GetDWork ( ) ;
extern void mr_Three_wheeled_base_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_Three_wheeled_base_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * Three_wheeled_base_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
