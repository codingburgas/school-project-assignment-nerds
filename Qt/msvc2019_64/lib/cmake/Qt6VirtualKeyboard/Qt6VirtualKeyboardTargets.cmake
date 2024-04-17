# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.8)
   message(FATAL_ERROR "CMake >= 2.8.0 required")
endif()
if(CMAKE_VERSION VERSION_LESS "2.8.3")
   message(FATAL_ERROR "CMake >= 2.8.3 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.8.3...3.25)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_cmake_targets_defined "")
set(_cmake_targets_not_defined "")
set(_cmake_expected_targets "")
foreach(_cmake_expected_target IN ITEMS Qt6::VirtualKeyboard Qt6::VirtualKeyboardPrivate)
  list(APPEND _cmake_expected_targets "${_cmake_expected_target}")
  if(TARGET "${_cmake_expected_target}")
    list(APPEND _cmake_targets_defined "${_cmake_expected_target}")
  else()
    list(APPEND _cmake_targets_not_defined "${_cmake_expected_target}")
  endif()
endforeach()
unset(_cmake_expected_target)
if(_cmake_targets_defined STREQUAL _cmake_expected_targets)
  unset(_cmake_targets_defined)
  unset(_cmake_targets_not_defined)
  unset(_cmake_expected_targets)
  unset(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT _cmake_targets_defined STREQUAL "")
  string(REPLACE ";" ", " _cmake_targets_defined_text "${_cmake_targets_defined}")
  string(REPLACE ";" ", " _cmake_targets_not_defined_text "${_cmake_targets_not_defined}")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_cmake_targets_defined_text}\nTargets not yet defined: ${_cmake_targets_not_defined_text}\n")
endif()
unset(_cmake_targets_defined)
unset(_cmake_targets_not_defined)
unset(_cmake_expected_targets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target Qt6::VirtualKeyboard
add_library(Qt6::VirtualKeyboard SHARED IMPORTED)

set_target_properties(Qt6::VirtualKeyboard PROPERTIES
  COMPATIBLE_INTERFACE_STRING "QT_MAJOR_VERSION"
  INTERFACE_COMPILE_DEFINITIONS "QT_VIRTUALKEYBOARD_LIB"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include/QtVirtualKeyboard;${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "Qt::Core;Qt::Gui;Qt::Qml;Qt::Quick"
  INTERFACE_QT_MAJOR_VERSION "6"
  INTERFACE_SOURCES "\$<\$<BOOL:\$<TARGET_PROPERTY:QT_CONSUMES_METATYPES>>:${_IMPORT_PREFIX}/./metatypes/qt6virtualkeyboard_metatypes.json>"
  QT_DISABLED_PRIVATE_FEATURES "vkb_sensitive_debug;cerence_sdk;cerence_hwr;cerence_hwr_alphabetic;cerence_hwr_cjk;cerence_xt9;system_hunspell;3rdparty_hunspell;hunspell;myscript;vkb_no_bundle_pinyin;vkb_no_bundle_tcime;example_hwr;vkb_lang_zh_HK"
  QT_DISABLED_PUBLIC_FEATURES "vkb_record_trace_input;vkb_arrow_keynavigation;vkb_no_builtin_style;vkb_retro_style;vkb_bundle_cerence;vkb_bundle_cerence_hwr;vkb_bundle_cerence_xt9;vkb_cerence_xt9_debug;vkb_cerence_xt9_9key_layouts;vkb_cerence_static"
  QT_ENABLED_PRIVATE_FEATURES "openwnn;pinyin;tcime;zhuyin;cangjie;hangul;thai;vkb_lang_ar_AR;vkb_lang_bg_BG;vkb_lang_cs_CZ;vkb_lang_da_DK;vkb_lang_de_DE;vkb_lang_el_GR;vkb_lang_en_GB;vkb_lang_en_US;vkb_lang_es_ES;vkb_lang_es_MX;vkb_lang_et_EE;vkb_lang_fa_FA;vkb_lang_fi_FI;vkb_lang_fr_CA;vkb_lang_fr_FR;vkb_lang_he_IL;vkb_lang_hi_IN;vkb_lang_hr_HR;vkb_lang_hu_HU;vkb_lang_id_ID;vkb_lang_it_IT;vkb_lang_ja_JP;vkb_lang_ko_KR;vkb_lang_ms_MY;vkb_lang_nb_NO;vkb_lang_nl_NL;vkb_lang_pl_PL;vkb_lang_pt_BR;vkb_lang_pt_PT;vkb_lang_ro_RO;vkb_lang_ru_RU;vkb_lang_sk_SK;vkb_lang_sl_SI;vkb_lang_sq_AL;vkb_lang_sr_SP;vkb_lang_sv_SE;vkb_lang_th_TH;vkb_lang_tr_TR;vkb_lang_uk_UA;vkb_lang_vi_VN;vkb_lang_zh_CN;vkb_lang_zh_TW"
  QT_ENABLED_PUBLIC_FEATURES "vkb_desktop;vkb_layouts;vkb_default_style"
  QT_QMAKE_PRIVATE_CONFIG ""
  QT_QMAKE_PUBLIC_CONFIG ""
  QT_QMAKE_PUBLIC_QT_CONFIG ""
  _qt_config_module_name "virtualkeyboard"
  _qt_is_public_module "TRUE"
  _qt_module_has_headers "ON"
  _qt_module_has_private_headers "TRUE"
  _qt_module_has_public_headers "TRUE"
  _qt_module_include_name "QtVirtualKeyboard"
  _qt_module_interface_name "VirtualKeyboard"
  _qt_package_name "Qt6VirtualKeyboard"
  _qt_package_version "6.7.0"
  _qt_private_module_target_name "VirtualKeyboardPrivate"
  _qt_qml_module_installed_plugin_target "Qt6::qtvkbplugin"
  _qt_qml_module_plugin_target "qtvkbplugin"
)

# Create imported target Qt6::VirtualKeyboardPrivate
add_library(Qt6::VirtualKeyboardPrivate INTERFACE IMPORTED)

set_target_properties(Qt6::VirtualKeyboardPrivate PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "\$<\$<BOOL:\$<TARGET_PROPERTY:Qt6::VirtualKeyboard,_qt_module_has_private_headers>>:>;\$<\$<BOOL:\$<TARGET_PROPERTY:Qt6::VirtualKeyboard,_qt_module_has_private_headers>>:>;\$<\$<BOOL:\$<TARGET_PROPERTY:Qt6::VirtualKeyboard,_qt_module_has_private_headers>>:${_IMPORT_PREFIX}/include/QtVirtualKeyboard/6.7.0>;\$<\$<BOOL:\$<TARGET_PROPERTY:Qt6::VirtualKeyboard,_qt_module_has_private_headers>>:${_IMPORT_PREFIX}/include/QtVirtualKeyboard/6.7.0/QtVirtualKeyboard>"
  INTERFACE_LINK_LIBRARIES "Qt::CorePrivate;Qt::GuiPrivate;Qt6::VirtualKeyboard"
  _qt_config_module_name "virtualkeyboard_private"
  _qt_is_private_module "TRUE"
  _qt_package_name "Qt6VirtualKeyboard"
  _qt_package_version "6.7.0"
  _qt_public_module_target_name "VirtualKeyboard"
)

if(CMAKE_VERSION VERSION_LESS 3.1.0)
  message(FATAL_ERROR "This file relies on consumers using CMake 3.1.0 or greater.")
endif()

# Load information for each installed configuration.
file(GLOB _cmake_config_files "${CMAKE_CURRENT_LIST_DIR}/Qt6VirtualKeyboardTargets-*.cmake")
foreach(_cmake_config_file IN LISTS _cmake_config_files)
  include("${_cmake_config_file}")
endforeach()
unset(_cmake_config_file)
unset(_cmake_config_files)

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(_cmake_target IN LISTS _cmake_import_check_targets)
  foreach(_cmake_file IN LISTS "_cmake_import_check_files_for_${_cmake_target}")
    if(NOT EXISTS "${_cmake_file}")
      message(FATAL_ERROR "The imported target \"${_cmake_target}\" references the file
   \"${_cmake_file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_cmake_file)
  unset("_cmake_import_check_files_for_${_cmake_target}")
endforeach()
unset(_cmake_target)
unset(_cmake_import_check_targets)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
