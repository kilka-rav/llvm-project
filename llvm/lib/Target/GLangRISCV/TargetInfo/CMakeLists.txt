add_llvm_component_library(LLVMGLangRISCVInfo
  GLangRISCVTargetInfo.cpp

  LINK_COMPONENTS
  Support

  ADD_TO_COMPONENT
  GLangRISCV
)