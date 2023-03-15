add_llvm_component_library(LLVMGLangRISCVDesc
  GLangRISCVMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  GLangRISCVInfo
  Support

  ADD_TO_COMPONENT
  GLangRISCV
)
