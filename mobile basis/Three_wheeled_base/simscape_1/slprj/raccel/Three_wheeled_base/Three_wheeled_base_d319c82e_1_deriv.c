#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "Three_wheeled_base_d319c82e_1_geometries.h"
PmfMessageId Three_wheeled_base_d319c82e_1_compDerivs ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
deriv , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; boolean_T bb [ 1 ] ; int ii [ 1 ] ; double xx [ 116 ] ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector
; ( void ) input ; ( void ) inputDot ; ( void ) inputDdot ; ( void )
discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = - 0.5679676827817607 ; xx [ 1
] = - 0.5679674471672289 ; xx [ 2 ] = - 0.4212038651854126 ; xx [ 3 ] = -
0.4212042191463982 ; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * state [ 2 ] ; xx
[ 6 ] = 2.542173449526786e-8 ; xx [ 7 ] = sin ( xx [ 5 ] ) ; xx [ 8 ] =
2.138870869305975e-8 ; xx [ 9 ] = cos ( xx [ 5 ] ) ; xx [ 10 ] = - ( xx [ 6 ]
* xx [ 7 ] ) ; xx [ 11 ] = - xx [ 7 ] ; xx [ 12 ] = xx [ 8 ] * xx [ 7 ] ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 9 , xx + 13 ) ; xx [ 0 ] = xx [
16 ] * state [ 1 ] ; xx [ 1 ] = xx [ 14 ] * state [ 1 ] ; xx [ 2 ] = 2.0 ; xx
[ 3 ] = ( xx [ 13 ] * xx [ 0 ] + xx [ 15 ] * xx [ 1 ] ) * xx [ 2 ] ; xx [ 5 ]
= xx [ 6 ] * state [ 3 ] ; xx [ 7 ] = xx [ 3 ] - xx [ 5 ] ; xx [ 9 ] = state
[ 1 ] - ( xx [ 16 ] * xx [ 0 ] + xx [ 14 ] * xx [ 1 ] ) * xx [ 2 ] ; xx [ 10
] = xx [ 9 ] - state [ 3 ] ; xx [ 11 ] = xx [ 2 ] * ( xx [ 15 ] * xx [ 0 ] -
xx [ 13 ] * xx [ 1 ] ) ; xx [ 0 ] = xx [ 8 ] * state [ 3 ] ; xx [ 1 ] = xx [
11 ] + xx [ 0 ] ; xx [ 17 ] = xx [ 7 ] ; xx [ 18 ] = xx [ 10 ] ; xx [ 19 ] =
xx [ 1 ] ; xx [ 12 ] = 1.268339404649168e-6 ; xx [ 20 ] =
2.366149585536344e-6 ; xx [ 21 ] = 1.267821552890098e-6 ; xx [ 22 ] = xx [ 7
] * xx [ 12 ] ; xx [ 23 ] = xx [ 20 ] * xx [ 10 ] ; xx [ 24 ] = xx [ 1 ] * xx
[ 21 ] ; pm_math_Vector3_cross_ra ( xx + 17 , xx + 22 , xx + 25 ) ; xx [ 17 ]
= 3.068232209968291e-7 ; xx [ 18 ] = xx [ 4 ] * state [ 0 ] ; xx [ 19 ] = cos
( xx [ 18 ] ) ; xx [ 22 ] = 0.9999999999999529 ; xx [ 23 ] = sin ( xx [ 18 ]
) ; xx [ 18 ] = xx [ 17 ] * xx [ 19 ] + xx [ 22 ] * xx [ 23 ] ; xx [ 24 ] =
xx [ 17 ] * xx [ 23 ] - xx [ 22 ] * xx [ 19 ] ; xx [ 28 ] = - ( xx [ 14 ] *
xx [ 18 ] + xx [ 24 ] * xx [ 16 ] ) ; xx [ 29 ] = xx [ 13 ] * xx [ 18 ] - xx
[ 24 ] * xx [ 15 ] ; xx [ 30 ] = xx [ 24 ] * xx [ 14 ] - xx [ 16 ] * xx [ 18
] ; xx [ 31 ] = xx [ 24 ] * xx [ 13 ] + xx [ 15 ] * xx [ 18 ] ; xx [ 17 ] =
0.9891716071404441 ; xx [ 19 ] = - 8.713058275644413e-9 ; xx [ 22 ] =
0.1467635228086006 ; xx [ 23 ] = - 1.414277034896744e-8 ; xx [ 32 ] = xx [ 17
] ; xx [ 33 ] = xx [ 19 ] ; xx [ 34 ] = xx [ 22 ] ; xx [ 35 ] = xx [ 23 ] ;
pm_math_Quaternion_compose_ra ( xx + 28 , xx + 32 , xx + 36 ) ; xx [ 32 ] = -
1.708204283178074e-6 ; xx [ 33 ] = 9.176039230036941e-11 ; xx [ 34 ] =
7.508856643522622e-6 ; pm_math_Quaternion_xform_ra ( xx + 28 , xx + 32 , xx +
40 ) ; xx [ 28 ] = - 1.707759403564609e-6 ; xx [ 29 ] = 0.01750000009176084 ;
xx [ 30 ] = 7.508482339905939e-6 ; pm_math_Quaternion_xform_ra ( xx + 13 , xx
+ 28 , xx + 43 ) ; xx [ 28 ] = 1.073881273652661e-8 + xx [ 43 ] ; xx [ 29 ] =
0.01749999999999672 - xx [ 45 ] ; xx [ 30 ] = xx [ 24 ] * xx [ 28 ] + xx [ 29
] * xx [ 18 ] ; xx [ 31 ] = 0.04424348237409274 - xx [ 44 ] ; xx [ 35 ] =
0.03375651762590728 ; xx [ 43 ] = xx [ 36 ] ; xx [ 44 ] = xx [ 37 ] ; xx [ 45
] = xx [ 38 ] ; xx [ 46 ] = xx [ 39 ] ; xx [ 47 ] = xx [ 40 ] + xx [ 2 ] * xx
[ 24 ] * xx [ 30 ] - xx [ 28 ] + 0.1258411074140617 ; xx [ 48 ] = xx [ 41 ] +
xx [ 31 ] - ( xx [ 24 ] * xx [ 24 ] * xx [ 35 ] + xx [ 35 ] * xx [ 18 ] * xx
[ 18 ] ) * xx [ 2 ] - ( xx [ 24 ] * xx [ 24 ] * xx [ 31 ] + xx [ 31 ] * xx [
18 ] * xx [ 18 ] ) * xx [ 2 ] + 0.04070459988204377 ; xx [ 49 ] = xx [ 42 ] +
xx [ 29 ] - xx [ 2 ] * xx [ 30 ] * xx [ 18 ] + 0.4160000178629057 ; xx [ 30 ]
= 0.7071067811865476 ; xx [ 35 ] = 0.0 ; xx [ 36 ] = xx [ 30 ] ; xx [ 37 ] =
xx [ 30 ] ; xx [ 38 ] = xx [ 35 ] ; xx [ 39 ] = xx [ 35 ] ; xx [ 40 ] = xx [
35 ] ; xx [ 41 ] = - 0.095 ; xx [ 42 ] = xx [ 35 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
Three_wheeled_base_d319c82e_1_geometry_2 ( NULL ) ,
Three_wheeled_base_d319c82e_1_geometry_1 ( NULL ) , ( pm_math_Transform3 * )
( xx + 43 ) , ( pm_math_Transform3 * ) ( xx + 36 ) , xx + 30 , (
pm_math_Vector3 * ) ( xx + 50 ) , ( pm_math_Vector3 * ) ( xx + 53 ) , (
pm_math_Vector3 * ) ( xx + 56 ) , ( pm_math_Vector3 * ) ( xx + 59 ) ) ; xx [
62 ] = xx [ 17 ] ; xx [ 63 ] = xx [ 19 ] ; xx [ 64 ] = xx [ 22 ] ; xx [ 65 ]
= xx [ 23 ] ; xx [ 66 ] = xx [ 32 ] ; xx [ 67 ] = xx [ 33 ] ; xx [ 68 ] = xx
[ 34 ] ; xx [ 17 ] = xx [ 29 ] * state [ 1 ] ; xx [ 19 ] = xx [ 28 ] * state
[ 1 ] ; xx [ 22 ] = xx [ 15 ] * xx [ 19 ] ; xx [ 23 ] = xx [ 16 ] * xx [ 17 ]
- xx [ 14 ] * xx [ 19 ] ; xx [ 32 ] = xx [ 15 ] * xx [ 17 ] ; xx [ 69 ] = xx
[ 22 ] ; xx [ 70 ] = xx [ 23 ] ; xx [ 71 ] = - xx [ 32 ] ;
pm_math_Vector3_cross_ra ( xx + 14 , xx + 69 , xx + 72 ) ; xx [ 33 ] =
7.508856642310025e-6 ; xx [ 34 ] = xx [ 33 ] * state [ 3 ] ; xx [ 69 ] =
1.543518761068194e-13 ; xx [ 70 ] = xx [ 69 ] * state [ 3 ] ; xx [ 71 ] =
1.708204283920609e-6 ; xx [ 75 ] = xx [ 71 ] * state [ 3 ] ; xx [ 76 ] = xx [
7 ] ; xx [ 77 ] = xx [ 10 ] ; xx [ 78 ] = xx [ 1 ] ; xx [ 79 ] = xx [ 17 ] +
( xx [ 72 ] - xx [ 13 ] * xx [ 22 ] ) * xx [ 2 ] + xx [ 34 ] ; xx [ 80 ] = xx
[ 2 ] * ( xx [ 73 ] - xx [ 23 ] * xx [ 13 ] ) - xx [ 70 ] ; xx [ 81 ] = ( xx
[ 13 ] * xx [ 32 ] + xx [ 74 ] ) * xx [ 2 ] + xx [ 19 ] + xx [ 75 ] ; xx [ 22
] = 1.0e6 ; xx [ 23 ] = 1000.0 ; xx [ 32 ] = 1.0e-4 ; xx [ 72 ] = 0.3 ; xx [
73 ] = 7.556715761609653e-4 ; sm_core_compiler_computeContactWrenches ( 0 , 1
, bb [ 0 ] , xx + 30 , ( const pm_math_Vector3 * ) ( xx + 50 ) , ( const
pm_math_Vector3 * ) ( xx + 53 ) , ( const pm_math_Vector3 * ) ( xx + 56 ) , (
const pm_math_Vector3 * ) ( xx + 59 ) , ( const pm_math_Transform3 * ) ( xx +
62 ) , ( const pm_math_Transform3 * ) ( xx + 36 ) , ( const
pm_math_Transform3 * ) ( xx + 43 ) , ( const pm_math_Transform3 * ) ( xx + 36
) , ( const pm_math_SpatialVector * ) ( xx + 76 ) , NULL , 0 , 1 , xx [ 22 ]
, xx [ 23 ] , xx [ 32 ] , xx [ 72 ] , xx [ 35 ] , xx [ 73 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 82 ) , NULL ) ; xx [ 43 ] = xx [ 3 ] ; xx [
44 ] = xx [ 9 ] ; xx [ 45 ] = xx [ 11 ] ; xx [ 46 ] = - xx [ 5 ] ; xx [ 47 ]
= - state [ 3 ] ; xx [ 48 ] = xx [ 0 ] ; pm_math_Vector3_cross_ra ( xx + 43 ,
xx + 46 , xx + 49 ) ; xx [ 0 ] = xx [ 25 ] - xx [ 82 ] + xx [ 12 ] * xx [ 49
] ; xx [ 5 ] = xx [ 27 ] - xx [ 84 ] + xx [ 21 ] * xx [ 51 ] ; xx [ 12 ] = xx
[ 26 ] - xx [ 83 ] + xx [ 20 ] * xx [ 50 ] ; xx [ 25 ] = xx [ 33 ] ; xx [ 26
] = - xx [ 69 ] ; xx [ 27 ] = xx [ 71 ] ; xx [ 43 ] = xx [ 3 ] + xx [ 7 ] ;
xx [ 44 ] = xx [ 9 ] + xx [ 10 ] ; xx [ 45 ] = xx [ 11 ] + xx [ 1 ] ; xx [ 9
] = xx [ 34 ] ; xx [ 10 ] = - xx [ 70 ] ; xx [ 11 ] = xx [ 75 ] ;
pm_math_Vector3_cross_ra ( xx + 43 , xx + 9 , xx + 46 ) ; xx [ 1 ] = xx [ 17
] * state [ 1 ] ; xx [ 3 ] = xx [ 15 ] * xx [ 1 ] ; xx [ 7 ] = xx [ 19 ] *
state [ 1 ] ; xx [ 9 ] = xx [ 14 ] * xx [ 1 ] + xx [ 16 ] * xx [ 7 ] ; xx [
10 ] = xx [ 15 ] * xx [ 7 ] ; xx [ 43 ] = - xx [ 3 ] ; xx [ 44 ] = xx [ 9 ] ;
xx [ 45 ] = - xx [ 10 ] ; pm_math_Vector3_cross_ra ( xx + 14 , xx + 43 , xx +
49 ) ; xx [ 11 ] = 9.919863353893048e-3 ; xx [ 17 ] = ( xx [ 46 ] + ( xx [ 13
] * xx [ 3 ] + xx [ 49 ] ) * xx [ 2 ] + xx [ 7 ] ) * xx [ 11 ] - xx [ 85 ] ;
xx [ 3 ] = ( xx [ 47 ] + xx [ 2 ] * ( xx [ 50 ] - xx [ 13 ] * xx [ 9 ] ) ) *
xx [ 11 ] - xx [ 86 ] ; xx [ 7 ] = ( xx [ 48 ] + xx [ 2 ] * ( xx [ 51 ] + xx
[ 13 ] * xx [ 10 ] ) - xx [ 1 ] ) * xx [ 11 ] - xx [ 87 ] ; xx [ 43 ] = xx [
17 ] ; xx [ 44 ] = xx [ 3 ] ; xx [ 45 ] = xx [ 7 ] ; xx [ 1 ] = ( xx [ 5 ] *
xx [ 8 ] - ( xx [ 0 ] * xx [ 6 ] + xx [ 12 ] ) + pm_math_Vector3_dot_ra ( xx
+ 25 , xx + 43 ) ) / 2.36615017379307e-6 ; xx [ 8 ] = xx [ 0 ] +
3.224338759487726e-14 * xx [ 1 ] ; xx [ 9 ] = xx [ 12 ] + xx [ 20 ] * xx [ 1
] ; xx [ 10 ] = xx [ 5 ] - 2.711706586954896e-14 * xx [ 1 ] ;
pm_math_Quaternion_xform_ra ( xx + 13 , xx + 8 , xx + 19 ) ; xx [ 8 ] = - xx
[ 28 ] ; xx [ 9 ] = xx [ 31 ] ; xx [ 10 ] = xx [ 29 ] ; xx [ 25 ] = xx [ 17 ]
- 7.448683183568762e-8 * xx [ 1 ] ; xx [ 26 ] = xx [ 3 ] +
1.531149519396678e-15 * xx [ 1 ] ; xx [ 27 ] = xx [ 7 ] -
1.694515307702716e-8 * xx [ 1 ] ; pm_math_Quaternion_xform_ra ( xx + 13 , xx
+ 25 , xx + 5 ) ; pm_math_Vector3_cross_ra ( xx + 8 , xx + 5 , xx + 25 ) ; xx
[ 0 ] = xx [ 13 ] * xx [ 13 ] ; xx [ 3 ] = 1.0 ; xx [ 5 ] = xx [ 14 ] * xx [
15 ] ; xx [ 6 ] = xx [ 13 ] * xx [ 16 ] ; xx [ 7 ] = xx [ 14 ] * xx [ 16 ] ;
xx [ 12 ] = xx [ 13 ] * xx [ 15 ] ; xx [ 17 ] = xx [ 15 ] * xx [ 16 ] ; xx [
19 ] = xx [ 13 ] * xx [ 14 ] ; xx [ 43 ] = ( xx [ 0 ] + xx [ 14 ] * xx [ 14 ]
) * xx [ 2 ] - xx [ 3 ] ; xx [ 44 ] = xx [ 2 ] * ( xx [ 5 ] - xx [ 6 ] ) ; xx
[ 45 ] = ( xx [ 7 ] + xx [ 12 ] ) * xx [ 2 ] ; xx [ 46 ] = ( xx [ 5 ] + xx [
6 ] ) * xx [ 2 ] ; xx [ 47 ] = ( xx [ 0 ] + xx [ 15 ] * xx [ 15 ] ) * xx [ 2
] - xx [ 3 ] ; xx [ 48 ] = xx [ 2 ] * ( xx [ 17 ] - xx [ 19 ] ) ; xx [ 49 ] =
xx [ 2 ] * ( xx [ 7 ] - xx [ 12 ] ) ; xx [ 50 ] = ( xx [ 17 ] + xx [ 19 ] ) *
xx [ 2 ] ; xx [ 51 ] = ( xx [ 0 ] + xx [ 16 ] * xx [ 16 ] ) * xx [ 2 ] - xx [
3 ] ; xx [ 0 ] = - 3.224337957873786e-14 ; xx [ 3 ] = 3.695226427095534e-22 ;
xx [ 5 ] = 2.711705912788202e-14 ; xx [ 52 ] = 1.268339404649168e-6 ; xx [ 53
] = xx [ 0 ] ; xx [ 54 ] = xx [ 3 ] ; xx [ 55 ] = xx [ 0 ] ; xx [ 56 ] =
5.882565798476344e-13 ; xx [ 57 ] = xx [ 5 ] ; xx [ 58 ] = xx [ 3 ] ; xx [ 59
] = xx [ 5 ] ; xx [ 60 ] = 1.267821552890098e-6 ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 52 , xx + 43 , xx + 61 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 43 , xx + 61 , xx + 52 ) ; xx [ 57 ] =
1.015027624278998e-15 ; xx [ 58 ] = - 2.086488337317794e-23 ; xx [ 59 ] =
2.309105924757319e-16 ; xx [ 60 ] = 7.448681331726037e-8 ; xx [ 61 ] = -
1.531149138732334e-15 ; xx [ 62 ] = 1.694514886423442e-8 ; xx [ 63 ] = -
8.536500969692902e-16 ; xx [ 64 ] = 1.754761081248221e-23 ; xx [ 65 ] = -
1.941985074526048e-16 ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 57 , xx
+ 43 , xx + 74 ) ; pm_math_Matrix3x3_compose_ra ( xx + 43 , xx + 74 , xx + 57
) ; pm_math_Matrix3x3_postCross_ra ( xx + 57 , xx + 8 , xx + 74 ) ; xx [ 0 ]
= 4.820086147945758e-17 ; xx [ 3 ] = - 5.334364579468534e-10 ; xx [ 5 ] =
1.096530696883076e-17 ; xx [ 62 ] = 9.919861009034223e-3 ; xx [ 63 ] = xx [ 0
] ; xx [ 64 ] = xx [ 3 ] ; xx [ 65 ] = xx [ 0 ] ; xx [ 66 ] = xx [ 11 ] ; xx
[ 67 ] = xx [ 5 ] ; xx [ 68 ] = xx [ 3 ] ; xx [ 69 ] = xx [ 5 ] ; xx [ 70 ] =
9.919863232540559e-3 ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 62 , xx +
43 , xx + 79 ) ; pm_math_Matrix3x3_compose_ra ( xx + 43 , xx + 79 , xx + 62 )
; pm_math_Matrix3x3_postCross_ra ( xx + 62 , xx + 8 , xx + 43 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 43 , xx + 8 , xx + 62 ) ; xx [ 0 ] =
2.366227466357088e-6 + xx [ 56 ] - xx [ 78 ] - xx [ 78 ] - xx [ 66 ] ; ii [ 0
] = factorSymmetricPosDef ( xx + 0 , 1 , xx + 3 ) ; if ( ii [ 0 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'Three_wheeled_base/Revolute' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 3 ] = 9.806649999999999 ; xx [ 5 ] = xx [ 3 ] - ( xx [
24 ] * xx [ 24 ] * xx [ 3 ] + xx [ 3 ] * xx [ 18 ] * xx [ 18 ] ) * xx [ 2 ] ;
xx [ 6 ] = ( xx [ 20 ] + xx [ 26 ] ) / xx [ 0 ] + ( xx [ 61 ] - xx [ 47 ] ) /
xx [ 0 ] * xx [ 5 ] ; xx [ 7 ] = - 1.362694048416602e-8 ; xx [ 8 ] = -
0.9999997513865634 ; xx [ 9 ] = 1.146041623642121e-8 ; xx [ 0 ] = xx [ 6 ] *
xx [ 16 ] ; xx [ 10 ] = xx [ 6 ] * xx [ 14 ] ; xx [ 17 ] = - ( ( xx [ 13 ] *
xx [ 0 ] + xx [ 15 ] * xx [ 10 ] ) * xx [ 2 ] ) ; xx [ 18 ] = ( xx [ 16 ] *
xx [ 0 ] + xx [ 14 ] * xx [ 10 ] ) * xx [ 2 ] - xx [ 6 ] ; xx [ 19 ] = xx [ 2
] * ( xx [ 13 ] * xx [ 10 ] - xx [ 15 ] * xx [ 0 ] ) ; xx [ 10 ] =
0.03148017934816077 ; xx [ 11 ] = - 6.471058077189413e-10 ; xx [ 12 ] =
7.161486732629121e-3 ; xx [ 24 ] = - ( xx [ 6 ] * xx [ 29 ] ) ; xx [ 25 ] =
xx [ 5 ] ; xx [ 26 ] = - ( xx [ 6 ] * xx [ 28 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 13 , xx + 24 , xx + 27 ) ; xx [ 0 ]
= 4.0383813471212e-5 ; xx [ 5 ] = 0.9999999966241307 ; xx [ 13 ] =
7.156037461086839e-5 ; xx [ 14 ] = xx [ 0 ] ; xx [ 15 ] = xx [ 5 ] ; xx [ 16
] = xx [ 13 ] ; xx [ 20 ] = xx [ 0 ] * state [ 5 ] ; xx [ 21 ] = xx [ 5 ] *
state [ 5 ] ; xx [ 24 ] = xx [ 13 ] * state [ 5 ] ; xx [ 43 ] = xx [ 20 ] ;
xx [ 44 ] = xx [ 21 ] ; xx [ 45 ] = xx [ 24 ] ; xx [ 25 ] =
5.611953566163286e-8 ; xx [ 26 ] = 2.529365082397464e-3 ; xx [ 30 ] =
9.939784279393993e-8 ; xx [ 46 ] = xx [ 25 ] * state [ 5 ] ; xx [ 47 ] = xx [
26 ] * state [ 5 ] ; xx [ 48 ] = xx [ 30 ] * state [ 5 ] ;
pm_math_Vector3_cross_ra ( xx + 43 , xx + 46 , xx + 49 ) ; xx [ 31 ] =
1.555840337210809e-3 ; xx [ 33 ] = 0.5932479809203707 ; xx [ 34 ] =
0.5944693556140905 ; xx [ 46 ] = 0.3847863688724822 ; xx [ 47 ] =
0.3828870181915315 ; xx [ 52 ] = xx [ 33 ] ; xx [ 53 ] = - xx [ 34 ] ; xx [
54 ] = xx [ 46 ] ; xx [ 55 ] = - xx [ 47 ] ; xx [ 48 ] = xx [ 4 ] * state [ 4
] ; xx [ 56 ] = sin ( xx [ 48 ] ) ; xx [ 57 ] = cos ( xx [ 48 ] ) ; xx [ 58 ]
= xx [ 0 ] * xx [ 56 ] ; xx [ 59 ] = xx [ 5 ] * xx [ 56 ] ; xx [ 60 ] = xx [
13 ] * xx [ 56 ] ; pm_math_Quaternion_compose_ra ( xx + 52 , xx + 57 , xx +
61 ) ; xx [ 48 ] = 0.9999987896796901 ; xx [ 52 ] = - ( xx [ 31 ] * xx [ 64 ]
- xx [ 48 ] * xx [ 62 ] ) ; xx [ 53 ] = - ( xx [ 48 ] * xx [ 61 ] + xx [ 31 ]
* xx [ 63 ] ) ; xx [ 54 ] = xx [ 31 ] * xx [ 62 ] + xx [ 48 ] * xx [ 64 ] ;
xx [ 55 ] = xx [ 31 ] * xx [ 61 ] - xx [ 48 ] * xx [ 63 ] ; xx [ 56 ] =
0.9776966061498937 ; xx [ 57 ] = 3.922291740543114e-5 ; xx [ 58 ] =
0.2100222479525564 ; xx [ 59 ] = - 1.222692333764024e-5 ;
pm_math_Quaternion_compose_ra ( xx + 52 , xx + 56 , xx + 65 ) ; xx [ 60 ] =
1.92368824894706e-6 ; xx [ 69 ] = - 0.01203078088091823 ; xx [ 70 ] =
3.798194760894296e-6 ; xx [ 74 ] = xx [ 60 ] ; xx [ 75 ] = xx [ 69 ] ; xx [
76 ] = xx [ 70 ] ; pm_math_Quaternion_xform_ra ( xx + 52 , xx + 74 , xx + 77
) ; xx [ 52 ] = 0.02226208232013789 ; xx [ 53 ] = 7.38008192922028e-6 ; xx [
54 ] = xx [ 52 ] ; xx [ 55 ] = 1.412496002194259e-5 ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 53 , xx + 80 ) ; xx [ 53 ] =
0.01530975760392998 - xx [ 80 ] ; xx [ 54 ] = 0.03864145797403479 - xx [ 82 ]
; xx [ 55 ] = xx [ 31 ] * xx [ 53 ] + xx [ 48 ] * xx [ 54 ] ; xx [ 82 ] = xx
[ 65 ] ; xx [ 83 ] = xx [ 66 ] ; xx [ 84 ] = xx [ 67 ] ; xx [ 85 ] = xx [ 68
] ; xx [ 86 ] = xx [ 77 ] + xx [ 53 ] - 3.111680674421618e-3 * xx [ 55 ] -
0.08453348257393707 ; xx [ 87 ] = xx [ 78 ] + ( 2.420639154892244e-6 * xx [
81 ] + 0.9999975793608451 * xx [ 81 ] ) * xx [ 2 ] - xx [ 81 ] -
0.01105191774386585 ; xx [ 88 ] = xx [ 79 ] + xx [ 54 ] - 1.99999757935938 *
xx [ 55 ] + 0.3197725282326799 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
Three_wheeled_base_d319c82e_1_geometry_0 ( NULL ) ,
Three_wheeled_base_d319c82e_1_geometry_1 ( NULL ) , ( pm_math_Transform3 * )
( xx + 82 ) , ( pm_math_Transform3 * ) ( xx + 36 ) , xx + 31 , (
pm_math_Vector3 * ) ( xx + 53 ) , ( pm_math_Vector3 * ) ( xx + 65 ) , (
pm_math_Vector3 * ) ( xx + 77 ) , ( pm_math_Vector3 * ) ( xx + 89 ) ) ; xx [
92 ] = xx [ 56 ] ; xx [ 93 ] = xx [ 57 ] ; xx [ 94 ] = xx [ 58 ] ; xx [ 95 ]
= xx [ 59 ] ; xx [ 96 ] = xx [ 60 ] ; xx [ 97 ] = xx [ 69 ] ; xx [ 98 ] = xx
[ 70 ] ; xx [ 60 ] = 1.253187702381151e-5 ; xx [ 68 ] = - ( xx [ 60 ] * state
[ 5 ] ) ; xx [ 69 ] = 4.22983233005524e-11 ; xx [ 70 ] = xx [ 69 ] * state [
5 ] ; xx [ 71 ] = 6.481054124408873e-6 ; xx [ 80 ] = xx [ 71 ] * state [ 5 ]
; xx [ 99 ] = xx [ 20 ] ; xx [ 100 ] = xx [ 21 ] ; xx [ 101 ] = xx [ 24 ] ;
xx [ 102 ] = xx [ 68 ] ; xx [ 103 ] = xx [ 70 ] ; xx [ 104 ] = xx [ 80 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 31 , (
const pm_math_Vector3 * ) ( xx + 53 ) , ( const pm_math_Vector3 * ) ( xx + 65
) , ( const pm_math_Vector3 * ) ( xx + 77 ) , ( const pm_math_Vector3 * ) (
xx + 89 ) , ( const pm_math_Transform3 * ) ( xx + 92 ) , ( const
pm_math_Transform3 * ) ( xx + 36 ) , ( const pm_math_Transform3 * ) ( xx + 82
) , ( const pm_math_Transform3 * ) ( xx + 36 ) , ( const
pm_math_SpatialVector * ) ( xx + 99 ) , NULL , 0 , 1 , xx [ 22 ] , xx [ 23 ]
, xx [ 32 ] , xx [ 72 ] , xx [ 35 ] , xx [ 73 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 105 ) , NULL ) ; xx [ 53 ] = xx [ 49 ] - xx
[ 105 ] ; xx [ 54 ] = xx [ 50 ] - xx [ 106 ] ; xx [ 55 ] = xx [ 51 ] - xx [
107 ] ; xx [ 49 ] = - xx [ 60 ] ; xx [ 50 ] = xx [ 69 ] ; xx [ 51 ] = xx [ 71
] ; xx [ 20 ] = 0.5772202798158926 ; xx [ 65 ] = xx [ 68 ] ; xx [ 66 ] = xx [
70 ] ; xx [ 67 ] = xx [ 80 ] ; pm_math_Vector3_cross_ra ( xx + 43 , xx + 65 ,
xx + 68 ) ; xx [ 43 ] = xx [ 20 ] * xx [ 68 ] - xx [ 108 ] ; xx [ 44 ] = xx [
20 ] * xx [ 69 ] - xx [ 109 ] ; xx [ 45 ] = xx [ 20 ] * xx [ 70 ] - xx [ 110
] ; xx [ 21 ] = 2.52936519813478e-3 ; xx [ 65 ] = - 2.85986917493651e-3 ; xx
[ 66 ] = 9.652797480289734e-9 ; xx [ 67 ] = 1.479025598182478e-3 ; xx [ 24 ]
= xx [ 3 ] * xx [ 64 ] ; xx [ 31 ] = xx [ 3 ] * xx [ 62 ] ; xx [ 68 ] = - ( (
xx [ 61 ] * xx [ 24 ] + xx [ 63 ] * xx [ 31 ] ) * xx [ 2 ] ) ; xx [ 69 ] = (
xx [ 64 ] * xx [ 24 ] + xx [ 62 ] * xx [ 31 ] ) * xx [ 2 ] - xx [ 3 ] ; xx [
70 ] = xx [ 2 ] * ( xx [ 61 ] * xx [ 31 ] - xx [ 63 ] * xx [ 24 ] ) ; xx [ 24
] = xx [ 0 ] * state [ 7 ] ; xx [ 31 ] = xx [ 5 ] * state [ 7 ] ; xx [ 60 ] =
xx [ 13 ] * state [ 7 ] ; xx [ 61 ] = xx [ 24 ] ; xx [ 62 ] = xx [ 31 ] ; xx
[ 63 ] = xx [ 60 ] ; xx [ 77 ] = xx [ 25 ] * state [ 7 ] ; xx [ 78 ] = xx [
26 ] * state [ 7 ] ; xx [ 79 ] = xx [ 30 ] * state [ 7 ] ;
pm_math_Vector3_cross_ra ( xx + 61 , xx + 77 , xx + 80 ) ; xx [ 83 ] = - xx [
33 ] ; xx [ 84 ] = xx [ 34 ] ; xx [ 85 ] = - xx [ 46 ] ; xx [ 86 ] = xx [ 47
] ; xx [ 25 ] = xx [ 4 ] * state [ 6 ] ; xx [ 4 ] = sin ( xx [ 25 ] ) ; xx [
87 ] = cos ( xx [ 25 ] ) ; xx [ 88 ] = xx [ 0 ] * xx [ 4 ] ; xx [ 89 ] = xx [
5 ] * xx [ 4 ] ; xx [ 90 ] = xx [ 13 ] * xx [ 4 ] ;
pm_math_Quaternion_compose_ra ( xx + 83 , xx + 87 , xx + 99 ) ; xx [ 0 ] =
1.55584033721079e-3 ; xx [ 83 ] = - ( xx [ 48 ] * xx [ 99 ] + xx [ 0 ] * xx [
101 ] ) ; xx [ 84 ] = xx [ 0 ] * xx [ 102 ] - xx [ 48 ] * xx [ 100 ] ; xx [
85 ] = xx [ 0 ] * xx [ 99 ] - xx [ 48 ] * xx [ 101 ] ; xx [ 86 ] = - ( xx [
48 ] * xx [ 102 ] + xx [ 0 ] * xx [ 100 ] ) ; pm_math_Quaternion_compose_ra (
xx + 83 , xx + 56 , xx + 87 ) ; pm_math_Quaternion_xform_ra ( xx + 83 , xx +
74 , xx + 56 ) ; xx [ 74 ] = 7.380081929219568e-6 ; xx [ 75 ] = xx [ 52 ] ;
xx [ 76 ] = 1.4124960021941e-5 ; pm_math_Quaternion_xform_ra ( xx + 99 , xx +
74 , xx + 77 ) ; xx [ 4 ] = 0.01530975760392997 - xx [ 77 ] ; xx [ 5 ] =
0.0386414579740348 - xx [ 79 ] ; xx [ 13 ] = xx [ 0 ] * xx [ 5 ] ; xx [ 25 ]
= xx [ 0 ] * xx [ 4 ] ; xx [ 103 ] = xx [ 87 ] ; xx [ 104 ] = xx [ 88 ] ; xx
[ 105 ] = xx [ 89 ] ; xx [ 106 ] = xx [ 90 ] ; xx [ 107 ] = xx [ 56 ] + xx [
4 ] - xx [ 2 ] * ( xx [ 48 ] * xx [ 13 ] + xx [ 0 ] * xx [ 25 ] ) -
0.08601643205482842 ; xx [ 108 ] = xx [ 57 ] - ( 0.0110519177438635 + xx [ 78
] ) ; xx [ 109 ] = xx [ 58 ] + xx [ 5 ] - ( xx [ 0 ] * xx [ 13 ] - xx [ 48 ]
* xx [ 25 ] ) * xx [ 2 ] + 0.51222747176732 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
Three_wheeled_base_d319c82e_1_geometry_0 ( NULL ) ,
Three_wheeled_base_d319c82e_1_geometry_1 ( NULL ) , ( pm_math_Transform3 * )
( xx + 103 ) , ( pm_math_Transform3 * ) ( xx + 36 ) , xx + 0 , (
pm_math_Vector3 * ) ( xx + 46 ) , ( pm_math_Vector3 * ) ( xx + 56 ) , (
pm_math_Vector3 * ) ( xx + 74 ) , ( pm_math_Vector3 * ) ( xx + 77 ) ) ; xx [
4 ] = 1.253187702380993e-5 ; xx [ 5 ] = - ( xx [ 4 ] * state [ 7 ] ) ; xx [
13 ] = 4.229832330053958e-11 ; xx [ 25 ] = xx [ 13 ] * state [ 7 ] ; xx [ 26
] = 6.481054124408161e-6 ; xx [ 30 ] = xx [ 26 ] * state [ 7 ] ; xx [ 83 ] =
xx [ 24 ] ; xx [ 84 ] = xx [ 31 ] ; xx [ 85 ] = xx [ 60 ] ; xx [ 86 ] = xx [
5 ] ; xx [ 87 ] = xx [ 25 ] ; xx [ 88 ] = xx [ 30 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , bb [ 0 ] , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 46 ) , ( const pm_math_Vector3 * ) ( xx + 56 ) , (
const pm_math_Vector3 * ) ( xx + 74 ) , ( const pm_math_Vector3 * ) ( xx + 77
) , ( const pm_math_Transform3 * ) ( xx + 92 ) , ( const pm_math_Transform3 *
) ( xx + 36 ) , ( const pm_math_Transform3 * ) ( xx + 103 ) , ( const
pm_math_Transform3 * ) ( xx + 36 ) , ( const pm_math_SpatialVector * ) ( xx +
83 ) , NULL , 0 , 1 , xx [ 22 ] , xx [ 23 ] , xx [ 32 ] , xx [ 72 ] , xx [ 35
] , xx [ 73 ] , NULL , NULL , ( pm_math_SpatialVector * ) ( xx + 110 ) , NULL
) ; xx [ 22 ] = xx [ 80 ] - xx [ 110 ] ; xx [ 23 ] = xx [ 81 ] - xx [ 111 ] ;
xx [ 24 ] = xx [ 82 ] - xx [ 112 ] ; xx [ 31 ] = - xx [ 4 ] ; xx [ 32 ] = xx
[ 13 ] ; xx [ 33 ] = xx [ 26 ] ; xx [ 36 ] = xx [ 5 ] ; xx [ 37 ] = xx [ 25 ]
; xx [ 38 ] = xx [ 30 ] ; pm_math_Vector3_cross_ra ( xx + 61 , xx + 36 , xx +
39 ) ; xx [ 36 ] = xx [ 20 ] * xx [ 39 ] - xx [ 113 ] ; xx [ 37 ] = xx [ 20 ]
* xx [ 40 ] - xx [ 114 ] ; xx [ 38 ] = xx [ 20 ] * xx [ 41 ] - xx [ 115 ] ;
xx [ 39 ] = - 2.859869174936149e-3 ; xx [ 40 ] = 9.652797480286807e-9 ; xx [
41 ] = 1.479025598182316e-3 ; xx [ 0 ] = xx [ 3 ] * xx [ 102 ] ; xx [ 4 ] =
xx [ 3 ] * xx [ 100 ] ; xx [ 46 ] = ( xx [ 99 ] * xx [ 0 ] + xx [ 101 ] * xx
[ 4 ] ) * xx [ 2 ] ; xx [ 47 ] = xx [ 3 ] - ( xx [ 102 ] * xx [ 0 ] + xx [
100 ] * xx [ 4 ] ) * xx [ 2 ] ; xx [ 48 ] = xx [ 2 ] * ( xx [ 101 ] * xx [ 0
] - xx [ 99 ] * xx [ 4 ] ) ; deriv [ 0 ] = state [ 1 ] ; deriv [ 1 ] = - xx [
6 ] ; deriv [ 2 ] = state [ 3 ] ; deriv [ 3 ] = - ( xx [ 1 ] +
pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx +
10 , xx + 27 ) ) ; deriv [ 4 ] = state [ 5 ] ; deriv [ 5 ] = - ( (
pm_math_Vector3_dot_ra ( xx + 14 , xx + 53 ) + pm_math_Vector3_dot_ra ( xx +
49 , xx + 43 ) ) / xx [ 21 ] + pm_math_Vector3_dot_ra ( xx + 65 , xx + 68 ) )
; deriv [ 6 ] = state [ 7 ] ; deriv [ 7 ] = - ( ( pm_math_Vector3_dot_ra ( xx
+ 14 , xx + 22 ) + pm_math_Vector3_dot_ra ( xx + 31 , xx + 36 ) ) / xx [ 21 ]
+ pm_math_Vector3_dot_ra ( xx + 39 , xx + 46 ) ) ; errorResult [ 0 ] = xx [
35 ] ; return NULL ; } PmfMessageId
Three_wheeled_base_d319c82e_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 1 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0e-8 ; bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [
0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx [ 0 ] ; bounds [ 4 ] = xx [
0 ] ; bounds [ 5 ] = xx [ 0 ] ; bounds [ 6 ] = xx [ 0 ] ; bounds [ 7 ] = xx [
0 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; } PmfMessageId
Three_wheeled_base_d319c82e_1_numJacPerturbHiBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0 ; xx [ 1 ] = + pmf_get_inf ( ) ; bounds [ 0 ] = xx
[ 0 ] ; bounds [ 1 ] = xx [ 1 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx
[ 1 ] ; bounds [ 4 ] = xx [ 0 ] ; bounds [ 5 ] = xx [ 1 ] ; bounds [ 6 ] = xx
[ 0 ] ; bounds [ 7 ] = xx [ 1 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; }
