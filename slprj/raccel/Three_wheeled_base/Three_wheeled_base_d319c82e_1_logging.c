#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "Three_wheeled_base_d319c82e_1_geometries.h"
PmfMessageId Three_wheeled_base_d319c82e_1_recordLog ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , double * logVector , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
boolean_T bb [ 1 ] ; int ii [ 1 ] ; double xx [ 117 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void ) input
; ( void ) inputDot ; ( void ) inputDdot ; ( void ) neDiagMgr ; xx [ 0 ] =
57.29577951308232 ; xx [ 1 ] = - 0.5679676827817607 ; xx [ 2 ] = -
0.5679674471672289 ; xx [ 3 ] = - 0.4212038651854126 ; xx [ 4 ] = -
0.4212042191463982 ; xx [ 5 ] = 0.5 ; xx [ 6 ] = xx [ 5 ] * state [ 2 ] ; xx
[ 7 ] = 2.542173449526786e-8 ; xx [ 8 ] = sin ( xx [ 6 ] ) ; xx [ 9 ] =
2.138870869305975e-8 ; xx [ 10 ] = cos ( xx [ 6 ] ) ; xx [ 11 ] = - ( xx [ 7
] * xx [ 8 ] ) ; xx [ 12 ] = - xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ;
pm_math_Quaternion_compose_ra ( xx + 1 , xx + 10 , xx + 14 ) ; xx [ 1 ] = xx
[ 17 ] * state [ 1 ] ; xx [ 2 ] = xx [ 15 ] * state [ 1 ] ; xx [ 3 ] = 2.0 ;
xx [ 4 ] = ( xx [ 14 ] * xx [ 1 ] + xx [ 16 ] * xx [ 2 ] ) * xx [ 3 ] ; xx [
6 ] = xx [ 7 ] * state [ 3 ] ; xx [ 8 ] = xx [ 4 ] - xx [ 6 ] ; xx [ 10 ] =
state [ 1 ] - ( xx [ 17 ] * xx [ 1 ] + xx [ 15 ] * xx [ 2 ] ) * xx [ 3 ] ; xx
[ 11 ] = xx [ 10 ] - state [ 3 ] ; xx [ 12 ] = xx [ 3 ] * ( xx [ 16 ] * xx [
1 ] - xx [ 14 ] * xx [ 2 ] ) ; xx [ 1 ] = xx [ 9 ] * state [ 3 ] ; xx [ 2 ] =
xx [ 12 ] + xx [ 1 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 11 ] ; xx [ 20
] = xx [ 2 ] ; xx [ 13 ] = 1.268339404649168e-6 ; xx [ 21 ] =
2.366149585536344e-6 ; xx [ 22 ] = 1.267821552890098e-6 ; xx [ 23 ] = xx [ 8
] * xx [ 13 ] ; xx [ 24 ] = xx [ 21 ] * xx [ 11 ] ; xx [ 25 ] = xx [ 2 ] * xx
[ 22 ] ; pm_math_Vector3_cross_ra ( xx + 18 , xx + 23 , xx + 26 ) ; xx [ 18 ]
= 3.068232209968291e-7 ; xx [ 19 ] = xx [ 5 ] * state [ 0 ] ; xx [ 20 ] = cos
( xx [ 19 ] ) ; xx [ 23 ] = 0.9999999999999529 ; xx [ 24 ] = sin ( xx [ 19 ]
) ; xx [ 19 ] = xx [ 18 ] * xx [ 20 ] + xx [ 23 ] * xx [ 24 ] ; xx [ 25 ] =
xx [ 18 ] * xx [ 24 ] - xx [ 23 ] * xx [ 20 ] ; xx [ 29 ] = - ( xx [ 15 ] *
xx [ 19 ] + xx [ 25 ] * xx [ 17 ] ) ; xx [ 30 ] = xx [ 14 ] * xx [ 19 ] - xx
[ 25 ] * xx [ 16 ] ; xx [ 31 ] = xx [ 25 ] * xx [ 15 ] - xx [ 17 ] * xx [ 19
] ; xx [ 32 ] = xx [ 25 ] * xx [ 14 ] + xx [ 16 ] * xx [ 19 ] ; xx [ 18 ] =
0.9891716071404441 ; xx [ 20 ] = - 8.713058275644413e-9 ; xx [ 23 ] =
0.1467635228086006 ; xx [ 24 ] = - 1.414277034896744e-8 ; xx [ 33 ] = xx [ 18
] ; xx [ 34 ] = xx [ 20 ] ; xx [ 35 ] = xx [ 23 ] ; xx [ 36 ] = xx [ 24 ] ;
pm_math_Quaternion_compose_ra ( xx + 29 , xx + 33 , xx + 37 ) ; xx [ 33 ] = -
1.708204283178074e-6 ; xx [ 34 ] = 9.176039230036941e-11 ; xx [ 35 ] =
7.508856643522622e-6 ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 33 , xx +
41 ) ; xx [ 29 ] = - 1.707759403564609e-6 ; xx [ 30 ] = 0.01750000009176084 ;
xx [ 31 ] = 7.508482339905939e-6 ; pm_math_Quaternion_xform_ra ( xx + 14 , xx
+ 29 , xx + 44 ) ; xx [ 29 ] = 1.073881273652661e-8 + xx [ 44 ] ; xx [ 30 ] =
0.01749999999999672 - xx [ 46 ] ; xx [ 31 ] = xx [ 25 ] * xx [ 29 ] + xx [ 30
] * xx [ 19 ] ; xx [ 32 ] = 0.04424348237409274 - xx [ 45 ] ; xx [ 36 ] =
0.03375651762590728 ; xx [ 44 ] = xx [ 37 ] ; xx [ 45 ] = xx [ 38 ] ; xx [ 46
] = xx [ 39 ] ; xx [ 47 ] = xx [ 40 ] ; xx [ 48 ] = xx [ 41 ] + xx [ 3 ] * xx
[ 25 ] * xx [ 31 ] - xx [ 29 ] + 0.1258411074140617 ; xx [ 49 ] = xx [ 42 ] +
xx [ 32 ] - ( xx [ 25 ] * xx [ 25 ] * xx [ 36 ] + xx [ 36 ] * xx [ 19 ] * xx
[ 19 ] ) * xx [ 3 ] - ( xx [ 25 ] * xx [ 25 ] * xx [ 32 ] + xx [ 32 ] * xx [
19 ] * xx [ 19 ] ) * xx [ 3 ] + 0.04070459988204377 ; xx [ 50 ] = xx [ 43 ] +
xx [ 30 ] - xx [ 3 ] * xx [ 31 ] * xx [ 19 ] + 0.4160000178629057 ; xx [ 31 ]
= 0.7071067811865476 ; xx [ 36 ] = 0.0 ; xx [ 37 ] = xx [ 31 ] ; xx [ 38 ] =
xx [ 31 ] ; xx [ 39 ] = xx [ 36 ] ; xx [ 40 ] = xx [ 36 ] ; xx [ 41 ] = xx [
36 ] ; xx [ 42 ] = - 0.095 ; xx [ 43 ] = xx [ 36 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
Three_wheeled_base_d319c82e_1_geometry_2 ( NULL ) ,
Three_wheeled_base_d319c82e_1_geometry_1 ( NULL ) , ( pm_math_Transform3 * )
( xx + 44 ) , ( pm_math_Transform3 * ) ( xx + 37 ) , xx + 31 , (
pm_math_Vector3 * ) ( xx + 51 ) , ( pm_math_Vector3 * ) ( xx + 54 ) , (
pm_math_Vector3 * ) ( xx + 57 ) , ( pm_math_Vector3 * ) ( xx + 60 ) ) ; xx [
63 ] = xx [ 18 ] ; xx [ 64 ] = xx [ 20 ] ; xx [ 65 ] = xx [ 23 ] ; xx [ 66 ]
= xx [ 24 ] ; xx [ 67 ] = xx [ 33 ] ; xx [ 68 ] = xx [ 34 ] ; xx [ 69 ] = xx
[ 35 ] ; xx [ 18 ] = xx [ 30 ] * state [ 1 ] ; xx [ 20 ] = xx [ 29 ] * state
[ 1 ] ; xx [ 23 ] = xx [ 16 ] * xx [ 20 ] ; xx [ 24 ] = xx [ 17 ] * xx [ 18 ]
- xx [ 15 ] * xx [ 20 ] ; xx [ 33 ] = xx [ 16 ] * xx [ 18 ] ; xx [ 70 ] = xx
[ 23 ] ; xx [ 71 ] = xx [ 24 ] ; xx [ 72 ] = - xx [ 33 ] ;
pm_math_Vector3_cross_ra ( xx + 15 , xx + 70 , xx + 73 ) ; xx [ 34 ] =
7.508856642310025e-6 ; xx [ 35 ] = xx [ 34 ] * state [ 3 ] ; xx [ 70 ] =
1.543518761068194e-13 ; xx [ 71 ] = xx [ 70 ] * state [ 3 ] ; xx [ 72 ] =
1.708204283920609e-6 ; xx [ 76 ] = xx [ 72 ] * state [ 3 ] ; xx [ 77 ] = xx [
8 ] ; xx [ 78 ] = xx [ 11 ] ; xx [ 79 ] = xx [ 2 ] ; xx [ 80 ] = xx [ 18 ] +
( xx [ 73 ] - xx [ 14 ] * xx [ 23 ] ) * xx [ 3 ] + xx [ 35 ] ; xx [ 81 ] = xx
[ 3 ] * ( xx [ 74 ] - xx [ 24 ] * xx [ 14 ] ) - xx [ 71 ] ; xx [ 82 ] = ( xx
[ 14 ] * xx [ 33 ] + xx [ 75 ] ) * xx [ 3 ] + xx [ 20 ] + xx [ 76 ] ; xx [ 23
] = 1.0e6 ; xx [ 24 ] = 1000.0 ; xx [ 33 ] = 1.0e-4 ; xx [ 73 ] = 0.3 ; xx [
74 ] = 7.556715761609653e-4 ; sm_core_compiler_computeContactWrenches ( 0 , 1
, bb [ 0 ] , xx + 31 , ( const pm_math_Vector3 * ) ( xx + 51 ) , ( const
pm_math_Vector3 * ) ( xx + 54 ) , ( const pm_math_Vector3 * ) ( xx + 57 ) , (
const pm_math_Vector3 * ) ( xx + 60 ) , ( const pm_math_Transform3 * ) ( xx +
63 ) , ( const pm_math_Transform3 * ) ( xx + 37 ) , ( const
pm_math_Transform3 * ) ( xx + 44 ) , ( const pm_math_Transform3 * ) ( xx + 37
) , ( const pm_math_SpatialVector * ) ( xx + 77 ) , NULL , 0 , 1 , xx [ 23 ]
, xx [ 24 ] , xx [ 33 ] , xx [ 73 ] , xx [ 36 ] , xx [ 74 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 83 ) , NULL ) ; xx [ 44 ] = xx [ 4 ] ; xx [
45 ] = xx [ 10 ] ; xx [ 46 ] = xx [ 12 ] ; xx [ 47 ] = - xx [ 6 ] ; xx [ 48 ]
= - state [ 3 ] ; xx [ 49 ] = xx [ 1 ] ; pm_math_Vector3_cross_ra ( xx + 44 ,
xx + 47 , xx + 50 ) ; xx [ 1 ] = xx [ 26 ] - xx [ 83 ] + xx [ 13 ] * xx [ 50
] ; xx [ 6 ] = xx [ 28 ] - xx [ 85 ] + xx [ 22 ] * xx [ 52 ] ; xx [ 13 ] = xx
[ 27 ] - xx [ 84 ] + xx [ 21 ] * xx [ 51 ] ; xx [ 26 ] = xx [ 34 ] ; xx [ 27
] = - xx [ 70 ] ; xx [ 28 ] = xx [ 72 ] ; xx [ 44 ] = xx [ 4 ] + xx [ 8 ] ;
xx [ 45 ] = xx [ 10 ] + xx [ 11 ] ; xx [ 46 ] = xx [ 12 ] + xx [ 2 ] ; xx [
10 ] = xx [ 35 ] ; xx [ 11 ] = - xx [ 71 ] ; xx [ 12 ] = xx [ 76 ] ;
pm_math_Vector3_cross_ra ( xx + 44 , xx + 10 , xx + 47 ) ; xx [ 2 ] = xx [ 18
] * state [ 1 ] ; xx [ 4 ] = xx [ 16 ] * xx [ 2 ] ; xx [ 8 ] = xx [ 20 ] *
state [ 1 ] ; xx [ 10 ] = xx [ 15 ] * xx [ 2 ] + xx [ 17 ] * xx [ 8 ] ; xx [
11 ] = xx [ 16 ] * xx [ 8 ] ; xx [ 44 ] = - xx [ 4 ] ; xx [ 45 ] = xx [ 10 ]
; xx [ 46 ] = - xx [ 11 ] ; pm_math_Vector3_cross_ra ( xx + 15 , xx + 44 , xx
+ 50 ) ; xx [ 12 ] = 9.919863353893048e-3 ; xx [ 18 ] = ( xx [ 47 ] + ( xx [
14 ] * xx [ 4 ] + xx [ 50 ] ) * xx [ 3 ] + xx [ 8 ] ) * xx [ 12 ] - xx [ 86 ]
; xx [ 4 ] = ( xx [ 48 ] + xx [ 3 ] * ( xx [ 51 ] - xx [ 14 ] * xx [ 10 ] ) )
* xx [ 12 ] - xx [ 87 ] ; xx [ 8 ] = ( xx [ 49 ] + xx [ 3 ] * ( xx [ 52 ] +
xx [ 14 ] * xx [ 11 ] ) - xx [ 2 ] ) * xx [ 12 ] - xx [ 88 ] ; xx [ 44 ] = xx
[ 18 ] ; xx [ 45 ] = xx [ 4 ] ; xx [ 46 ] = xx [ 8 ] ; xx [ 2 ] = ( xx [ 6 ]
* xx [ 9 ] - ( xx [ 1 ] * xx [ 7 ] + xx [ 13 ] ) + pm_math_Vector3_dot_ra (
xx + 26 , xx + 44 ) ) / 2.36615017379307e-6 ; xx [ 9 ] = xx [ 1 ] +
3.224338759487726e-14 * xx [ 2 ] ; xx [ 10 ] = xx [ 13 ] + xx [ 21 ] * xx [ 2
] ; xx [ 11 ] = xx [ 6 ] - 2.711706586954896e-14 * xx [ 2 ] ;
pm_math_Quaternion_xform_ra ( xx + 14 , xx + 9 , xx + 20 ) ; xx [ 9 ] = - xx
[ 29 ] ; xx [ 10 ] = xx [ 32 ] ; xx [ 11 ] = xx [ 30 ] ; xx [ 26 ] = xx [ 18
] - 7.448683183568762e-8 * xx [ 2 ] ; xx [ 27 ] = xx [ 4 ] +
1.531149519396678e-15 * xx [ 2 ] ; xx [ 28 ] = xx [ 8 ] -
1.694515307702716e-8 * xx [ 2 ] ; pm_math_Quaternion_xform_ra ( xx + 14 , xx
+ 26 , xx + 6 ) ; pm_math_Vector3_cross_ra ( xx + 9 , xx + 6 , xx + 26 ) ; xx
[ 1 ] = xx [ 14 ] * xx [ 14 ] ; xx [ 4 ] = 1.0 ; xx [ 6 ] = xx [ 15 ] * xx [
16 ] ; xx [ 7 ] = xx [ 14 ] * xx [ 17 ] ; xx [ 8 ] = xx [ 15 ] * xx [ 17 ] ;
xx [ 13 ] = xx [ 14 ] * xx [ 16 ] ; xx [ 18 ] = xx [ 16 ] * xx [ 17 ] ; xx [
20 ] = xx [ 14 ] * xx [ 15 ] ; xx [ 44 ] = ( xx [ 1 ] + xx [ 15 ] * xx [ 15 ]
) * xx [ 3 ] - xx [ 4 ] ; xx [ 45 ] = xx [ 3 ] * ( xx [ 6 ] - xx [ 7 ] ) ; xx
[ 46 ] = ( xx [ 8 ] + xx [ 13 ] ) * xx [ 3 ] ; xx [ 47 ] = ( xx [ 6 ] + xx [
7 ] ) * xx [ 3 ] ; xx [ 48 ] = ( xx [ 1 ] + xx [ 16 ] * xx [ 16 ] ) * xx [ 3
] - xx [ 4 ] ; xx [ 49 ] = xx [ 3 ] * ( xx [ 18 ] - xx [ 20 ] ) ; xx [ 50 ] =
xx [ 3 ] * ( xx [ 8 ] - xx [ 13 ] ) ; xx [ 51 ] = ( xx [ 18 ] + xx [ 20 ] ) *
xx [ 3 ] ; xx [ 52 ] = ( xx [ 1 ] + xx [ 17 ] * xx [ 17 ] ) * xx [ 3 ] - xx [
4 ] ; xx [ 1 ] = - 3.224337957873786e-14 ; xx [ 4 ] = 3.695226427095534e-22 ;
xx [ 6 ] = 2.711705912788202e-14 ; xx [ 53 ] = 1.268339404649168e-6 ; xx [ 54
] = xx [ 1 ] ; xx [ 55 ] = xx [ 4 ] ; xx [ 56 ] = xx [ 1 ] ; xx [ 57 ] =
5.882565798476344e-13 ; xx [ 58 ] = xx [ 6 ] ; xx [ 59 ] = xx [ 4 ] ; xx [ 60
] = xx [ 6 ] ; xx [ 61 ] = 1.267821552890098e-6 ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 53 , xx + 44 , xx + 62 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 44 , xx + 62 , xx + 53 ) ; xx [ 58 ] =
1.015027624278998e-15 ; xx [ 59 ] = - 2.086488337317794e-23 ; xx [ 60 ] =
2.309105924757319e-16 ; xx [ 61 ] = 7.448681331726037e-8 ; xx [ 62 ] = -
1.531149138732334e-15 ; xx [ 63 ] = 1.694514886423442e-8 ; xx [ 64 ] = -
8.536500969692902e-16 ; xx [ 65 ] = 1.754761081248221e-23 ; xx [ 66 ] = -
1.941985074526048e-16 ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 58 , xx
+ 44 , xx + 75 ) ; pm_math_Matrix3x3_compose_ra ( xx + 44 , xx + 75 , xx + 58
) ; pm_math_Matrix3x3_postCross_ra ( xx + 58 , xx + 9 , xx + 75 ) ; xx [ 1 ]
= 4.820086147945758e-17 ; xx [ 4 ] = - 5.334364579468534e-10 ; xx [ 6 ] =
1.096530696883076e-17 ; xx [ 63 ] = 9.919861009034223e-3 ; xx [ 64 ] = xx [ 1
] ; xx [ 65 ] = xx [ 4 ] ; xx [ 66 ] = xx [ 1 ] ; xx [ 67 ] = xx [ 12 ] ; xx
[ 68 ] = xx [ 6 ] ; xx [ 69 ] = xx [ 4 ] ; xx [ 70 ] = xx [ 6 ] ; xx [ 71 ] =
9.919863232540559e-3 ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 63 , xx +
44 , xx + 80 ) ; pm_math_Matrix3x3_compose_ra ( xx + 44 , xx + 80 , xx + 63 )
; pm_math_Matrix3x3_postCross_ra ( xx + 63 , xx + 9 , xx + 44 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 44 , xx + 9 , xx + 63 ) ; xx [ 1 ] =
2.366227466357088e-6 + xx [ 57 ] - xx [ 79 ] - xx [ 79 ] - xx [ 67 ] ; ii [ 0
] = factorSymmetricPosDef ( xx + 1 , 1 , xx + 4 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'Three_wheeled_base/Revolute' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 4 ] = 9.806649999999999 ; xx [ 6 ] = xx [ 4 ] - ( xx [
25 ] * xx [ 25 ] * xx [ 4 ] + xx [ 4 ] * xx [ 19 ] * xx [ 19 ] ) * xx [ 3 ] ;
xx [ 7 ] = ( xx [ 21 ] + xx [ 27 ] ) / xx [ 1 ] + ( xx [ 62 ] - xx [ 48 ] ) /
xx [ 1 ] * xx [ 6 ] ; xx [ 8 ] = - 1.362694048416602e-8 ; xx [ 9 ] = -
0.9999997513865634 ; xx [ 10 ] = 1.146041623642121e-8 ; xx [ 1 ] = xx [ 7 ] *
xx [ 17 ] ; xx [ 11 ] = xx [ 7 ] * xx [ 15 ] ; xx [ 18 ] = - ( ( xx [ 14 ] *
xx [ 1 ] + xx [ 16 ] * xx [ 11 ] ) * xx [ 3 ] ) ; xx [ 19 ] = ( xx [ 17 ] *
xx [ 1 ] + xx [ 15 ] * xx [ 11 ] ) * xx [ 3 ] - xx [ 7 ] ; xx [ 20 ] = xx [ 3
] * ( xx [ 14 ] * xx [ 11 ] - xx [ 16 ] * xx [ 1 ] ) ; xx [ 11 ] =
0.03148017934816077 ; xx [ 12 ] = - 6.471058077189413e-10 ; xx [ 13 ] =
7.161486732629121e-3 ; xx [ 25 ] = - ( xx [ 7 ] * xx [ 30 ] ) ; xx [ 26 ] =
xx [ 6 ] ; xx [ 27 ] = - ( xx [ 7 ] * xx [ 29 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 14 , xx + 25 , xx + 28 ) ; xx [ 1 ]
= 4.0383813471212e-5 ; xx [ 6 ] = 0.9999999966241307 ; xx [ 14 ] =
7.156037461086839e-5 ; xx [ 15 ] = xx [ 1 ] ; xx [ 16 ] = xx [ 6 ] ; xx [ 17
] = xx [ 14 ] ; xx [ 21 ] = xx [ 1 ] * state [ 5 ] ; xx [ 22 ] = xx [ 6 ] *
state [ 5 ] ; xx [ 25 ] = xx [ 14 ] * state [ 5 ] ; xx [ 44 ] = xx [ 21 ] ;
xx [ 45 ] = xx [ 22 ] ; xx [ 46 ] = xx [ 25 ] ; xx [ 26 ] =
5.611953566163286e-8 ; xx [ 27 ] = 2.529365082397464e-3 ; xx [ 31 ] =
9.939784279393993e-8 ; xx [ 47 ] = xx [ 26 ] * state [ 5 ] ; xx [ 48 ] = xx [
27 ] * state [ 5 ] ; xx [ 49 ] = xx [ 31 ] * state [ 5 ] ;
pm_math_Vector3_cross_ra ( xx + 44 , xx + 47 , xx + 50 ) ; xx [ 32 ] =
1.555840337210809e-3 ; xx [ 34 ] = 0.5932479809203707 ; xx [ 35 ] =
0.5944693556140905 ; xx [ 47 ] = 0.3847863688724822 ; xx [ 48 ] =
0.3828870181915315 ; xx [ 53 ] = xx [ 34 ] ; xx [ 54 ] = - xx [ 35 ] ; xx [
55 ] = xx [ 47 ] ; xx [ 56 ] = - xx [ 48 ] ; xx [ 49 ] = xx [ 5 ] * state [ 4
] ; xx [ 57 ] = sin ( xx [ 49 ] ) ; xx [ 58 ] = cos ( xx [ 49 ] ) ; xx [ 59 ]
= xx [ 1 ] * xx [ 57 ] ; xx [ 60 ] = xx [ 6 ] * xx [ 57 ] ; xx [ 61 ] = xx [
14 ] * xx [ 57 ] ; pm_math_Quaternion_compose_ra ( xx + 53 , xx + 58 , xx +
62 ) ; xx [ 49 ] = 0.9999987896796901 ; xx [ 53 ] = - ( xx [ 32 ] * xx [ 65 ]
- xx [ 49 ] * xx [ 63 ] ) ; xx [ 54 ] = - ( xx [ 49 ] * xx [ 62 ] + xx [ 32 ]
* xx [ 64 ] ) ; xx [ 55 ] = xx [ 32 ] * xx [ 63 ] + xx [ 49 ] * xx [ 65 ] ;
xx [ 56 ] = xx [ 32 ] * xx [ 62 ] - xx [ 49 ] * xx [ 64 ] ; xx [ 57 ] =
0.9776966061498937 ; xx [ 58 ] = 3.922291740543114e-5 ; xx [ 59 ] =
0.2100222479525564 ; xx [ 60 ] = - 1.222692333764024e-5 ;
pm_math_Quaternion_compose_ra ( xx + 53 , xx + 57 , xx + 66 ) ; xx [ 61 ] =
1.92368824894706e-6 ; xx [ 70 ] = - 0.01203078088091823 ; xx [ 71 ] =
3.798194760894296e-6 ; xx [ 75 ] = xx [ 61 ] ; xx [ 76 ] = xx [ 70 ] ; xx [
77 ] = xx [ 71 ] ; pm_math_Quaternion_xform_ra ( xx + 53 , xx + 75 , xx + 78
) ; xx [ 53 ] = 0.02226208232013789 ; xx [ 54 ] = 7.38008192922028e-6 ; xx [
55 ] = xx [ 53 ] ; xx [ 56 ] = 1.412496002194259e-5 ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 54 , xx + 81 ) ; xx [ 54 ] =
0.01530975760392998 - xx [ 81 ] ; xx [ 55 ] = 0.03864145797403479 - xx [ 83 ]
; xx [ 56 ] = xx [ 32 ] * xx [ 54 ] + xx [ 49 ] * xx [ 55 ] ; xx [ 83 ] = xx
[ 66 ] ; xx [ 84 ] = xx [ 67 ] ; xx [ 85 ] = xx [ 68 ] ; xx [ 86 ] = xx [ 69
] ; xx [ 87 ] = xx [ 78 ] + xx [ 54 ] - 3.111680674421618e-3 * xx [ 56 ] -
0.08453348257393707 ; xx [ 88 ] = xx [ 79 ] + ( 2.420639154892244e-6 * xx [
82 ] + 0.9999975793608451 * xx [ 82 ] ) * xx [ 3 ] - xx [ 82 ] -
0.01105191774386585 ; xx [ 89 ] = xx [ 80 ] + xx [ 55 ] - 1.99999757935938 *
xx [ 56 ] + 0.3197725282326799 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
Three_wheeled_base_d319c82e_1_geometry_0 ( NULL ) ,
Three_wheeled_base_d319c82e_1_geometry_1 ( NULL ) , ( pm_math_Transform3 * )
( xx + 83 ) , ( pm_math_Transform3 * ) ( xx + 37 ) , xx + 32 , (
pm_math_Vector3 * ) ( xx + 54 ) , ( pm_math_Vector3 * ) ( xx + 66 ) , (
pm_math_Vector3 * ) ( xx + 78 ) , ( pm_math_Vector3 * ) ( xx + 90 ) ) ; xx [
93 ] = xx [ 57 ] ; xx [ 94 ] = xx [ 58 ] ; xx [ 95 ] = xx [ 59 ] ; xx [ 96 ]
= xx [ 60 ] ; xx [ 97 ] = xx [ 61 ] ; xx [ 98 ] = xx [ 70 ] ; xx [ 99 ] = xx
[ 71 ] ; xx [ 61 ] = 1.253187702381151e-5 ; xx [ 69 ] = - ( xx [ 61 ] * state
[ 5 ] ) ; xx [ 70 ] = 4.22983233005524e-11 ; xx [ 71 ] = xx [ 70 ] * state [
5 ] ; xx [ 72 ] = 6.481054124408873e-6 ; xx [ 81 ] = xx [ 72 ] * state [ 5 ]
; xx [ 100 ] = xx [ 21 ] ; xx [ 101 ] = xx [ 22 ] ; xx [ 102 ] = xx [ 25 ] ;
xx [ 103 ] = xx [ 69 ] ; xx [ 104 ] = xx [ 71 ] ; xx [ 105 ] = xx [ 81 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 32 , (
const pm_math_Vector3 * ) ( xx + 54 ) , ( const pm_math_Vector3 * ) ( xx + 66
) , ( const pm_math_Vector3 * ) ( xx + 78 ) , ( const pm_math_Vector3 * ) (
xx + 90 ) , ( const pm_math_Transform3 * ) ( xx + 93 ) , ( const
pm_math_Transform3 * ) ( xx + 37 ) , ( const pm_math_Transform3 * ) ( xx + 83
) , ( const pm_math_Transform3 * ) ( xx + 37 ) , ( const
pm_math_SpatialVector * ) ( xx + 100 ) , NULL , 0 , 1 , xx [ 23 ] , xx [ 24 ]
, xx [ 33 ] , xx [ 73 ] , xx [ 36 ] , xx [ 74 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 106 ) , NULL ) ; xx [ 54 ] = xx [ 50 ] - xx
[ 106 ] ; xx [ 55 ] = xx [ 51 ] - xx [ 107 ] ; xx [ 56 ] = xx [ 52 ] - xx [
108 ] ; xx [ 50 ] = - xx [ 61 ] ; xx [ 51 ] = xx [ 70 ] ; xx [ 52 ] = xx [ 72
] ; xx [ 21 ] = 0.5772202798158926 ; xx [ 66 ] = xx [ 69 ] ; xx [ 67 ] = xx [
71 ] ; xx [ 68 ] = xx [ 81 ] ; pm_math_Vector3_cross_ra ( xx + 44 , xx + 66 ,
xx + 69 ) ; xx [ 44 ] = xx [ 21 ] * xx [ 69 ] - xx [ 109 ] ; xx [ 45 ] = xx [
21 ] * xx [ 70 ] - xx [ 110 ] ; xx [ 46 ] = xx [ 21 ] * xx [ 71 ] - xx [ 111
] ; xx [ 22 ] = 2.52936519813478e-3 ; xx [ 66 ] = - 2.85986917493651e-3 ; xx
[ 67 ] = 9.652797480289734e-9 ; xx [ 68 ] = 1.479025598182478e-3 ; xx [ 25 ]
= xx [ 4 ] * xx [ 65 ] ; xx [ 32 ] = xx [ 4 ] * xx [ 63 ] ; xx [ 69 ] = - ( (
xx [ 62 ] * xx [ 25 ] + xx [ 64 ] * xx [ 32 ] ) * xx [ 3 ] ) ; xx [ 70 ] = (
xx [ 65 ] * xx [ 25 ] + xx [ 63 ] * xx [ 32 ] ) * xx [ 3 ] - xx [ 4 ] ; xx [
71 ] = xx [ 3 ] * ( xx [ 62 ] * xx [ 32 ] - xx [ 64 ] * xx [ 25 ] ) ; xx [ 25
] = xx [ 1 ] * state [ 7 ] ; xx [ 32 ] = xx [ 6 ] * state [ 7 ] ; xx [ 61 ] =
xx [ 14 ] * state [ 7 ] ; xx [ 62 ] = xx [ 25 ] ; xx [ 63 ] = xx [ 32 ] ; xx
[ 64 ] = xx [ 61 ] ; xx [ 78 ] = xx [ 26 ] * state [ 7 ] ; xx [ 79 ] = xx [
27 ] * state [ 7 ] ; xx [ 80 ] = xx [ 31 ] * state [ 7 ] ;
pm_math_Vector3_cross_ra ( xx + 62 , xx + 78 , xx + 81 ) ; xx [ 84 ] = - xx [
34 ] ; xx [ 85 ] = xx [ 35 ] ; xx [ 86 ] = - xx [ 47 ] ; xx [ 87 ] = xx [ 48
] ; xx [ 26 ] = xx [ 5 ] * state [ 6 ] ; xx [ 5 ] = sin ( xx [ 26 ] ) ; xx [
88 ] = cos ( xx [ 26 ] ) ; xx [ 89 ] = xx [ 1 ] * xx [ 5 ] ; xx [ 90 ] = xx [
6 ] * xx [ 5 ] ; xx [ 91 ] = xx [ 14 ] * xx [ 5 ] ;
pm_math_Quaternion_compose_ra ( xx + 84 , xx + 88 , xx + 100 ) ; xx [ 1 ] =
1.55584033721079e-3 ; xx [ 84 ] = - ( xx [ 49 ] * xx [ 100 ] + xx [ 1 ] * xx
[ 102 ] ) ; xx [ 85 ] = xx [ 1 ] * xx [ 103 ] - xx [ 49 ] * xx [ 101 ] ; xx [
86 ] = xx [ 1 ] * xx [ 100 ] - xx [ 49 ] * xx [ 102 ] ; xx [ 87 ] = - ( xx [
49 ] * xx [ 103 ] + xx [ 1 ] * xx [ 101 ] ) ; pm_math_Quaternion_compose_ra (
xx + 84 , xx + 57 , xx + 88 ) ; pm_math_Quaternion_xform_ra ( xx + 84 , xx +
75 , xx + 57 ) ; xx [ 75 ] = 7.380081929219568e-6 ; xx [ 76 ] = xx [ 53 ] ;
xx [ 77 ] = 1.4124960021941e-5 ; pm_math_Quaternion_xform_ra ( xx + 100 , xx
+ 75 , xx + 78 ) ; xx [ 5 ] = 0.01530975760392997 - xx [ 78 ] ; xx [ 6 ] =
0.0386414579740348 - xx [ 80 ] ; xx [ 14 ] = xx [ 1 ] * xx [ 6 ] ; xx [ 26 ]
= xx [ 1 ] * xx [ 5 ] ; xx [ 104 ] = xx [ 88 ] ; xx [ 105 ] = xx [ 89 ] ; xx
[ 106 ] = xx [ 90 ] ; xx [ 107 ] = xx [ 91 ] ; xx [ 108 ] = xx [ 57 ] + xx [
5 ] - xx [ 3 ] * ( xx [ 49 ] * xx [ 14 ] + xx [ 1 ] * xx [ 26 ] ) -
0.08601643205482842 ; xx [ 109 ] = xx [ 58 ] - ( 0.0110519177438635 + xx [ 79
] ) ; xx [ 110 ] = xx [ 59 ] + xx [ 6 ] - ( xx [ 1 ] * xx [ 14 ] - xx [ 49 ]
* xx [ 26 ] ) * xx [ 3 ] + 0.51222747176732 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
Three_wheeled_base_d319c82e_1_geometry_0 ( NULL ) ,
Three_wheeled_base_d319c82e_1_geometry_1 ( NULL ) , ( pm_math_Transform3 * )
( xx + 104 ) , ( pm_math_Transform3 * ) ( xx + 37 ) , xx + 1 , (
pm_math_Vector3 * ) ( xx + 47 ) , ( pm_math_Vector3 * ) ( xx + 57 ) , (
pm_math_Vector3 * ) ( xx + 75 ) , ( pm_math_Vector3 * ) ( xx + 78 ) ) ; xx [
5 ] = 1.253187702380993e-5 ; xx [ 6 ] = - ( xx [ 5 ] * state [ 7 ] ) ; xx [
14 ] = 4.229832330053958e-11 ; xx [ 26 ] = xx [ 14 ] * state [ 7 ] ; xx [ 27
] = 6.481054124408161e-6 ; xx [ 31 ] = xx [ 27 ] * state [ 7 ] ; xx [ 84 ] =
xx [ 25 ] ; xx [ 85 ] = xx [ 32 ] ; xx [ 86 ] = xx [ 61 ] ; xx [ 87 ] = xx [
6 ] ; xx [ 88 ] = xx [ 26 ] ; xx [ 89 ] = xx [ 31 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 47 ) , ( const pm_math_Vector3 * ) ( xx + 57 ) , (
const pm_math_Vector3 * ) ( xx + 75 ) , ( const pm_math_Vector3 * ) ( xx + 78
) , ( const pm_math_Transform3 * ) ( xx + 93 ) , ( const pm_math_Transform3 *
) ( xx + 37 ) , ( const pm_math_Transform3 * ) ( xx + 104 ) , ( const
pm_math_Transform3 * ) ( xx + 37 ) , ( const pm_math_SpatialVector * ) ( xx +
84 ) , NULL , 0 , 1 , xx [ 23 ] , xx [ 24 ] , xx [ 33 ] , xx [ 73 ] , xx [ 36
] , xx [ 74 ] , NULL , NULL , ( pm_math_SpatialVector * ) ( xx + 111 ) , NULL
) ; xx [ 23 ] = xx [ 81 ] - xx [ 111 ] ; xx [ 24 ] = xx [ 82 ] - xx [ 112 ] ;
xx [ 25 ] = xx [ 83 ] - xx [ 113 ] ; xx [ 32 ] = - xx [ 5 ] ; xx [ 33 ] = xx
[ 14 ] ; xx [ 34 ] = xx [ 27 ] ; xx [ 37 ] = xx [ 6 ] ; xx [ 38 ] = xx [ 26 ]
; xx [ 39 ] = xx [ 31 ] ; pm_math_Vector3_cross_ra ( xx + 62 , xx + 37 , xx +
40 ) ; xx [ 37 ] = xx [ 21 ] * xx [ 40 ] - xx [ 114 ] ; xx [ 38 ] = xx [ 21 ]
* xx [ 41 ] - xx [ 115 ] ; xx [ 39 ] = xx [ 21 ] * xx [ 42 ] - xx [ 116 ] ;
xx [ 40 ] = - 2.859869174936149e-3 ; xx [ 41 ] = 9.652797480286807e-9 ; xx [
42 ] = 1.479025598182316e-3 ; xx [ 1 ] = xx [ 4 ] * xx [ 103 ] ; xx [ 5 ] =
xx [ 4 ] * xx [ 101 ] ; xx [ 47 ] = ( xx [ 100 ] * xx [ 1 ] + xx [ 102 ] * xx
[ 5 ] ) * xx [ 3 ] ; xx [ 48 ] = xx [ 4 ] - ( xx [ 103 ] * xx [ 1 ] + xx [
101 ] * xx [ 5 ] ) * xx [ 3 ] ; xx [ 49 ] = xx [ 3 ] * ( xx [ 102 ] * xx [ 1
] - xx [ 100 ] * xx [ 5 ] ) ; logVector [ 0 ] = xx [ 0 ] * state [ 0 ] ;
logVector [ 1 ] = xx [ 0 ] * state [ 1 ] ; logVector [ 2 ] = xx [ 0 ] * state
[ 2 ] ; logVector [ 3 ] = xx [ 0 ] * state [ 3 ] ; logVector [ 4 ] = xx [ 0 ]
* state [ 4 ] ; logVector [ 5 ] = xx [ 0 ] * state [ 5 ] ; logVector [ 6 ] =
xx [ 0 ] * state [ 6 ] ; logVector [ 7 ] = xx [ 0 ] * state [ 7 ] ; logVector
[ 8 ] = - ( xx [ 7 ] * xx [ 0 ] ) ; logVector [ 9 ] = - ( ( xx [ 2 ] +
pm_math_Vector3_dot_ra ( xx + 8 , xx + 18 ) + pm_math_Vector3_dot_ra ( xx +
11 , xx + 28 ) ) * xx [ 0 ] ) ; logVector [ 10 ] = - ( ( (
pm_math_Vector3_dot_ra ( xx + 15 , xx + 54 ) + pm_math_Vector3_dot_ra ( xx +
50 , xx + 44 ) ) / xx [ 22 ] + pm_math_Vector3_dot_ra ( xx + 66 , xx + 69 ) )
* xx [ 0 ] ) ; logVector [ 11 ] = - ( ( ( pm_math_Vector3_dot_ra ( xx + 15 ,
xx + 23 ) + pm_math_Vector3_dot_ra ( xx + 32 , xx + 37 ) ) / xx [ 22 ] +
pm_math_Vector3_dot_ra ( xx + 40 , xx + 47 ) ) * xx [ 0 ] ) ; errorResult [ 0
] = xx [ 36 ] ; return NULL ; }
