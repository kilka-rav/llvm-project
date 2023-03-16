add_llvm_component_group(GLangRISCV)

set(LLVM_TARGET_DEFINITIONS GLangRISCV.td)

tablegen(LLVM GLangRISCVGenRegisterInfo.inc -gen-register-info)
tablegen(LLVM GLangRISCVGenInstrInfo.inc -gen-instr-info)

MESSAGE("START GLANG RISCV")

add_public_tablegen_target(GLangRISCVCommonTableGen)

add_llvm_target(GLangRISCVCodeGen
  GLangRISCVTargetMachine.cpp

  LINK_COMPONENTS
  Analysis
  AsmPrinter
  CodeGen
  Core
  MC
  GLangRISCVDesc
  GLangRISCVInfo
  SelectionDAG
  Support
  Target
  GlobalISel

  ADD_TO_COMPONENT
  GLangRISCV
  )

add_subdirectory(TargetInfo)
add_subdirectory(MCTargetDesc)
