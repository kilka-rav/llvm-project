//===-- GLangRISCVTargetInfo.cpp - GLangRISCV Target Implementation -------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "GLangRISCV.h"
#include "llvm/IR/Module.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target llvm::TheGLangRISCVTarget;

extern "C" void LLVMInitializeGLangRISCVTargetInfo() {
  RegisterTarget<Triple::glangriscv,
                 /*HasJIT=*/false>
      X(TheGLangRISCVTarget, "GLangRISCV", "GLangRISCV (32-bit simulator arch)", "GLangRISCV");
}