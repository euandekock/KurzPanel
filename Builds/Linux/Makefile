# Automatically generated makefile, created by the Introjucer
# Don't edit this file! Your changes will be overwritten when you re-save the Introjucer project!

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(TARGET_ARCH),)
  TARGET_ARCH := -march=native
endif

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifeq ($(CONFIG),Debug)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Debug
  OUTDIR := build
  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "DEBUG=1" -D "_DEBUG=1" -D JUCE_ALSA_MIDI_INPUT_NAME="\"KurzPanel Input\"" -D JUCE_ALSA_MIDI_OUTPUT_NAME="\"KurzPanel Output\"" -D JUCE_ALSA_MIDI_INPUT_PORT_NAME="\"KurzPanel In\"" -D JUCE_ALSA_MIDI_OUTPUT_PORT_NAME="\"KurzPanel Out\"" -D "JUCER_LINUX_MAKE_7346DA2A=1" -I /usr/include -I /usr/include/freetype2 -I ../../JuceLibraryCode
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -g -ggdb -O0
  CXXFLAGS += $(CFLAGS) 
  LDFLAGS += -L$(BINDIR) -L$(LIBDIR) -L/usr/X11R6/lib/ -lGL -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 
  LDDEPS :=
  RESFLAGS :=  -D "LINUX=1" -D "DEBUG=1" -D "_DEBUG=1" -D JUCE_ALSA_MIDI_INPUT_NAME="\"KurzPanel Input\"" -D JUCE_ALSA_MIDI_OUTPUT_NAME="\"KurzPanel Output\"" -D JUCE_ALSA_MIDI_INPUT_PORT_NAME="\"KurzPanel In\"" -D JUCE_ALSA_MIDI_OUTPUT_PORT_NAME="\"KurzPanel Out\"" -D "JUCER_LINUX_MAKE_7346DA2A=1" -I /usr/include -I /usr/include/freetype2 -I ../../JuceLibraryCode
  TARGET := KurzPanel
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
endif

ifeq ($(CONFIG),Release)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Release
  OUTDIR := build
  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "NDEBUG=1" -D JUCE_ALSA_MIDI_INPUT_NAME="\"KurzPanel Input\"" -D JUCE_ALSA_MIDI_OUTPUT_NAME="\"KurzPanel Output\"" -D JUCE_ALSA_MIDI_INPUT_PORT_NAME="\"KurzPanel In\"" -D JUCE_ALSA_MIDI_OUTPUT_PORT_NAME="\"KurzPanel Out\"" -D "JUCER_LINUX_MAKE_7346DA2A=1" -I /usr/include -I /usr/include/freetype2 -I ../../JuceLibraryCode
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -Os
  CXXFLAGS += $(CFLAGS) 
  LDFLAGS += -L$(BINDIR) -L$(LIBDIR) -L/usr/X11R6/lib/ -lGL -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 
  LDDEPS :=
  RESFLAGS :=  -D "LINUX=1" -D "NDEBUG=1" -D JUCE_ALSA_MIDI_INPUT_NAME="\"KurzPanel Input\"" -D JUCE_ALSA_MIDI_OUTPUT_NAME="\"KurzPanel Output\"" -D JUCE_ALSA_MIDI_INPUT_PORT_NAME="\"KurzPanel In\"" -D JUCE_ALSA_MIDI_OUTPUT_PORT_NAME="\"KurzPanel Out\"" -D "JUCER_LINUX_MAKE_7346DA2A=1" -I /usr/include -I /usr/include/freetype2 -I ../../JuceLibraryCode
  TARGET := KurzPanel
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
endif

OBJECTS := \
  $(OBJDIR)/KurzLayerTab_19a2f55f.o \
  $(OBJDIR)/KurzProgramTab_500a0b4c.o \
  $(OBJDIR)/KurzShowProgram_3ceea216.o \
  $(OBJDIR)/k_showdirlist_aa556dbb.o \
  $(OBJDIR)/k_dir_f6e2dba.o \
  $(OBJDIR)/k_direntry_9bee4242.o \
  $(OBJDIR)/k_dirlist_982854d8.o \
  $(OBJDIR)/k_lfoshape_f8ce1949.o \
  $(OBJDIR)/k_lfoshapelist_b179e0e7.o \
  $(OBJDIR)/k_program_2240b831.o \
  $(OBJDIR)/k_programlist_9132cbcf.o \
  $(OBJDIR)/k_songlist_cfddba70.o \
  $(OBJDIR)/kurz_connection_1416370c.o \
  $(OBJDIR)/kurz_sysex_msg_da053d1e.o \
  $(OBJDIR)/kurz_view_lfo_shape_f6ba302b.o \
  $(OBJDIR)/MainWindow_499ac812.o \
  $(OBJDIR)/Main_90ebc5c2.o \
  $(OBJDIR)/Rack_8dea4be0.o \
  $(OBJDIR)/BinaryData_ce4232d4.o \
  $(OBJDIR)/juce_audio_basics_2442e4ea.o \
  $(OBJDIR)/juce_audio_devices_a4c8a728.o \
  $(OBJDIR)/juce_audio_formats_d349f0c8.o \
  $(OBJDIR)/juce_audio_processors_44a134a2.o \
  $(OBJDIR)/juce_audio_utils_f63b12e8.o \
  $(OBJDIR)/juce_core_aff681cc.o \
  $(OBJDIR)/juce_data_structures_bdd6d488.o \
  $(OBJDIR)/juce_events_79b2840.o \
  $(OBJDIR)/juce_graphics_c8f1e7a4.o \
  $(OBJDIR)/juce_gui_basics_a630dd20.o \
  $(OBJDIR)/juce_gui_extra_7767d6a8.o \
  $(OBJDIR)/juce_opengl_c7e3506c.o \

.PHONY: clean

$(OUTDIR)/$(TARGET): $(OBJECTS) $(LDDEPS) $(RESOURCES)
	@echo Linking KurzPanel
	-@mkdir -p $(BINDIR)
	-@mkdir -p $(LIBDIR)
	-@mkdir -p $(OUTDIR)
	@$(BLDCMD)

clean:
	@echo Cleaning KurzPanel
	-@rm -f $(OUTDIR)/$(TARGET)
	-@rm -rf $(OBJDIR)/*
	-@rm -rf $(OBJDIR)

strip:
	@echo Stripping KurzPanel
	-@strip --strip-unneeded $(OUTDIR)/$(TARGET)

$(OBJDIR)/KurzLayerTab_19a2f55f.o: ../../Source/KurzLayerTab.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling KurzLayerTab.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/KurzProgramTab_500a0b4c.o: ../../Source/KurzProgramTab.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling KurzProgramTab.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/KurzShowProgram_3ceea216.o: ../../Source/KurzShowProgram.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling KurzShowProgram.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/k_showdirlist_aa556dbb.o: ../../Source/k_showdirlist.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling k_showdirlist.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/k_dir_f6e2dba.o: ../../Source/k_dir.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling k_dir.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/k_direntry_9bee4242.o: ../../Source/k_direntry.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling k_direntry.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/k_dirlist_982854d8.o: ../../Source/k_dirlist.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling k_dirlist.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/k_lfoshape_f8ce1949.o: ../../Source/k_lfoshape.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling k_lfoshape.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/k_lfoshapelist_b179e0e7.o: ../../Source/k_lfoshapelist.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling k_lfoshapelist.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/k_program_2240b831.o: ../../Source/k_program.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling k_program.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/k_programlist_9132cbcf.o: ../../Source/k_programlist.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling k_programlist.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/k_songlist_cfddba70.o: ../../Source/k_songlist.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling k_songlist.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/kurz_connection_1416370c.o: ../../Source/kurz_connection.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling kurz_connection.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/kurz_sysex_msg_da053d1e.o: ../../Source/kurz_sysex_msg.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling kurz_sysex_msg.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/kurz_view_lfo_shape_f6ba302b.o: ../../Source/kurz_view_lfo_shape.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling kurz_view_lfo_shape.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/MainWindow_499ac812.o: ../../Source/MainWindow.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling MainWindow.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Main_90ebc5c2.o: ../../Source/Main.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Main.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Rack_8dea4be0.o: ../../Source/Rack.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Rack.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/BinaryData_ce4232d4.o: ../../JuceLibraryCode/BinaryData.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling BinaryData.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_basics_2442e4ea.o: ../../JuceLibraryCode/modules/juce_audio_basics/juce_audio_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_devices_a4c8a728.o: ../../JuceLibraryCode/modules/juce_audio_devices/juce_audio_devices.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_devices.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_formats_d349f0c8.o: ../../JuceLibraryCode/modules/juce_audio_formats/juce_audio_formats.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_formats.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_processors_44a134a2.o: ../../JuceLibraryCode/modules/juce_audio_processors/juce_audio_processors.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_processors.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_utils_f63b12e8.o: ../../JuceLibraryCode/modules/juce_audio_utils/juce_audio_utils.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_utils.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_core_aff681cc.o: ../../JuceLibraryCode/modules/juce_core/juce_core.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_core.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_data_structures_bdd6d488.o: ../../JuceLibraryCode/modules/juce_data_structures/juce_data_structures.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_events_79b2840.o: ../../JuceLibraryCode/modules/juce_events/juce_events.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_events.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_graphics_c8f1e7a4.o: ../../JuceLibraryCode/modules/juce_graphics/juce_graphics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_basics_a630dd20.o: ../../JuceLibraryCode/modules/juce_gui_basics/juce_gui_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_extra_7767d6a8.o: ../../JuceLibraryCode/modules/juce_gui_extra/juce_gui_extra.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_opengl_c7e3506c.o: ../../JuceLibraryCode/modules/juce_opengl/juce_opengl.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_opengl.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)
