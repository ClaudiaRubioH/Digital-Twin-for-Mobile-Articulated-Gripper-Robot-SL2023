#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void Three_wheeled_base_d319c82e_1_setTargets ( const
RuntimeDerivedValuesBundle * rtdv , CTarget * targets ) { ( void ) rtdv ; (
void ) targets ; } void Three_wheeled_base_d319c82e_1_resetAsmStateVector (
const void * mech , double * state ) { double xx [ 1 ] ; ( void ) mech ; xx [
0 ] = 0.0 ; state [ 0 ] = xx [ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] =
xx [ 0 ] ; state [ 3 ] = xx [ 0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx
[ 0 ] ; state [ 6 ] = xx [ 0 ] ; state [ 7 ] = xx [ 0 ] ; } void
Three_wheeled_base_d319c82e_1_initializeTrackedAngleState ( const void * mech
, const RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const
double * motionData , double * state ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void )
mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector
; ( void ) motionData ; } void
Three_wheeled_base_d319c82e_1_computeDiscreteState ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , double * state ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ;
} void Three_wheeled_base_d319c82e_1_adjustPosition ( const void * mech ,
const double * dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] =
state [ 0 ] + dofDeltas [ 0 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 1 ] ;
state [ 4 ] = state [ 4 ] + dofDeltas [ 2 ] ; state [ 6 ] = state [ 6 ] +
dofDeltas [ 3 ] ; } static void perturbAsmJointPrimitiveState_0_0 ( double
mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_0v ( double mag , double * state ) { state [
0 ] = state [ 0 ] + mag ; state [ 1 ] = state [ 1 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_1_0 ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; } static void
perturbAsmJointPrimitiveState_1_0v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 4 ] = state [ 4 ] + mag ; } static void
perturbAsmJointPrimitiveState_3_0v ( double mag , double * state ) { state [
4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_5_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbAsmJointPrimitiveState_5_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } void
Three_wheeled_base_d319c82e_1_perturbAsmJointPrimitiveState ( const void *
mech , size_t stageIdx , size_t primIdx , double mag , boolean_T
doPerturbVelocity , double * state ) { ( void ) mech ; ( void ) stageIdx ; (
void ) primIdx ; ( void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ;
switch ( ( stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) {
case 0 : perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 12 :
perturbAsmJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbAsmJointPrimitiveState_1_0v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; case 60 :
perturbAsmJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbAsmJointPrimitiveState_5_0v ( mag , state ) ; break ; } } void
Three_wheeled_base_d319c82e_1_computePosDofBlendMatrix ( const void * mech ,
size_t stageIdx , size_t primIdx , const double * state , int partialType ,
double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx *
6 + primIdx ) ) { } } void
Three_wheeled_base_d319c82e_1_computeVelDofBlendMatrix ( const void * mech ,
size_t stageIdx , size_t primIdx , const double * state , int partialType ,
double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx *
6 + primIdx ) ) { } } void
Three_wheeled_base_d319c82e_1_projectPartiallyTargetedPos ( const void * mech
, size_t stageIdx , size_t primIdx , const double * origState , int
partialType , double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void )
primIdx ; ( void ) origState ; ( void ) partialType ; ( void ) state ; switch
( ( stageIdx * 6 + primIdx ) ) { } } void
Three_wheeled_base_d319c82e_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 63 ] ; ( void ) mech ; ( void
) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 3.068232209968291e-7 ;
xx [ 2 ] = 0.5 ; xx [ 3 ] = xx [ 2 ] * state [ 0 ] ; xx [ 4 ] = cos ( xx [ 3
] ) ; xx [ 5 ] = 0.9999999999999529 ; xx [ 6 ] = sin ( xx [ 3 ] ) ; xx [ 3 ]
= xx [ 1 ] * xx [ 4 ] + xx [ 5 ] * xx [ 6 ] ; xx [ 7 ] = xx [ 1 ] * xx [ 6 ]
- xx [ 5 ] * xx [ 4 ] ; xx [ 1 ] = 0.1258411074140617 ; xx [ 4 ] =
6.948082256136495e-3 ; xx [ 5 ] = 0.03375651762590728 ; xx [ 6 ] = 2.0 ; xx [
8 ] = ( xx [ 7 ] * xx [ 7 ] * xx [ 5 ] + xx [ 5 ] * xx [ 3 ] * xx [ 3 ] ) *
xx [ 6 ] - xx [ 5 ] ; xx [ 5 ] = 0.4160000178629057 ; xx [ 9 ] = -
0.5679676827817607 ; xx [ 10 ] = - 0.5679674471672289 ; xx [ 11 ] = -
0.4212038651854126 ; xx [ 12 ] = - 0.4212042191463982 ; xx [ 13 ] = xx [ 2 ]
* state [ 2 ] ; xx [ 14 ] = 2.542173449526786e-8 ; xx [ 15 ] = sin ( xx [ 13
] ) ; xx [ 16 ] = 2.138870869305975e-8 ; xx [ 17 ] = cos ( xx [ 13 ] ) ; xx [
18 ] = - ( xx [ 14 ] * xx [ 15 ] ) ; xx [ 19 ] = - xx [ 15 ] ; xx [ 20 ] = xx
[ 16 ] * xx [ 15 ] ; pm_math_Quaternion_compose_ra ( xx + 9 , xx + 17 , xx +
21 ) ; xx [ 9 ] = - 1.707759403564609e-6 ; xx [ 10 ] = 0.01750000009176084 ;
xx [ 11 ] = 7.508482339905939e-6 ; pm_math_Quaternion_xform_ra ( xx + 21 , xx
+ 9 , xx + 17 ) ; xx [ 9 ] = 1.073881273652661e-8 + xx [ 17 ] ; xx [ 10 ] =
0.04424348237409274 - xx [ 18 ] ; xx [ 11 ] = 0.01749999999999672 - xx [ 19 ]
; xx [ 12 ] = 0.9999987896796901 ; xx [ 13 ] = - xx [ 12 ] ; xx [ 15 ] =
1.555840337210809e-3 ; xx [ 17 ] = 0.08453348257393707 ; xx [ 18 ] =
0.01105191774386585 ; xx [ 19 ] = 0.3197725282326799 ; xx [ 20 ] =
0.5932479809203707 ; xx [ 25 ] = 0.5944693556140905 ; xx [ 26 ] =
0.3847863688724822 ; xx [ 27 ] = 0.3828870181915315 ; xx [ 28 ] = xx [ 20 ] ;
xx [ 29 ] = - xx [ 25 ] ; xx [ 30 ] = xx [ 26 ] ; xx [ 31 ] = - xx [ 27 ] ;
xx [ 32 ] = xx [ 2 ] * state [ 4 ] ; xx [ 33 ] = 4.0383813471212e-5 ; xx [ 34
] = sin ( xx [ 32 ] ) ; xx [ 35 ] = 0.9999999966241307 ; xx [ 36 ] =
7.156037461086839e-5 ; xx [ 37 ] = cos ( xx [ 32 ] ) ; xx [ 38 ] = xx [ 33 ]
* xx [ 34 ] ; xx [ 39 ] = xx [ 35 ] * xx [ 34 ] ; xx [ 40 ] = xx [ 36 ] * xx
[ 34 ] ; pm_math_Quaternion_compose_ra ( xx + 28 , xx + 37 , xx + 41 ) ; xx [
28 ] = 0.02226208232013789 ; xx [ 29 ] = 7.38008192922028e-6 ; xx [ 30 ] = xx
[ 28 ] ; xx [ 31 ] = 1.412496002194259e-5 ; pm_math_Quaternion_xform_ra ( xx
+ 41 , xx + 29 , xx + 37 ) ; xx [ 29 ] = 0.01530975760392998 - xx [ 37 ] ; xx
[ 30 ] = 0.03864145797403479 - xx [ 39 ] ; xx [ 31 ] = 1.55584033721079e-3 ;
xx [ 32 ] = 0.08601643205482842 ; xx [ 34 ] = 0.0110519177438635 ; xx [ 37 ]
= 0.51222747176732 ; xx [ 45 ] = - xx [ 20 ] ; xx [ 46 ] = xx [ 25 ] ; xx [
47 ] = - xx [ 26 ] ; xx [ 48 ] = xx [ 27 ] ; xx [ 20 ] = xx [ 2 ] * state [ 6
] ; xx [ 2 ] = sin ( xx [ 20 ] ) ; xx [ 49 ] = cos ( xx [ 20 ] ) ; xx [ 50 ]
= xx [ 33 ] * xx [ 2 ] ; xx [ 51 ] = xx [ 35 ] * xx [ 2 ] ; xx [ 52 ] = xx [
36 ] * xx [ 2 ] ; pm_math_Quaternion_compose_ra ( xx + 45 , xx + 49 , xx + 53
) ; xx [ 25 ] = 7.380081929219568e-6 ; xx [ 26 ] = xx [ 28 ] ; xx [ 27 ] =
1.4124960021941e-5 ; pm_math_Quaternion_xform_ra ( xx + 53 , xx + 25 , xx +
45 ) ; xx [ 2 ] = 0.01530975760392997 - xx [ 45 ] ; xx [ 20 ] =
0.0386414579740348 - xx [ 47 ] ; xx [ 25 ] = xx [ 15 ] * xx [ 29 ] + xx [ 12
] * xx [ 30 ] ; xx [ 26 ] = xx [ 7 ] * xx [ 9 ] + xx [ 11 ] * xx [ 3 ] ; xx [
27 ] = xx [ 31 ] * xx [ 20 ] ; xx [ 28 ] = xx [ 31 ] * xx [ 2 ] ; xx [ 39 ] =
xx [ 24 ] * state [ 1 ] ; xx [ 40 ] = xx [ 22 ] * state [ 1 ] ; xx [ 45 ] =
xx [ 11 ] * state [ 1 ] ; xx [ 47 ] = xx [ 9 ] * state [ 1 ] ; xx [ 48 ] = xx
[ 23 ] * xx [ 47 ] ; xx [ 49 ] = xx [ 24 ] * xx [ 45 ] - xx [ 22 ] * xx [ 47
] ; xx [ 50 ] = xx [ 23 ] * xx [ 45 ] ; xx [ 57 ] = xx [ 48 ] ; xx [ 58 ] =
xx [ 49 ] ; xx [ 59 ] = - xx [ 50 ] ; pm_math_Vector3_cross_ra ( xx + 22 , xx
+ 57 , xx + 60 ) ; motionData [ 0 ] = xx [ 0 ] ; motionData [ 1 ] = xx [ 3 ]
; motionData [ 2 ] = xx [ 0 ] ; motionData [ 3 ] = xx [ 7 ] ; motionData [ 4
] = xx [ 1 ] ; motionData [ 5 ] = xx [ 4 ] - xx [ 8 ] ; motionData [ 6 ] = xx
[ 5 ] ; motionData [ 7 ] = xx [ 21 ] ; motionData [ 8 ] = xx [ 22 ] ;
motionData [ 9 ] = xx [ 23 ] ; motionData [ 10 ] = xx [ 24 ] ; motionData [
11 ] = - xx [ 9 ] ; motionData [ 12 ] = xx [ 10 ] ; motionData [ 13 ] = xx [
11 ] ; motionData [ 14 ] = xx [ 0 ] ; motionData [ 15 ] = xx [ 13 ] ;
motionData [ 16 ] = xx [ 0 ] ; motionData [ 17 ] = xx [ 15 ] ; motionData [
18 ] = - xx [ 17 ] ; motionData [ 19 ] = - xx [ 18 ] ; motionData [ 20 ] = xx
[ 19 ] ; motionData [ 21 ] = xx [ 41 ] ; motionData [ 22 ] = xx [ 42 ] ;
motionData [ 23 ] = xx [ 43 ] ; motionData [ 24 ] = xx [ 44 ] ; motionData [
25 ] = xx [ 29 ] ; motionData [ 26 ] = - xx [ 38 ] ; motionData [ 27 ] = xx [
30 ] ; motionData [ 28 ] = xx [ 13 ] ; motionData [ 29 ] = xx [ 0 ] ;
motionData [ 30 ] = xx [ 31 ] ; motionData [ 31 ] = xx [ 0 ] ; motionData [
32 ] = - xx [ 32 ] ; motionData [ 33 ] = - xx [ 34 ] ; motionData [ 34 ] = xx
[ 37 ] ; motionData [ 35 ] = xx [ 53 ] ; motionData [ 36 ] = xx [ 54 ] ;
motionData [ 37 ] = xx [ 55 ] ; motionData [ 38 ] = xx [ 56 ] ; motionData [
39 ] = xx [ 2 ] ; motionData [ 40 ] = - xx [ 46 ] ; motionData [ 41 ] = xx [
20 ] ; motionData [ 42 ] = - ( xx [ 15 ] * xx [ 44 ] - xx [ 12 ] * xx [ 42 ]
) ; motionData [ 43 ] = - ( xx [ 12 ] * xx [ 41 ] + xx [ 15 ] * xx [ 43 ] ) ;
motionData [ 44 ] = xx [ 15 ] * xx [ 42 ] + xx [ 12 ] * xx [ 44 ] ;
motionData [ 45 ] = xx [ 15 ] * xx [ 41 ] - xx [ 12 ] * xx [ 43 ] ;
motionData [ 46 ] = xx [ 29 ] - 3.111680674421618e-3 * xx [ 25 ] - xx [ 17 ]
; motionData [ 47 ] = ( 2.420639154892244e-6 * xx [ 38 ] + 0.9999975793608451
* xx [ 38 ] ) * xx [ 6 ] - xx [ 38 ] - xx [ 18 ] ; motionData [ 48 ] = xx [
30 ] - 1.99999757935938 * xx [ 25 ] + xx [ 19 ] ; motionData [ 49 ] = - ( xx
[ 22 ] * xx [ 3 ] + xx [ 7 ] * xx [ 24 ] ) ; motionData [ 50 ] = xx [ 21 ] *
xx [ 3 ] - xx [ 7 ] * xx [ 23 ] ; motionData [ 51 ] = xx [ 7 ] * xx [ 22 ] -
xx [ 24 ] * xx [ 3 ] ; motionData [ 52 ] = xx [ 7 ] * xx [ 21 ] + xx [ 23 ] *
xx [ 3 ] ; motionData [ 53 ] = xx [ 6 ] * xx [ 7 ] * xx [ 26 ] - xx [ 9 ] +
xx [ 1 ] ; motionData [ 54 ] = xx [ 10 ] - ( ( xx [ 7 ] * xx [ 7 ] * xx [ 10
] + xx [ 10 ] * xx [ 3 ] * xx [ 3 ] ) * xx [ 6 ] + xx [ 8 ] ) + xx [ 4 ] ;
motionData [ 55 ] = xx [ 11 ] - xx [ 6 ] * xx [ 26 ] * xx [ 3 ] + xx [ 5 ] ;
motionData [ 56 ] = - ( xx [ 12 ] * xx [ 53 ] + xx [ 31 ] * xx [ 55 ] ) ;
motionData [ 57 ] = xx [ 31 ] * xx [ 56 ] - xx [ 12 ] * xx [ 54 ] ;
motionData [ 58 ] = xx [ 31 ] * xx [ 53 ] - xx [ 12 ] * xx [ 55 ] ;
motionData [ 59 ] = - ( xx [ 12 ] * xx [ 56 ] + xx [ 31 ] * xx [ 54 ] ) ;
motionData [ 60 ] = xx [ 2 ] - xx [ 6 ] * ( xx [ 12 ] * xx [ 27 ] + xx [ 31 ]
* xx [ 28 ] ) - xx [ 32 ] ; motionData [ 61 ] = - ( xx [ 34 ] + xx [ 46 ] ) ;
motionData [ 62 ] = xx [ 20 ] - ( xx [ 31 ] * xx [ 27 ] - xx [ 12 ] * xx [ 28
] ) * xx [ 6 ] + xx [ 37 ] ; motionData [ 63 ] = xx [ 0 ] ; motionData [ 64 ]
= state [ 1 ] ; motionData [ 65 ] = xx [ 0 ] ; motionData [ 66 ] = xx [ 0 ] ;
motionData [ 67 ] = xx [ 0 ] ; motionData [ 68 ] = xx [ 0 ] ; motionData [ 69
] = ( xx [ 21 ] * xx [ 39 ] + xx [ 23 ] * xx [ 40 ] ) * xx [ 6 ] - xx [ 14 ]
* state [ 3 ] ; motionData [ 70 ] = state [ 1 ] - ( xx [ 24 ] * xx [ 39 ] +
xx [ 22 ] * xx [ 40 ] ) * xx [ 6 ] - state [ 3 ] ; motionData [ 71 ] = xx [ 6
] * ( xx [ 23 ] * xx [ 39 ] - xx [ 21 ] * xx [ 40 ] ) + xx [ 16 ] * state [ 3
] ; motionData [ 72 ] = xx [ 45 ] + ( xx [ 60 ] - xx [ 21 ] * xx [ 48 ] ) *
xx [ 6 ] + 7.508856642310025e-6 * state [ 3 ] ; motionData [ 73 ] = xx [ 6 ]
* ( xx [ 61 ] - xx [ 49 ] * xx [ 21 ] ) - 1.543518761068194e-13 * state [ 3 ]
; motionData [ 74 ] = ( xx [ 21 ] * xx [ 50 ] + xx [ 62 ] ) * xx [ 6 ] + xx [
47 ] + 1.708204283920609e-6 * state [ 3 ] ; motionData [ 75 ] = xx [ 0 ] ;
motionData [ 76 ] = xx [ 0 ] ; motionData [ 77 ] = xx [ 0 ] ; motionData [ 78
] = xx [ 0 ] ; motionData [ 79 ] = xx [ 0 ] ; motionData [ 80 ] = xx [ 0 ] ;
motionData [ 81 ] = xx [ 33 ] * state [ 5 ] ; motionData [ 82 ] = xx [ 35 ] *
state [ 5 ] ; motionData [ 83 ] = xx [ 36 ] * state [ 5 ] ; motionData [ 84 ]
= - ( 1.253187702381151e-5 * state [ 5 ] ) ; motionData [ 85 ] =
4.22983233005524e-11 * state [ 5 ] ; motionData [ 86 ] = 6.481054124408873e-6
* state [ 5 ] ; motionData [ 87 ] = xx [ 0 ] ; motionData [ 88 ] = xx [ 0 ] ;
motionData [ 89 ] = xx [ 0 ] ; motionData [ 90 ] = xx [ 0 ] ; motionData [ 91
] = xx [ 0 ] ; motionData [ 92 ] = xx [ 0 ] ; motionData [ 93 ] = xx [ 33 ] *
state [ 7 ] ; motionData [ 94 ] = xx [ 35 ] * state [ 7 ] ; motionData [ 95 ]
= xx [ 36 ] * state [ 7 ] ; motionData [ 96 ] = - ( 1.253187702380993e-5 *
state [ 7 ] ) ; motionData [ 97 ] = 4.229832330053958e-11 * state [ 7 ] ;
motionData [ 98 ] = 6.481054124408161e-6 * state [ 7 ] ; } size_t
Three_wheeled_base_d319c82e_1_computeAssemblyError ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData , double * error ) { ( void ) mech ; (
void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; ( void ) error ;
switch ( constraintIdx ) { } return 0 ; } size_t
Three_wheeled_base_d319c82e_1_computeAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { } return 0 ; }
size_t Three_wheeled_base_d319c82e_1_computeFullAssemblyJacobian ( const void
* mech , const RuntimeDerivedValuesBundle * rtdv , const double * state ,
const int * modeVector , const double * motionData , double * J ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
state ; ( void ) modeVector ; ( void ) motionData ; ( void ) J ; return 0 ; }
boolean_T Three_wheeled_base_d319c82e_1_isInKinematicSingularity ( const void
* mech , const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx ,
const int * modeVector , const double * motionData ) { ( void ) mech ; ( void
) rtdv ; ( void ) modeVector ; ( void ) motionData ; switch ( constraintIdx )
{ } return 0 ; } void Three_wheeled_base_d319c82e_1_convertStateVector (
const void * asmMech , const RuntimeDerivedValuesBundle * rtdv , const void *
simMech , const double * asmState , const int * asmModeVector , const int *
simModeVector , double * simState ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) asmMech ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ;
( void ) simModeVector ; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] =
asmState [ 1 ] ; simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState
[ 3 ] ; simState [ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ;
simState [ 6 ] = asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; }
