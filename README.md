# nge-cmake

### Static lib:
source.basic/utils  <-  source.ui/efd_explorer.

### DLL:
source.ui/feat_edit  <-  source.ui/efd_explorer.

### DLL triplet decomposition (lib + dll + tests):
source.slv/viewer  <-  source.ui/efd_explorer.

### Platform-dependent polymorphic features:
source.ui/prop_man  <-  source.ui/efd_explorer.

### Win res dll:
source.ui/gui_res  <-  source.ui/efd_explorer.
Use corresponding INTERFACE library to add resource.h folder.

### IDL compilation:
source.x/idl

### "Configurations"
TODO: custom configurations
TODO: specific settings (defines, linked libs) for every configuration

### Delayload
TODO

### Custom PCH
TODO: use my pch.h

### C++20 modules
TODO

### C++20 header units
TODO

### VS project/file grouping
- set_property(GLOBAL PROPERTY USE_FOLDERS ON)
- set_target_properties( <prj_name> PROPERTIES FOLDER <folder> )
- source_group( <folder_name> FILES <src> )

### Dependency analysis
See graphvis_make.bat