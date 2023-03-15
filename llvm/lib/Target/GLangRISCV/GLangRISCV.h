//===-- GLangRISCV.h - Top-level interface for Sim representation ----*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains the entry points for global functions defined in
// the LLVM GLangRISCV back-end.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_GLangRISCV_GLangRISCV_H
#define LLVM_LIB_TARGET_GLangRISCV_GLangRISCV_H

#include "MCTargetDesc/GLangRISCVMCTargetDesc.h"
#include "llvm/Target/TargetMachine.h"

namespace llvm {
  class GLangRISCVTargetMachine;
  class FunctionPass;

} // end namespace llvm;

#endif
