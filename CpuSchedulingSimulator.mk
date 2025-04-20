##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=CpuSchedulingSimulator
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/enuot/CPlusWorkspace/UdemyWorkspaceCPlus
ProjectPath            :=C:/Users/enuot/CPlusWorkspace/CpuSchedulingSimulator/CpuSchedulingSimulator
IntermediateDirectory  :=../../UdemyWorkspaceCPlus/build-$(WorkspaceConfiguration)/__/CpuSchedulingSimulator/CpuSchedulingSimulator
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=enuot
Date                   :=19/04/2025
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir -p
LinkerName             :=C:/cygwin64/bin/g++.exe
SharedObjectLinkerName :=C:/cygwin64/bin/gcc.exe-shared-fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/enuot/CPlusWorkspace/UdemyWorkspaceCPlus/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\..\UdemyWorkspaceCPlus\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/cygwin64/bin/ar.exe rcu
CXX      := C:/cygwin64/bin/g++.exe
CC       := C:/cygwin64/bin/gcc.exe
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/cygwin64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/RR.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Process.cpp$(ObjectSuffix) $(IntermediateDirectory)/fcfs.cpp$(ObjectSuffix) $(IntermediateDirectory)/SJF.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/RR.cpp$(ObjectSuffix): RR.cpp $(IntermediateDirectory)/RR.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/enuot/CPlusWorkspace/CpuSchedulingSimulator/CpuSchedulingSimulator/RR.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/RR.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/RR.cpp$(DependSuffix): RR.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/RR.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/RR.cpp$(DependSuffix) -MM RR.cpp

$(IntermediateDirectory)/RR.cpp$(PreprocessSuffix): RR.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/RR.cpp$(PreprocessSuffix) RR.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/enuot/CPlusWorkspace/CpuSchedulingSimulator/CpuSchedulingSimulator/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Process.cpp$(ObjectSuffix): Process.cpp $(IntermediateDirectory)/Process.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/enuot/CPlusWorkspace/CpuSchedulingSimulator/CpuSchedulingSimulator/Process.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Process.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Process.cpp$(DependSuffix): Process.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Process.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Process.cpp$(DependSuffix) -MM Process.cpp

$(IntermediateDirectory)/Process.cpp$(PreprocessSuffix): Process.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Process.cpp$(PreprocessSuffix) Process.cpp

$(IntermediateDirectory)/fcfs.cpp$(ObjectSuffix): fcfs.cpp $(IntermediateDirectory)/fcfs.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/enuot/CPlusWorkspace/CpuSchedulingSimulator/CpuSchedulingSimulator/fcfs.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/fcfs.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/fcfs.cpp$(DependSuffix): fcfs.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/fcfs.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/fcfs.cpp$(DependSuffix) -MM fcfs.cpp

$(IntermediateDirectory)/fcfs.cpp$(PreprocessSuffix): fcfs.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/fcfs.cpp$(PreprocessSuffix) fcfs.cpp

$(IntermediateDirectory)/SJF.cpp$(ObjectSuffix): SJF.cpp $(IntermediateDirectory)/SJF.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/enuot/CPlusWorkspace/CpuSchedulingSimulator/CpuSchedulingSimulator/SJF.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SJF.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SJF.cpp$(DependSuffix): SJF.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SJF.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SJF.cpp$(DependSuffix) -MM SJF.cpp

$(IntermediateDirectory)/SJF.cpp$(PreprocessSuffix): SJF.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SJF.cpp$(PreprocessSuffix) SJF.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


