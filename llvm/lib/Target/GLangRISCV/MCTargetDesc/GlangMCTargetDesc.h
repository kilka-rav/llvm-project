//===-- GLangRISCVMCTargetDesc.h - GLangRISCV Target Descriptions ---------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file provides GLangRISCV specific target descriptions.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_GLangRISCV_MCTARGETDESC_GLangRISCVMCTARGETDESC_H
#define LLVM_LIB_TARGET_GLangRISCV_MCTARGETDESC_GLangRISCVMCTARGETDESC_H

#include "llvm/Support/DataTypes.h"

#include <memory>

namespace llvm {
class Target;
class Triple;

extern Target TheGLangRISCVTarget;

} // End llvm namespace

// Defines symbolic names for GLangRISCV registers.  This defines a mapping from
// register name to register number.
#define GET_REGINFO_ENUM
#include "GLangRISCVGenRegisterInfo.inc"

// Defines symbolic names for the GLangRISCV instructions.
#define GET_INSTRINFO_ENUM
#include "GLangRISCVGenInstrInfo.inc"

#endif
