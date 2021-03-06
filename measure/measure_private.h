/**
 * discover - a real-time monitoring and analysis tool for IEC 61850-9-2LE Sampled Values
 *
 * Copyright (c) 2013 Andrew Roscoe, Steven Blair
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef RTW_HEADER_measure_private_h_
#define RTW_HEADER_measure_private_h_
#include "rtwtypes.h"
#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else

#ifndef RTWTYPES_ID_C08S16I32L32N32F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif
#endif
#endif

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern void MWDSPCG_FFT_Interleave_R2BR_D(const real_T x[], creal_T y[], const
  int32_T nChans, const int32_T nRows);
extern void MWDSPCG_R2DIT_TBLS_Z(creal_T y[], const int32_T nChans, const
  int32_T nRows, const int32_T fftLen, const int32_T offset, const real_T
  tablePtr[], const int32_T twiddleStep, const boolean_T isInverse);
extern void MWDSPCG_FFT_DblLen_Z(creal_T y[], const int32_T nChans, const
  int32_T nRows, const real_T twiddleTable[], const int32_T twiddleStep);

#endif

