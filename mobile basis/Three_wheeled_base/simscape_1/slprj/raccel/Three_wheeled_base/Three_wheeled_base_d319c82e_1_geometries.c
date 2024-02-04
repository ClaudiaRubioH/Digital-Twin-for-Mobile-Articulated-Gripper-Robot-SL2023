#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
const sm_core_compiler_ConvexPolyhedron *
Three_wheeled_base_d319c82e_1_geometry_0 ( const RuntimeDerivedValuesBundle *
rtdv ) { static const double hull_points [ 480 ] = { 4.791809769812971e-7 ,
0.05429286575317383 , - 7.99114990234375e-3 , 1.561201810836792e-3 ,
0.05429286575317383 , - 7.837431907653809e-3 , 7.841371059417724e-3 , 0.0375
, - 0.07961477661132813 , - 1.560243368148804e-3 , 0.05429286575317383 , -
7.837431907653809e-3 , 9.797174397164869e-18 , 0.0375 , - 0.08 , -
7.841371059417724e-3 , 0.0375 , - 0.07961477661132813 , 3.061946630477905e-3
, 0.05429286575317383 , - 7.382185935974121e-3 , 0.02322277450561524 , 0.0375
, - 0.07655522918701171 , 6.652235984802246e-3 , 0.05429286575317383 , -
4.43571138381958e-3 , 8.000478744506836e-3 , 0.05429286575317383 ,
8.850305341184139e-6 , 0.01560722541809082 , 0.0375 , - 0.07846282196044922 ,
4.445041179656982e-3 , 0.05429286575317383 , - 6.642906665802002e-3 ,
0.03771173858642578 , 0.0375 , - 0.07055370330810547 , 5.657333374023438e-3 ,
0.05429286575317383 , - 5.648004055023193e-3 , 0.03061467552185059 , 0.0375 ,
- 0.07391036224365234 , 0.05075146102905274 , 0.0375 , - 0.06184083557128906
, 0.04444561767578125 , 0.0375 , - 0.06651757049560547 , 0.06184083557128906
, 0.0375 , - 0.05075146102905274 , 0.05656854248046875 , 0.0375 , -
0.05656854248046875 , 7.391515254974366e-3 , 0.05429286575317383 , -
3.052617073059082e-3 , 0.07055370330810547 , 0.0375 , - 0.03771173858642578 ,
0.06651757049560547 , 0.0375 , - 0.04444561767578125 , 7.846761226654052e-3 ,
0.05429286575317383 , - 1.551872253417969e-3 , 0.07655522918701171 , 0.0375 ,
- 0.02322277450561524 , 0.07391036224365234 , 0.0375 , - 0.03061467552185059
, 0.07961477661132813 , 0.0375 , - 7.841371059417724e-3 , 0.07846282196044922
, 0.0375 , - 0.01560722541809082 , 7.846761226654052e-3 , 0.05429286575317383
, 1.569572925567627e-3 , 0.07961477661132813 , 0.0375 , 7.841371059417724e-3
, 7.391515254974366e-3 , 0.05429286575317383 , 3.07031774520874e-3 ,
4.791809769812971e-7 , 0.05429286575317383 , 8.008850097656251e-3 ,
6.652235984802246e-3 , 0.05429286575317383 , 4.453412055969238e-3 , -
6.651277542114258e-3 , 0.05429286575317383 , 4.453412055969238e-3 , -
6.651277542114258e-3 , 0.05429286575317383 , - 4.43571138381958e-3 , 0.08 ,
0.0375 , 1.174844354017313e-17 , 0.07655522918701171 , 0.0375 ,
0.02322277450561524 , 0.07846282196044922 , 0.0375 , 0.01560722541809082 ,
0.07055370330810547 , 0.0375 , 0.03771173858642578 , 0.07391036224365234 ,
0.0375 , 0.03061467552185059 , 1.561201810836792e-3 , 0.05429286575317383 ,
7.855132579803466e-3 , 7.841371059417724e-3 , 0.0375 , 0.07961477661132813 ,
3.061946630477905e-3 , 0.05429286575317383 , 7.399886608123779e-3 ,
0.01560722541809082 , 0.0375 , 0.07846282196044922 , 0.02322277450561524 ,
0.0375 , 0.07655522918701171 , - 1.560243368148804e-3 , 0.05429286575317383 ,
7.855132579803466e-3 , - 7.841371059417724e-3 , 0.0375 , 0.07961477661132813
, - 3.060988187789917e-3 , 0.05429286575317383 , 7.399886608123779e-3 ,
6.795845993798704e-34 , 0.0375 , 0.08 , 4.445041179656982e-3 ,
0.05429286575317383 , 6.66060733795166e-3 , 5.657333374023438e-3 ,
0.05429286575317383 , 5.665704727172852e-3 , 0.03061467552185059 , 0.0375 ,
0.07391036224365234 , 0.03771173858642578 , 0.0375 , 0.07055370330810547 ,
0.04444561767578125 , 0.0375 , 0.06651757049560547 , 0.05075146102905274 ,
0.0375 , 0.06184083557128906 , 0.05656854248046875 , 0.0375 ,
0.05656854248046875 , 0.06184083557128906 , 0.0375 , 0.05075146102905274 ,
0.06651757049560547 , 0.0375 , 0.04444561767578125 , - 0.02322277450561524 ,
0.0375 , 0.07655522918701171 , - 0.01560722541809082 , 0.0375 ,
0.07846282196044922 , - 4.444082736968994e-3 , 0.05429286575317383 ,
6.66060733795166e-3 , - 0.03771173858642578 , 0.0375 , 0.07055370330810547 ,
- 5.656374931335449e-3 , 0.05429286575317383 , 5.665704727172852e-3 , -
0.03061467552185059 , 0.0375 , 0.07391036224365234 , - 0.05075146102905274 ,
0.0375 , 0.06184083557128906 , - 0.04444561767578125 , 0.0375 ,
0.06651757049560547 , - 0.06184083557128906 , 0.0375 , 0.05075146102905274 ,
- 0.05656854248046875 , 0.0375 , 0.05656854248046875 , - 7.390557289123536e-3
, 0.05429286575317383 , 3.07031774520874e-3 , - 0.07055370330810547 , 0.0375
, 0.03771173858642578 , - 7.845803260803223e-3 , 0.05429286575317383 ,
1.569572925567627e-3 , - 7.999520778656006e-3 , 0.05429286575317383 ,
8.850305341184139e-6 , - 0.06651757049560547 , 0.0375 , 0.04444561767578125 ,
- 0.07655522918701171 , 0.0375 , 0.02322277450561524 , - 0.07391036224365234
, 0.0375 , 0.03061467552185059 , - 0.07961477661132813 , 0.0375 ,
7.841371059417724e-3 , - 0.07846282196044922 , 0.0375 , 0.01560722541809082 ,
- 7.845803260803223e-3 , 0.05429286575317383 , - 1.551872253417969e-3 , -
0.07961477661132813 , 0.0375 , - 7.841371059417724e-3 , - 0.08 , 0.0375 , -
7.845905254156605e-18 , - 7.390557289123536e-3 , 0.05429286575317383 , -
3.052617073059082e-3 , - 0.07655522918701171 , 0.0375 , - 0.02322277450561524
, - 0.07846282196044922 , 0.0375 , - 0.01560722541809082 , -
0.07055370330810547 , 0.0375 , - 0.03771173858642578 , - 0.07391036224365234
, 0.0375 , - 0.03061467552185059 , - 5.656374931335449e-3 ,
0.05429286575317383 , - 5.648004055023193e-3 , - 0.06184083557128906 , 0.0375
, - 0.05075146102905274 , - 3.060988187789917e-3 , 0.05429286575317383 , -
7.382185935974121e-3 , - 0.06651757049560547 , 0.0375 , - 0.04444561767578125
, - 4.444082736968994e-3 , 0.05429286575317383 , - 6.642906665802002e-3 , -
0.05075146102905274 , 0.0375 , - 0.06184083557128906 , - 0.05656854248046875
, 0.0375 , - 0.05656854248046875 , - 0.01560722541809082 , 0.0375 , -
0.07846282196044922 , - 0.02322277450561524 , 0.0375 , - 0.07655522918701171
, - 0.03061467552185059 , 0.0375 , - 0.07391036224365234 , -
0.03771173858642578 , 0.0375 , - 0.07055370330810547 , - 0.04444561767578125
, 0.0375 , - 0.06651757049560547 , 6.795845993798704e-34 , - 0.0125 , 0.08 ,
7.841371059417724e-3 , - 0.0125 , 0.07961477661132813 , -
7.841371059417724e-3 , - 0.0125 , 0.07961477661132813 , 0.01560722541809082 ,
- 0.0125 , 0.07846282196044922 , 0.03061467552185059 , - 0.0125 ,
0.07391036224365234 , 0.05075146102905274 , - 0.0125 , 0.06184083557128906 ,
- 0.05075146102905274 , - 0.0125 , 0.06184083557128906 , 0.02322277450561524
, - 0.0125 , 0.07655522918701171 , 0.03771173858642578 , - 0.0125 ,
0.07055370330810547 , 0.04444561767578125 , - 0.0125 , 0.06651757049560547 ,
0.05656854248046875 , - 0.0125 , 0.05656854248046875 , 0.06184083557128906 ,
- 0.0125 , 0.05075146102905274 , 0.06184083557128906 , - 0.0125 , -
0.05075146102905274 , 0.05075146102905274 , - 0.0125 , - 0.06184083557128906
, 0.06651757049560547 , - 0.0125 , 0.04444561767578125 , 0.07391036224365234
, - 0.0125 , 0.03061467552185059 , 0.07961477661132813 , - 0.0125 ,
7.841371059417724e-3 , 0.07961477661132813 , - 0.0125 , -
7.841371059417724e-3 , 0.07055370330810547 , - 0.0125 , 0.03771173858642578 ,
0.07655522918701171 , - 0.0125 , 0.02322277450561524 , 0.07846282196044922 ,
- 0.0125 , 0.01560722541809082 , 0.08 , - 0.0125 , 1.174844354017313e-17 ,
0.07846282196044922 , - 0.0125 , - 0.01560722541809082 , 0.07391036224365234
, - 0.0125 , - 0.03061467552185059 , 0.07655522918701171 , - 0.0125 , -
0.02322277450561524 , 0.07055370330810547 , - 0.0125 , - 0.03771173858642578
, 0.06651757049560547 , - 0.0125 , - 0.04444561767578125 ,
0.05656854248046875 , - 0.0125 , - 0.05656854248046875 , 7.841371059417724e-3
, - 0.0125 , - 0.07961477661132813 , 9.797174397164869e-18 , - 0.0125 , -
0.08 , 0.01560722541809082 , - 0.0125 , - 0.07846282196044922 ,
0.03061467552185059 , - 0.0125 , - 0.07391036224365234 , -
0.05075146102905274 , - 0.0125 , - 0.06184083557128906 , -
7.841371059417724e-3 , - 0.0125 , - 0.07961477661132813 , 0.02322277450561524
, - 0.0125 , - 0.07655522918701171 , 0.03771173858642578 , - 0.0125 , -
0.07055370330810547 , 0.04444561767578125 , - 0.0125 , - 0.06651757049560547
, - 0.01560722541809082 , - 0.0125 , - 0.07846282196044922 , -
0.03061467552185059 , - 0.0125 , - 0.07391036224365234 , -
0.02322277450561524 , - 0.0125 , - 0.07655522918701171 , -
0.03771173858642578 , - 0.0125 , - 0.07055370330810547 , -
0.04444561767578125 , - 0.0125 , - 0.06651757049560547 , -
0.05656854248046875 , - 0.0125 , - 0.05656854248046875 , -
0.06184083557128906 , - 0.0125 , - 0.05075146102905274 , -
0.06184083557128906 , - 0.0125 , 0.05075146102905274 , - 0.06651757049560547
, - 0.0125 , - 0.04444561767578125 , - 0.07391036224365234 , - 0.0125 , -
0.03061467552185059 , - 0.07961477661132813 , - 0.0125 , -
7.841371059417724e-3 , - 0.07961477661132813 , - 0.0125 ,
7.841371059417724e-3 , - 0.07055370330810547 , - 0.0125 , -
0.03771173858642578 , - 0.07655522918701171 , - 0.0125 , -
0.02322277450561524 , - 0.07846282196044922 , - 0.0125 , -
0.01560722541809082 , - 0.08 , - 0.0125 , - 7.845905254156605e-18 , -
0.07846282196044922 , - 0.0125 , 0.01560722541809082 , - 0.07391036224365234
, - 0.0125 , 0.03061467552185059 , - 0.07655522918701171 , - 0.0125 ,
0.02322277450561524 , - 0.07055370330810547 , - 0.0125 , 0.03771173858642578
, - 0.06651757049560547 , - 0.0125 , 0.04444561767578125 , -
0.05656854248046875 , - 0.0125 , 0.05656854248046875 , - 0.04444561767578125
, - 0.0125 , 0.06651757049560547 , - 0.03061467552185059 , - 0.0125 ,
0.07391036224365234 , - 0.03771173858642578 , - 0.0125 , 0.07055370330810547
, - 0.01560722541809082 , - 0.0125 , 0.07846282196044922 , -
0.02322277450561524 , - 0.0125 , 0.07655522918701171 } ; static const int
vx_index [ 160 ] = { 0 , 5 , 13 , 19 , 27 , 32 , 38 , 45 , 51 , 59 , 73 , 78
, 83 , 89 , 95 , 100 , 106 , 111 , 117 , 122 , 128 , 134 , 139 , 144 , 150 ,
155 , 161 , 166 , 171 , 177 , 183 , 193 , 201 , 212 , 223 , 227 , 233 , 238 ,
244 , 249 , 254 , 260 , 268 , 273 , 279 , 284 , 290 , 298 , 303 , 308 , 314 ,
319 , 325 , 330 , 336 , 341 , 347 , 352 , 358 , 363 , 368 , 374 , 380 , 385 ,
391 , 396 , 402 , 407 , 412 , 418 , 424 , 431 , 436 , 442 , 447 , 453 , 458 ,
464 , 470 , 476 , 481 , 487 , 492 , 498 , 503 , 509 , 515 , 522 , 527 , 532 ,
538 , 543 , 548 , 554 , 559 , 565 , 570 , 574 , 582 , 589 , 594 , 602 , 612 ,
623 , 627 , 631 , 636 , 640 , 649 , 658 , 668 , 673 , 681 , 688 , 696 , 700 ,
704 , 709 , 714 , 719 , 727 , 731 , 735 , 740 , 744 , 752 , 756 , 761 , 769 ,
780 , 787 , 791 , 795 , 800 , 805 , 813 , 817 , 821 , 826 , 830 , 839 , 848 ,
853 , 861 , 868 , 876 , 880 , 884 , 889 , 892 , 897 , 905 , 909 , 913 , 918 ,
922 , 927 , 935 , 939 , 944 } ; static const int vx_valency [ 160 ] = { 5 , 8
, 6 , 8 , 5 , 6 , 7 , 6 , 8 , 14 , 5 , 5 , 6 , 6 , 5 , 6 , 5 , 6 , 5 , 6 , 6
, 5 , 5 , 6 , 5 , 6 , 5 , 5 , 6 , 6 , 10 , 8 , 11 , 11 , 4 , 6 , 5 , 6 , 5 ,
5 , 6 , 8 , 5 , 6 , 5 , 6 , 8 , 5 , 5 , 6 , 5 , 6 , 5 , 6 , 5 , 6 , 5 , 6 , 5
, 5 , 6 , 6 , 5 , 6 , 5 , 6 , 5 , 5 , 6 , 6 , 7 , 5 , 6 , 5 , 6 , 5 , 6 , 6 ,
6 , 5 , 6 , 5 , 6 , 5 , 6 , 6 , 7 , 5 , 5 , 6 , 5 , 5 , 6 , 5 , 6 , 5 , 4 , 8
, 7 , 5 , 8 , 10 , 11 , 4 , 4 , 5 , 4 , 9 , 9 , 10 , 5 , 8 , 7 , 8 , 4 , 4 ,
5 , 5 , 5 , 8 , 4 , 4 , 5 , 4 , 8 , 4 , 5 , 8 , 11 , 7 , 4 , 4 , 5 , 5 , 8 ,
4 , 4 , 5 , 4 , 9 , 9 , 5 , 8 , 7 , 8 , 4 , 4 , 5 , 3 , 5 , 8 , 4 , 4 , 5 , 4
, 5 , 8 , 4 , 5 , 4 } ; static const int vx_adjacency_graph [ 948 ] = { 1 , 2
, 4 , 5 , 3 , 2 , 0 , 3 , 9 , 8 , 6 , 7 , 10 , 0 , 1 , 10 , 126 , 124 , 4 , 1
, 0 , 5 , 91 , 92 , 86 , 33 , 9 , 5 , 0 , 2 , 124 , 125 , 0 , 4 , 125 , 129 ,
91 , 3 , 7 , 1 , 8 , 13 , 11 , 12 , 14 , 1 , 6 , 14 , 127 , 130 , 10 , 6 , 1
, 9 , 19 , 20 , 21 , 17 , 13 , 8 , 1 , 3 , 33 , 32 , 30 , 31 , 29 , 27 , 28 ,
34 , 25 , 22 , 19 , 2 , 1 , 7 , 130 , 126 , 12 , 6 , 13 , 15 , 16 , 6 , 11 ,
16 , 132 , 131 , 14 , 11 , 6 , 8 , 17 , 18 , 15 , 7 , 6 , 12 , 131 , 127 , 11
, 13 , 18 , 123 , 109 , 16 , 12 , 11 , 15 , 109 , 132 , 13 , 8 , 21 , 122 ,
108 , 18 , 13 , 17 , 108 , 123 , 15 , 20 , 8 , 9 , 22 , 23 , 24 , 8 , 19 , 24
, 119 , 121 , 21 , 8 , 20 , 121 , 122 , 17 , 23 , 19 , 9 , 25 , 26 , 19 , 22
, 26 , 118 , 120 , 24 , 19 , 23 , 120 , 119 , 20 , 22 , 9 , 34 , 117 , 113 ,
26 , 22 , 25 , 113 , 118 , 23 , 28 , 9 , 29 , 35 , 36 , 9 , 27 , 36 , 112 ,
117 , 34 , 27 , 9 , 31 , 37 , 38 , 35 , 31 , 9 , 32 , 46 , 44 , 45 , 47 , 40
, 39 , 41 , 9 , 30 , 41 , 49 , 55 , 56 , 37 , 29 , 30 , 9 , 33 , 70 , 69 , 67
, 68 , 71 , 65 , 61 , 46 , 32 , 9 , 3 , 86 , 84 , 85 , 87 , 82 , 79 , 76 , 70
, 9 , 28 , 117 , 25 , 27 , 29 , 38 , 115 , 116 , 36 , 27 , 35 , 116 , 112 ,
28 , 29 , 31 , 56 , 114 , 111 , 38 , 29 , 37 , 111 , 115 , 35 , 30 , 40 , 42
, 43 , 41 , 39 , 30 , 47 , 97 , 99 , 42 , 30 , 39 , 43 , 50 , 51 , 48 , 49 ,
31 , 39 , 40 , 99 , 103 , 43 , 39 , 42 , 103 , 100 , 50 , 41 , 45 , 30 , 46 ,
57 , 58 , 30 , 44 , 58 , 98 , 96 , 47 , 44 , 30 , 32 , 61 , 59 , 60 , 62 , 57
, 40 , 30 , 45 , 96 , 97 , 49 , 41 , 51 , 52 , 53 , 41 , 48 , 53 , 54 , 55 ,
31 , 41 , 43 , 100 , 104 , 51 , 41 , 50 , 104 , 105 , 52 , 48 , 48 , 51 , 105
, 101 , 53 , 48 , 52 , 101 , 106 , 54 , 49 , 49 , 53 , 106 , 107 , 55 , 49 ,
54 , 107 , 110 , 56 , 31 , 31 , 55 , 110 , 114 , 37 , 44 , 46 , 62 , 159 ,
158 , 58 , 45 , 44 , 57 , 158 , 98 , 60 , 46 , 61 , 63 , 64 , 46 , 59 , 64 ,
157 , 156 , 62 , 59 , 46 , 32 , 65 , 66 , 63 , 46 , 60 , 156 , 159 , 57 , 59
, 61 , 66 , 102 , 155 , 64 , 60 , 59 , 63 , 155 , 157 , 61 , 32 , 71 , 140 ,
154 , 66 , 61 , 65 , 154 , 102 , 63 , 68 , 32 , 69 , 72 , 73 , 32 , 67 , 73 ,
152 , 153 , 71 , 67 , 32 , 70 , 74 , 75 , 72 , 69 , 32 , 33 , 76 , 77 , 78 ,
74 , 32 , 68 , 153 , 140 , 65 , 67 , 69 , 75 , 151 , 150 , 73 , 67 , 72 , 150
, 152 , 68 , 69 , 70 , 78 , 144 , 149 , 75 , 69 , 74 , 149 , 151 , 72 , 77 ,
70 , 33 , 79 , 80 , 81 , 70 , 76 , 81 , 147 , 143 , 78 , 70 , 77 , 143 , 148
, 144 , 74 , 80 , 76 , 33 , 82 , 83 , 76 , 79 , 83 , 142 , 146 , 81 , 76 , 80
, 146 , 147 , 77 , 79 , 33 , 87 , 141 , 145 , 83 , 79 , 82 , 145 , 142 , 80 ,
85 , 33 , 86 , 88 , 89 , 90 , 33 , 84 , 90 , 138 , 139 , 87 , 33 , 3 , 92 ,
93 , 94 , 88 , 84 , 33 , 85 , 139 , 141 , 82 , 84 , 86 , 94 , 95 , 89 , 84 ,
88 , 95 , 137 , 128 , 90 , 84 , 89 , 128 , 138 , 85 , 3 , 5 , 129 , 133 , 92
, 3 , 91 , 133 , 135 , 93 , 86 , 86 , 92 , 135 , 134 , 94 , 86 , 93 , 134 ,
136 , 95 , 88 , 88 , 94 , 136 , 137 , 89 , 97 , 47 , 45 , 98 , 47 , 96 , 98 ,
102 , 101 , 100 , 99 , 40 , 97 , 96 , 45 , 58 , 158 , 156 , 102 , 40 , 97 ,
100 , 103 , 42 , 99 , 97 , 101 , 105 , 104 , 50 , 43 , 103 , 100 , 97 , 102 ,
109 , 108 , 107 , 106 , 53 , 52 , 105 , 101 , 97 , 98 , 156 , 155 , 63 , 66 ,
154 , 140 , 128 , 109 , 42 , 99 , 100 , 43 , 50 , 100 , 105 , 51 , 51 , 104 ,
100 , 101 , 52 , 53 , 101 , 107 , 54 , 106 , 101 , 108 , 113 , 112 , 111 ,
110 , 55 , 54 , 107 , 101 , 109 , 123 , 18 , 17 , 122 , 119 , 113 , 108 , 101
, 102 , 128 , 124 , 127 , 132 , 16 , 15 , 123 , 55 , 107 , 111 , 114 , 56 ,
110 , 107 , 112 , 116 , 115 , 38 , 37 , 114 , 111 , 107 , 113 , 117 , 28 , 36
, 116 , 112 , 107 , 108 , 119 , 118 , 26 , 25 , 117 , 56 , 110 , 111 , 37 ,
38 , 111 , 116 , 35 , 115 , 111 , 112 , 36 , 35 , 28 , 112 , 113 , 25 , 34 ,
26 , 113 , 119 , 120 , 23 , 118 , 113 , 108 , 122 , 121 , 20 , 24 , 120 , 23
, 118 , 119 , 24 , 20 , 119 , 122 , 21 , 121 , 119 , 108 , 17 , 21 , 18 , 108
, 109 , 15 , 125 , 4 , 2 , 126 , 127 , 109 , 128 , 129 , 4 , 124 , 129 , 5 ,
124 , 2 , 10 , 130 , 127 , 124 , 126 , 130 , 7 , 14 , 131 , 132 , 109 , 124 ,
109 , 102 , 140 , 139 , 138 , 90 , 89 , 137 , 134 , 129 , 125 , 124 , 128 ,
134 , 133 , 91 , 5 , 126 , 10 , 7 , 127 , 127 , 14 , 12 , 132 , 127 , 131 ,
12 , 16 , 109 , 91 , 129 , 134 , 135 , 92 , 133 , 129 , 128 , 137 , 136 , 94
, 93 , 135 , 92 , 133 , 134 , 93 , 94 , 134 , 137 , 95 , 136 , 134 , 128 , 89
, 95 , 90 , 128 , 139 , 85 , 138 , 128 , 140 , 144 , 143 , 142 , 141 , 87 ,
85 , 128 , 102 , 154 , 65 , 71 , 153 , 150 , 144 , 139 , 87 , 139 , 142 , 145
, 82 , 141 , 139 , 143 , 147 , 146 , 80 , 83 , 145 , 142 , 139 , 144 , 148 ,
78 , 77 , 147 , 143 , 139 , 140 , 150 , 149 , 74 , 78 , 148 , 82 , 141 , 142
, 83 , 80 , 142 , 147 , 81 , 146 , 142 , 143 , 77 , 81 , 78 , 143 , 144 , 74
, 144 , 150 , 151 , 75 , 149 , 144 , 140 , 153 , 152 , 73 , 72 , 151 , 75 ,
149 , 150 , 72 , 73 , 150 , 153 , 68 , 68 , 152 , 150 , 140 , 71 , 66 , 65 ,
140 , 102 , 63 , 102 , 156 , 157 , 64 , 102 , 98 , 158 , 159 , 62 , 60 , 157
, 155 , 155 , 156 , 60 , 64 , 156 , 98 , 58 , 57 , 159 , 156 , 158 , 57 , 62
} ; static const int seed_vx_ids [ 8 ] = { 54 , 66 , 154 , 106 , 18 , 90 ,
138 , 123 } ; static sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints
= hull_points ; cxh . vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh
. numHullPoints = 160 ; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh .
graphSize = 948 ; cxh . seedVxIds = seed_vx_ids ; cxh . diagonalAABB =
0.2359264438665609 ; ( void ) rtdv ; return & cxh ; } const
sm_core_compiler_Brick * Three_wheeled_base_d319c82e_1_geometry_1 ( const
RuntimeDerivedValuesBundle * rtdv ) { static const sm_core_compiler_Brick
brick = { 1.0 , 1.0 , 1.0e-3 } ; ( void ) rtdv ; return & brick ; } const
sm_core_compiler_ConvexPolyhedron * Three_wheeled_base_d319c82e_1_geometry_2
( const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points
[ 576 ] = { 0.0 , - 9.000000000000001e-3 , 2.0e-3 , 3.901806473731995e-4 , -
9.000000000000001e-3 , 1.961570501327515e-3 , 1.960342764854431e-3 , - 5.0e-3
, 0.01990369415283203 , - 3.901806473731995e-4 , - 9.000000000000001e-3 ,
1.961570501327515e-3 , 2.449293599291217e-18 , - 5.0e-3 , 0.02 , -
1.960342764854431e-3 , - 5.0e-3 , 0.01990369415283203 , 7.653668522834778e-4
, - 9.000000000000001e-3 , 1.847759008407593e-3 , 5.805693626403809e-3 , -
5.0e-3 , 0.01913880729675293 , 1.847759008407593e-3 , - 9.000000000000001e-3
, 7.653668522834778e-4 , 1.961570501327515e-3 , - 9.000000000000001e-3 ,
3.901806473731995e-4 , 1.961570501327515e-3 , - 9.000000000000001e-3 , -
3.901806473731995e-4 , 3.901806473731995e-4 , - 9.000000000000001e-3 , -
1.961570501327515e-3 , 3.901806354522705e-3 , - 5.0e-3 , 0.01961570549011231
, 1.111140489578247e-3 , - 9.000000000000001e-3 , 1.662939190864563e-3 ,
9.427934646606446e-3 , - 5.0e-3 , 0.01763842582702637 , 1.414213538169861e-3
, - 9.000000000000001e-3 , 1.414213538169861e-3 , 7.653668880462647e-3 , -
5.0e-3 , 0.01847759056091309 , 0.01268786525726318 , - 5.0e-3 ,
0.01546020889282227 , 0.01111140441894531 , - 5.0e-3 , 0.01662939262390137 ,
1.662939190864563e-3 , - 9.000000000000001e-3 , 1.111140489578247e-3 ,
0.01546020889282227 , - 5.0e-3 , 0.01268786525726318 , 0.01414213562011719 ,
- 5.0e-3 , 0.01414213562011719 , 0.01763842582702637 , - 5.0e-3 ,
9.427934646606446e-3 , 0.01662939262390137 , - 5.0e-3 , 0.01111140441894531 ,
0.01913880729675293 , - 5.0e-3 , 5.805693626403809e-3 , 0.01847759056091309 ,
- 5.0e-3 , 7.653668880462647e-3 , 2.0e-3 , - 9.000000000000001e-3 ,
1.224646852585168e-19 , 0.01990369415283203 , - 5.0e-3 , 1.960342764854431e-3
, 0.01961570549011231 , - 5.0e-3 , 3.901806354522705e-3 , 0.01990369415283203
, - 5.0e-3 , - 1.960342764854431e-3 , 0.02 , - 5.0e-3 , -
1.224646799645609e-18 , 1.847759008407593e-3 , - 9.000000000000001e-3 , -
7.653668522834778e-4 , 0.01913880729675293 , - 5.0e-3 , -
5.805693626403809e-3 , 0.01961570549011231 , - 5.0e-3 , -
3.901806354522705e-3 , 1.662939190864563e-3 , - 9.000000000000001e-3 , -
1.111140489578247e-3 , 0.01763842582702637 , - 5.0e-3 , -
9.427934646606446e-3 , 7.653668522834778e-4 , - 9.000000000000001e-3 , -
1.847759008407593e-3 , 1.414213538169861e-3 , - 9.000000000000001e-3 , -
1.414213538169861e-3 , 0.01847759056091309 , - 5.0e-3 , -
7.653668880462647e-3 , 0.01546020889282227 , - 5.0e-3 , - 0.01268786525726318
, 0.01662939262390137 , - 5.0e-3 , - 0.01111140441894531 ,
2.449293705170336e-19 , - 9.000000000000001e-3 , - 2.0e-3 ,
1.960342764854431e-3 , - 5.0e-3 , - 0.01990369415283203 , -
3.901806473731995e-4 , - 9.000000000000001e-3 , - 1.961570501327515e-3 ,
3.901806354522705e-3 , - 5.0e-3 , - 0.01961570549011231 ,
5.805693626403809e-3 , - 5.0e-3 , - 0.01913880729675293 , -
1.960342764854431e-3 , - 5.0e-3 , - 0.01990369415283203 , 0.0 , - 5.0e-3 , -
0.02 , 1.111140489578247e-3 , - 9.000000000000001e-3 , - 1.662939190864563e-3
, 7.653668880462647e-3 , - 5.0e-3 , - 0.01847759056091309 ,
9.427934646606446e-3 , - 5.0e-3 , - 0.01763842582702637 , 0.01111140441894531
, - 5.0e-3 , - 0.01662939262390137 , 0.01268786525726318 , - 5.0e-3 , -
0.01546020889282227 , 0.01414213562011719 , - 5.0e-3 , - 0.01414213562011719
, 0.0 , 9.000000000000001e-3 , - 2.0e-3 , 3.901806473731995e-4 ,
9.000000000000001e-3 , - 1.961570501327515e-3 , 1.960342764854431e-3 , 5.0e-3
, - 0.01990369415283203 , - 3.901806473731995e-4 , 9.000000000000001e-3 , -
1.961570501327515e-3 , 0.0 , 5.0e-3 , - 0.02 , - 1.960342764854431e-3 ,
5.0e-3 , - 0.01990369415283203 , 7.653668522834778e-4 , 9.000000000000001e-3
, - 1.847759008407593e-3 , 5.805693626403809e-3 , 5.0e-3 , -
0.01913880729675293 , 1.847759008407593e-3 , 9.000000000000001e-3 , -
7.653668522834778e-4 , 1.961570501327515e-3 , 9.000000000000001e-3 , -
3.901806473731995e-4 , 3.901806473731995e-4 , 9.000000000000001e-3 ,
1.961570501327515e-3 , - 3.901806473731995e-4 , 9.000000000000001e-3 ,
1.961570501327515e-3 , 3.901806354522705e-3 , 5.0e-3 , - 0.01961570549011231
, 1.111140489578247e-3 , 9.000000000000001e-3 , - 1.662939190864563e-3 ,
9.427934646606446e-3 , 5.0e-3 , - 0.01763842582702637 , 1.414213538169861e-3
, 9.000000000000001e-3 , - 1.414213538169861e-3 , 7.653668880462647e-3 ,
5.0e-3 , - 0.01847759056091309 , 0.01268786525726318 , 5.0e-3 , -
0.01546020889282227 , 0.01111140441894531 , 5.0e-3 , - 0.01662939262390137 ,
1.662939190864563e-3 , 9.000000000000001e-3 , - 1.111140489578247e-3 ,
0.01546020889282227 , 5.0e-3 , - 0.01268786525726318 , 0.01414213562011719 ,
5.0e-3 , - 0.01414213562011719 , 0.01763842582702637 , 5.0e-3 , -
9.427934646606446e-3 , 0.01662939262390137 , 5.0e-3 , - 0.01111140441894531 ,
0.01913880729675293 , 5.0e-3 , - 5.805693626403809e-3 , 0.01847759056091309 ,
5.0e-3 , - 7.653668880462647e-3 , 2.0e-3 , 9.000000000000001e-3 , -
1.224646852585168e-19 , 0.01990369415283203 , 5.0e-3 , - 1.960342764854431e-3
, 1.961570501327515e-3 , 9.000000000000001e-3 , 3.901806473731995e-4 ,
0.01961570549011231 , 5.0e-3 , - 3.901806354522705e-3 , 0.01990369415283203 ,
5.0e-3 , 1.960342764854431e-3 , 0.02 , 5.0e-3 , - 1.224646799645609e-18 ,
1.847759008407593e-3 , 9.000000000000001e-3 , 7.653668522834778e-4 ,
0.01913880729675293 , 5.0e-3 , 5.805693626403809e-3 , 0.01961570549011231 ,
5.0e-3 , 3.901806354522705e-3 , 1.662939190864563e-3 , 9.000000000000001e-3 ,
1.111140489578247e-3 , 0.01763842582702637 , 5.0e-3 , 9.427934646606446e-3 ,
7.653668522834778e-4 , 9.000000000000001e-3 , 1.847759008407593e-3 ,
1.414213538169861e-3 , 9.000000000000001e-3 , 1.414213538169861e-3 ,
0.01847759056091309 , 5.0e-3 , 7.653668880462647e-3 , 0.01546020889282227 ,
5.0e-3 , 0.01268786525726318 , 0.01662939262390137 , 5.0e-3 ,
0.01111140441894531 , 2.449293705170336e-19 , 9.000000000000001e-3 , 2.0e-3 ,
1.960342764854431e-3 , 5.0e-3 , 0.01990369415283203 , 3.901806354522705e-3 ,
5.0e-3 , 0.01961570549011231 , 5.805693626403809e-3 , 5.0e-3 ,
0.01913880729675293 , - 1.960342764854431e-3 , 5.0e-3 , 0.01990369415283203 ,
2.449293599291217e-18 , 5.0e-3 , 0.02 , 1.111140489578247e-3 ,
9.000000000000001e-3 , 1.662939190864563e-3 , 7.653668880462647e-3 , 5.0e-3 ,
0.01847759056091309 , 9.427934646606446e-3 , 5.0e-3 , 0.01763842582702637 ,
0.01268786525726318 , 5.0e-3 , 0.01546020889282227 , 0.01111140441894531 ,
5.0e-3 , 0.01662939262390137 , 0.01414213562011719 , 5.0e-3 ,
0.01414213562011719 , - 7.653668522834778e-4 , 9.000000000000001e-3 ,
1.847759008407593e-3 , - 5.805693626403809e-3 , 5.0e-3 , 0.01913880729675293
, - 1.961570501327515e-3 , 9.000000000000001e-3 , 3.901806473731995e-4 , -
3.901806354522705e-3 , 5.0e-3 , 0.01961570549011231 , - 1.111140489578247e-3
, 9.000000000000001e-3 , 1.662939190864563e-3 , - 9.427934646606446e-3 ,
5.0e-3 , 0.01763842582702637 , - 1.414213538169861e-3 , 9.000000000000001e-3
, 1.414213538169861e-3 , - 1.847759008407593e-3 , 9.000000000000001e-3 ,
7.653668522834778e-4 , - 7.653668880462647e-3 , 5.0e-3 , 0.01847759056091309
, - 0.01268786525726318 , 5.0e-3 , 0.01546020889282227 , -
0.01111140441894531 , 5.0e-3 , 0.01662939262390137 , - 1.662939190864563e-3 ,
9.000000000000001e-3 , 1.111140489578247e-3 , - 0.01546020889282227 , 5.0e-3
, 0.01268786525726318 , - 0.01414213562011719 , 5.0e-3 , 0.01414213562011719
, - 0.01763842582702637 , 5.0e-3 , 9.427934646606446e-3 , -
0.01662939262390137 , 5.0e-3 , 0.01111140441894531 , - 0.01913880729675293 ,
5.0e-3 , 5.805693626403809e-3 , - 0.01847759056091309 , 5.0e-3 ,
7.653668880462647e-3 , - 2.0e-3 , 9.000000000000001e-3 ,
3.673940293057708e-19 , - 0.01990369415283203 , 5.0e-3 , 1.960342764854431e-3
, - 1.961570501327515e-3 , 9.000000000000001e-3 , - 3.901806473731995e-4 , -
0.01961570549011231 , 5.0e-3 , 3.901806354522705e-3 , - 0.01990369415283203 ,
5.0e-3 , - 1.960342764854431e-3 , - 0.02 , 5.0e-3 , 3.673940187178589e-18 , -
1.847759008407593e-3 , 9.000000000000001e-3 , - 7.653668522834778e-4 , -
0.01913880729675293 , 5.0e-3 , - 5.805693626403809e-3 , -
7.653668522834778e-4 , 9.000000000000001e-3 , - 1.847759008407593e-3 , -
0.01961570549011231 , 5.0e-3 , - 3.901806354522705e-3 , -
1.662939190864563e-3 , 9.000000000000001e-3 , - 1.111140489578247e-3 , -
0.01763842582702637 , 5.0e-3 , - 9.427934646606446e-3 , -
1.414213538169861e-3 , 9.000000000000001e-3 , - 1.414213538169861e-3 , -
0.01847759056091309 , 5.0e-3 , - 7.653668880462647e-3 , - 0.01546020889282227
, 5.0e-3 , - 0.01268786525726318 , - 0.01662939262390137 , 5.0e-3 , -
0.01111140441894531 , - 1.111140489578247e-3 , 9.000000000000001e-3 , -
1.662939190864563e-3 , - 0.01268786525726318 , 5.0e-3 , - 0.01546020889282227
, - 0.01414213562011719 , 5.0e-3 , - 0.01414213562011719 , -
5.805693626403809e-3 , 5.0e-3 , - 0.01913880729675293 , -
3.901806354522705e-3 , 5.0e-3 , - 0.01961570549011231 , -
9.427934646606446e-3 , 5.0e-3 , - 0.01763842582702637 , -
7.653668880462647e-3 , 5.0e-3 , - 0.01847759056091309 , - 0.01111140441894531
, 5.0e-3 , - 0.01662939262390137 , - 7.653668522834778e-4 , -
9.000000000000001e-3 , - 1.847759008407593e-3 , - 5.805693626403809e-3 , -
5.0e-3 , - 0.01913880729675293 , - 1.961570501327515e-3 , -
9.000000000000001e-3 , - 3.901806473731995e-4 , - 1.961570501327515e-3 , -
9.000000000000001e-3 , 3.901806473731995e-4 , - 3.901806354522705e-3 , -
5.0e-3 , - 0.01961570549011231 , - 1.111140489578247e-3 , -
9.000000000000001e-3 , - 1.662939190864563e-3 , - 9.427934646606446e-3 , -
5.0e-3 , - 0.01763842582702637 , - 1.414213538169861e-3 , -
9.000000000000001e-3 , - 1.414213538169861e-3 , - 1.847759008407593e-3 , -
9.000000000000001e-3 , - 7.653668522834778e-4 , - 7.653668880462647e-3 , -
5.0e-3 , - 0.01847759056091309 , - 0.01268786525726318 , - 5.0e-3 , -
0.01546020889282227 , - 0.01111140441894531 , - 5.0e-3 , -
0.01662939262390137 , - 1.662939190864563e-3 , - 9.000000000000001e-3 , -
1.111140489578247e-3 , - 0.01546020889282227 , - 5.0e-3 , -
0.01268786525726318 , - 0.01414213562011719 , - 5.0e-3 , -
0.01414213562011719 , - 0.01763842582702637 , - 5.0e-3 , -
9.427934646606446e-3 , - 0.01662939262390137 , - 5.0e-3 , -
0.01111140441894531 , - 0.01913880729675293 , - 5.0e-3 , -
5.805693626403809e-3 , - 0.01847759056091309 , - 5.0e-3 , -
7.653668880462647e-3 , - 2.0e-3 , - 9.000000000000001e-3 , -
3.673940293057708e-19 , - 0.01990369415283203 , - 5.0e-3 , -
1.960342764854431e-3 , - 0.01961570549011231 , - 5.0e-3 , -
3.901806354522705e-3 , - 0.01990369415283203 , - 5.0e-3 ,
1.960342764854431e-3 , - 0.02 , - 5.0e-3 , 3.673940187178589e-18 , -
1.847759008407593e-3 , - 9.000000000000001e-3 , 7.653668522834778e-4 , -
0.01913880729675293 , - 5.0e-3 , 5.805693626403809e-3 , -
7.653668522834778e-4 , - 9.000000000000001e-3 , 1.847759008407593e-3 , -
0.01961570549011231 , - 5.0e-3 , 3.901806354522705e-3 , -
1.662939190864563e-3 , - 9.000000000000001e-3 , 1.111140489578247e-3 , -
0.01763842582702637 , - 5.0e-3 , 9.427934646606446e-3 , -
1.414213538169861e-3 , - 9.000000000000001e-3 , 1.414213538169861e-3 , -
0.01847759056091309 , - 5.0e-3 , 7.653668880462647e-3 , - 0.01546020889282227
, - 5.0e-3 , 0.01268786525726318 , - 0.01662939262390137 , - 5.0e-3 ,
0.01111140441894531 , - 1.111140489578247e-3 , - 9.000000000000001e-3 ,
1.662939190864563e-3 , - 0.01268786525726318 , - 5.0e-3 , 0.01546020889282227
, - 0.01414213562011719 , - 5.0e-3 , 0.01414213562011719 , -
3.901806354522705e-3 , - 5.0e-3 , 0.01961570549011231 , -
5.805693626403809e-3 , - 5.0e-3 , 0.01913880729675293 , -
7.653668880462647e-3 , - 5.0e-3 , 0.01847759056091309 , -
9.427934646606446e-3 , - 5.0e-3 , 0.01763842582702637 , - 0.01111140441894531
, - 5.0e-3 , 0.01662939262390137 } ; static const int vx_index [ 192 ] = { 0
, 5 , 15 , 21 , 30 , 35 , 41 , 48 , 54 , 62 , 69 , 77 , 87 , 92 , 97 , 103 ,
110 , 115 , 121 , 126 , 131 , 137 , 142 , 148 , 153 , 159 , 164 , 169 , 175 ,
180 , 186 , 192 , 200 , 206 , 211 , 216 , 222 , 229 , 236 , 241 , 247 , 252 ,
257 , 263 , 272 , 277 , 283 , 289 , 294 , 299 , 304 , 310 , 315 , 321 , 326 ,
331 , 341 , 347 , 356 , 361 , 367 , 374 , 380 , 388 , 396 , 406 , 415 , 420 ,
425 , 431 , 438 , 443 , 449 , 454 , 459 , 465 , 470 , 476 , 481 , 487 , 492 ,
497 , 503 , 510 , 515 , 521 , 525 , 533 , 539 , 544 , 549 , 555 , 562 , 569 ,
574 , 580 , 585 , 590 , 596 , 601 , 607 , 613 , 618 , 623 , 628 , 634 , 640 ,
645 , 650 , 658 , 664 , 673 , 678 , 683 , 689 , 696 , 703 , 708 , 714 , 719 ,
724 , 730 , 735 , 741 , 746 , 752 , 757 , 762 , 768 , 776 , 781 , 787 , 793 ,
800 , 806 , 814 , 819 , 824 , 830 , 837 , 842 , 848 , 853 , 858 , 864 , 869 ,
875 , 880 , 886 , 891 , 896 , 904 , 910 , 918 , 927 , 932 , 937 , 943 , 950 ,
957 , 962 , 968 , 973 , 978 , 984 , 989 , 995 , 1000 , 1006 , 1011 , 1016 ,
1022 , 1027 , 1033 , 1037 , 1044 , 1050 , 1058 , 1063 , 1068 , 1074 , 1081 ,
1086 , 1092 , 1097 , 1102 , 1108 , 1113 , 1118 , 1124 , 1129 , 1135 } ;
static const int vx_valency [ 192 ] = { 5 , 10 , 6 , 9 , 5 , 6 , 7 , 6 , 8 ,
7 , 8 , 10 , 5 , 5 , 6 , 7 , 5 , 6 , 5 , 5 , 6 , 5 , 6 , 5 , 6 , 5 , 5 , 6 ,
5 , 6 , 6 , 8 , 6 , 5 , 5 , 6 , 7 , 7 , 5 , 6 , 5 , 5 , 6 , 9 , 5 , 6 , 6 , 5
, 5 , 5 , 6 , 5 , 6 , 5 , 5 , 10 , 6 , 9 , 5 , 6 , 7 , 6 , 8 , 8 , 10 , 9 , 5
, 5 , 6 , 7 , 5 , 6 , 5 , 5 , 6 , 5 , 6 , 5 , 6 , 5 , 5 , 6 , 7 , 5 , 6 , 4 ,
8 , 6 , 5 , 5 , 6 , 7 , 7 , 5 , 6 , 5 , 5 , 6 , 5 , 6 , 6 , 5 , 5 , 5 , 6 , 6
, 5 , 5 , 8 , 6 , 9 , 5 , 5 , 6 , 7 , 7 , 5 , 6 , 5 , 5 , 6 , 5 , 6 , 5 , 6 ,
5 , 5 , 6 , 8 , 5 , 6 , 6 , 7 , 6 , 8 , 5 , 5 , 6 , 7 , 5 , 6 , 5 , 5 , 6 , 5
, 6 , 5 , 6 , 5 , 5 , 8 , 6 , 8 , 9 , 5 , 5 , 6 , 7 , 7 , 5 , 6 , 5 , 5 , 6 ,
5 , 6 , 5 , 6 , 5 , 5 , 6 , 5 , 6 , 4 , 7 , 6 , 8 , 5 , 5 , 6 , 7 , 5 , 6 , 5
, 5 , 6 , 5 , 5 , 6 , 5 , 6 , 5 } ; static const int vx_adjacency_graph [
1140 ] = { 1 , 2 , 4 , 5 , 3 , 2 , 0 , 3 , 11 , 10 , 9 , 8 , 6 , 7 , 12 , 0 ,
1 , 12 , 97 , 101 , 4 , 1 , 0 , 5 , 187 , 188 , 176 , 153 , 43 , 11 , 5 , 0 ,
2 , 101 , 100 , 0 , 4 , 100 , 111 , 187 , 3 , 7 , 1 , 8 , 15 , 13 , 14 , 16 ,
1 , 6 , 16 , 99 , 98 , 12 , 6 , 1 , 9 , 24 , 25 , 22 , 19 , 15 , 8 , 1 , 10 ,
26 , 27 , 28 , 24 , 9 , 1 , 11 , 31 , 32 , 33 , 29 , 26 , 10 , 1 , 3 , 43 ,
41 , 42 , 44 , 45 , 36 , 31 , 2 , 1 , 7 , 98 , 97 , 14 , 6 , 15 , 17 , 18 , 6
, 13 , 18 , 104 , 103 , 16 , 13 , 6 , 8 , 19 , 20 , 21 , 17 , 7 , 6 , 14 ,
103 , 99 , 13 , 15 , 21 , 105 , 106 , 18 , 13 , 17 , 106 , 104 , 14 , 20 , 15
, 8 , 22 , 23 , 15 , 19 , 23 , 94 , 107 , 21 , 15 , 20 , 107 , 105 , 17 , 19
, 8 , 25 , 90 , 95 , 23 , 19 , 22 , 95 , 94 , 20 , 8 , 9 , 28 , 87 , 93 , 25
, 8 , 24 , 93 , 90 , 22 , 27 , 9 , 10 , 29 , 30 , 9 , 26 , 30 , 84 , 88 , 28
, 9 , 27 , 88 , 87 , 24 , 26 , 10 , 33 , 83 , 81 , 30 , 26 , 29 , 81 , 85 ,
84 , 27 , 32 , 10 , 11 , 36 , 37 , 34 , 35 , 38 , 10 , 31 , 38 , 79 , 78 , 33
, 10 , 32 , 78 , 83 , 29 , 35 , 31 , 37 , 39 , 40 , 31 , 34 , 40 , 77 , 76 ,
38 , 31 , 11 , 45 , 49 , 50 , 48 , 37 , 31 , 36 , 48 , 52 , 53 , 39 , 34 , 31
, 35 , 76 , 79 , 32 , 34 , 37 , 53 , 75 , 74 , 40 , 34 , 39 , 74 , 77 , 35 ,
42 , 11 , 43 , 46 , 47 , 11 , 41 , 47 , 58 , 56 , 44 , 41 , 11 , 3 , 153 ,
152 , 150 , 151 , 154 , 46 , 11 , 42 , 56 , 66 , 45 , 11 , 44 , 66 , 61 , 49
, 36 , 41 , 43 , 154 , 146 , 59 , 47 , 42 , 41 , 46 , 59 , 58 , 37 , 36 , 50
, 51 , 52 , 36 , 45 , 61 , 70 , 50 , 36 , 49 , 70 , 68 , 51 , 48 , 48 , 50 ,
68 , 72 , 52 , 48 , 51 , 72 , 71 , 53 , 37 , 37 , 52 , 71 , 75 , 39 , 55 , 56
, 58 , 59 , 57 , 56 , 54 , 57 , 65 , 64 , 63 , 62 , 60 , 61 , 66 , 54 , 55 ,
66 , 44 , 42 , 58 , 55 , 54 , 59 , 146 , 145 , 134 , 128 , 110 , 65 , 59 , 54
, 56 , 42 , 47 , 54 , 58 , 47 , 46 , 146 , 57 , 61 , 55 , 62 , 69 , 67 , 68 ,
70 , 55 , 60 , 70 , 49 , 45 , 66 , 60 , 55 , 63 , 78 , 79 , 76 , 73 , 69 , 62
, 55 , 64 , 82 , 80 , 81 , 83 , 78 , 63 , 55 , 65 , 96 , 97 , 98 , 99 , 91 ,
86 , 82 , 64 , 55 , 57 , 110 , 108 , 109 , 111 , 100 , 96 , 56 , 55 , 61 , 45
, 44 , 68 , 60 , 69 , 71 , 72 , 60 , 67 , 72 , 51 , 50 , 70 , 67 , 60 , 62 ,
73 , 74 , 75 , 71 , 61 , 60 , 68 , 50 , 49 , 67 , 69 , 75 , 53 , 52 , 72 , 68
, 67 , 71 , 52 , 51 , 74 , 69 , 62 , 76 , 77 , 69 , 73 , 77 , 40 , 39 , 75 ,
71 , 69 , 74 , 39 , 53 , 73 , 62 , 79 , 38 , 35 , 77 , 74 , 73 , 76 , 35 , 40
, 62 , 63 , 83 , 33 , 32 , 79 , 76 , 62 , 78 , 32 , 38 , 81 , 63 , 82 , 84 ,
85 , 63 , 80 , 85 , 30 , 29 , 83 , 80 , 63 , 64 , 86 , 87 , 88 , 84 , 78 , 63
, 81 , 29 , 33 , 80 , 82 , 88 , 27 , 30 , 85 , 81 , 80 , 84 , 30 , 87 , 82 ,
64 , 91 , 92 , 89 , 90 , 93 , 82 , 86 , 93 , 24 , 28 , 88 , 84 , 82 , 87 , 28
, 27 , 90 , 86 , 92 , 94 , 95 , 86 , 89 , 95 , 22 , 25 , 93 , 86 , 64 , 99 ,
103 , 104 , 102 , 92 , 86 , 91 , 102 , 105 , 107 , 94 , 89 , 87 , 86 , 90 ,
25 , 24 , 89 , 92 , 107 , 20 , 23 , 95 , 90 , 89 , 94 , 23 , 22 , 97 , 64 ,
65 , 100 , 101 , 64 , 96 , 101 , 2 , 12 , 98 , 64 , 97 , 12 , 7 , 99 , 64 ,
98 , 7 , 16 , 103 , 91 , 96 , 65 , 111 , 5 , 4 , 101 , 97 , 96 , 100 , 4 , 2
, 92 , 91 , 104 , 106 , 105 , 91 , 99 , 16 , 14 , 104 , 91 , 103 , 14 , 18 ,
106 , 102 , 92 , 102 , 106 , 17 , 21 , 107 , 102 , 104 , 18 , 17 , 105 , 94 ,
92 , 105 , 21 , 20 , 109 , 65 , 110 , 115 , 114 , 112 , 113 , 116 , 65 , 108
, 116 , 188 , 187 , 111 , 108 , 65 , 57 , 128 , 126 , 127 , 129 , 124 , 115 ,
100 , 65 , 109 , 187 , 5 , 113 , 108 , 114 , 117 , 118 , 108 , 112 , 118 ,
190 , 189 , 116 , 112 , 108 , 115 , 119 , 120 , 121 , 117 , 114 , 108 , 110 ,
124 , 125 , 122 , 119 , 109 , 108 , 113 , 189 , 188 , 112 , 114 , 121 , 185 ,
191 , 118 , 113 , 112 , 117 , 191 , 190 , 120 , 114 , 115 , 122 , 123 , 114 ,
119 , 123 , 182 , 186 , 121 , 117 , 114 , 120 , 186 , 185 , 119 , 115 , 125 ,
179 , 183 , 123 , 120 , 119 , 122 , 183 , 182 , 115 , 110 , 129 , 175 , 181 ,
125 , 122 , 115 , 124 , 181 , 179 , 127 , 110 , 128 , 130 , 131 , 110 , 126 ,
131 , 172 , 177 , 129 , 126 , 110 , 57 , 134 , 132 , 133 , 135 , 130 , 124 ,
110 , 127 , 177 , 175 , 126 , 128 , 135 , 171 , 170 , 131 , 127 , 126 , 130 ,
170 , 173 , 172 , 133 , 128 , 134 , 138 , 136 , 137 , 139 , 128 , 132 , 139 ,
168 , 167 , 135 , 128 , 57 , 145 , 148 , 147 , 142 , 138 , 132 , 128 , 133 ,
167 , 171 , 130 , 137 , 132 , 138 , 140 , 141 , 132 , 136 , 141 , 166 , 165 ,
139 , 136 , 132 , 134 , 142 , 143 , 144 , 140 , 133 , 132 , 137 , 165 , 168 ,
136 , 138 , 144 , 164 , 163 , 141 , 137 , 136 , 140 , 163 , 166 , 138 , 134 ,
147 , 149 , 143 , 138 , 142 , 149 , 161 , 160 , 144 , 140 , 138 , 143 , 160 ,
164 , 134 , 57 , 146 , 154 , 151 , 148 , 145 , 57 , 59 , 46 , 154 , 142 , 134
, 148 , 159 , 156 , 149 , 147 , 134 , 145 , 151 , 159 , 143 , 142 , 147 , 156
, 161 , 151 , 43 , 152 , 158 , 157 , 155 , 156 , 159 , 43 , 150 , 159 , 148 ,
145 , 154 , 150 , 43 , 153 , 169 , 170 , 171 , 167 , 158 , 152 , 43 , 3 , 176
, 174 , 175 , 177 , 172 , 169 , 46 , 43 , 151 , 145 , 146 , 156 , 150 , 157 ,
160 , 161 , 150 , 155 , 161 , 149 , 147 , 159 , 155 , 150 , 158 , 162 , 163 ,
164 , 160 , 157 , 150 , 152 , 167 , 168 , 165 , 162 , 151 , 150 , 156 , 147 ,
148 , 155 , 157 , 164 , 144 , 143 , 161 , 155 , 160 , 143 , 149 , 156 , 163 ,
157 , 158 , 165 , 166 , 157 , 162 , 166 , 141 , 140 , 164 , 157 , 163 , 140 ,
144 , 160 , 162 , 158 , 168 , 139 , 137 , 166 , 162 , 165 , 137 , 141 , 163 ,
158 , 152 , 171 , 135 , 133 , 168 , 158 , 167 , 133 , 139 , 165 , 170 , 152 ,
153 , 172 , 173 , 152 , 169 , 173 , 131 , 130 , 171 , 152 , 170 , 130 , 135 ,
167 , 169 , 153 , 177 , 127 , 131 , 173 , 169 , 172 , 131 , 170 , 175 , 153 ,
176 , 180 , 178 , 179 , 181 , 153 , 174 , 181 , 124 , 129 , 177 , 153 , 3 ,
188 , 189 , 190 , 184 , 180 , 174 , 153 , 175 , 129 , 127 , 172 , 179 , 174 ,
180 , 182 , 183 , 174 , 178 , 183 , 122 , 125 , 181 , 178 , 174 , 176 , 184 ,
185 , 186 , 182 , 174 , 179 , 125 , 124 , 175 , 178 , 180 , 186 , 120 , 123 ,
183 , 178 , 182 , 123 , 122 , 179 , 180 , 176 , 190 , 191 , 185 , 180 , 184 ,
191 , 117 , 121 , 186 , 180 , 185 , 121 , 120 , 182 , 3 , 5 , 111 , 109 , 188
, 3 , 187 , 109 , 116 , 189 , 176 , 176 , 188 , 116 , 113 , 190 , 176 , 189 ,
113 , 118 , 191 , 184 , 184 , 190 , 118 , 117 , 185 } ; static const int
seed_vx_ids [ 8 ] = { 107 , 121 , 186 , 21 , 75 , 144 , 164 , 53 } ; static
sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points ; cxh
. vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh . numHullPoints =
192 ; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh . graphSize = 1140 ;
cxh . seedVxIds = seed_vx_ids ; cxh . diagonalAABB = 0.05936328831862332 ; (
void ) rtdv ; return & cxh ; } void
Three_wheeled_base_d319c82e_1_initializeGeometries ( const struct
RuntimeDerivedValuesBundleTag * rtdv ) {
Three_wheeled_base_d319c82e_1_geometry_0 ( rtdv ) ;
Three_wheeled_base_d319c82e_1_geometry_1 ( rtdv ) ;
Three_wheeled_base_d319c82e_1_geometry_2 ( rtdv ) ; }
