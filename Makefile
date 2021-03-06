#############################################################################
# Makefile for building: subdirs
# Generated by qmake (3.1) (Qt 5.9.7)
# Project:  subdirs.pro
# Template: subdirs
# Command: /usr/lib64/qt5/bin/qmake -o Makefile subdirs.pro
#############################################################################

MAKEFILE      = Makefile

first: make_first
QMAKE         = /usr/lib64/qt5/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
QINSTALL      = /usr/lib64/qt5/bin/qmake -install qinstall
QINSTALL_PROGRAM = /usr/lib64/qt5/bin/qmake -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = subdirs1.0.0
DISTDIR = /home/rick/Projects/mastermind/.tmp/subdirs1.0.0
SUBTARGETS    =  \
		sub-src


sub-src-qmake_all:  FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && $(QMAKE) -o Makefile /home/rick/Projects/mastermind/src/src.pro
	cd src/ && $(MAKE) -f Makefile qmake_all
sub-src: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) -o Makefile /home/rick/Projects/mastermind/src/src.pro ) && $(MAKE) -f Makefile
sub-src-make_first: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) -o Makefile /home/rick/Projects/mastermind/src/src.pro ) && $(MAKE) -f Makefile 
sub-src-all: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) -o Makefile /home/rick/Projects/mastermind/src/src.pro ) && $(MAKE) -f Makefile all
sub-src-clean: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) -o Makefile /home/rick/Projects/mastermind/src/src.pro ) && $(MAKE) -f Makefile clean
sub-src-distclean: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) -o Makefile /home/rick/Projects/mastermind/src/src.pro ) && $(MAKE) -f Makefile distclean
sub-src-install_subtargets: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) -o Makefile /home/rick/Projects/mastermind/src/src.pro ) && $(MAKE) -f Makefile install
sub-src-uninstall_subtargets: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) -o Makefile /home/rick/Projects/mastermind/src/src.pro ) && $(MAKE) -f Makefile uninstall

Makefile: subdirs.pro /usr/lib64/qt5/mkspecs/linux-g++/qmake.conf /usr/lib64/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib64/qt5/mkspecs/common/unix.conf \
		/usr/lib64/qt5/mkspecs/common/linux.conf \
		/usr/lib64/qt5/mkspecs/common/sanitize.conf \
		/usr/lib64/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib64/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib64/qt5/mkspecs/common/g++-base.conf \
		/usr/lib64/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib64/qt5/mkspecs/qconfig.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3danimation.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3danimation_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dcore_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dextras.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dextras_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dinput_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dlogic_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquick_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickanimation.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickextras.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickinput.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickrender.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3drender.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_3drender_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_egl_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_glx_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_location.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_location_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_positioning.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_positioning_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qml_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qmldebug_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quick_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_sensors.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_sensors_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_service_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_svg.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_svg_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_theme_support_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib64/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib64/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib64/qt5/mkspecs/features/qt_config.prf \
		/usr/lib64/qt5/mkspecs/linux-g++/qmake.conf \
		/usr/lib64/qt5/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib64/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib64/qt5/mkspecs/features/toolchain.prf \
		/usr/lib64/qt5/mkspecs/features/default_pre.prf \
		/usr/lib64/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib64/qt5/mkspecs/features/default_post.prf \
		/usr/lib64/qt5/mkspecs/features/warn_on.prf \
		/usr/lib64/qt5/mkspecs/features/qmake_use.prf \
		/usr/lib64/qt5/mkspecs/features/file_copies.prf \
		/usr/lib64/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib64/qt5/mkspecs/features/exceptions.prf \
		/usr/lib64/qt5/mkspecs/features/yacc.prf \
		/usr/lib64/qt5/mkspecs/features/lex.prf \
		subdirs.pro
	$(QMAKE) -o Makefile subdirs.pro
/usr/lib64/qt5/mkspecs/features/spec_pre.prf:
/usr/lib64/qt5/mkspecs/common/unix.conf:
/usr/lib64/qt5/mkspecs/common/linux.conf:
/usr/lib64/qt5/mkspecs/common/sanitize.conf:
/usr/lib64/qt5/mkspecs/common/gcc-base.conf:
/usr/lib64/qt5/mkspecs/common/gcc-base-unix.conf:
/usr/lib64/qt5/mkspecs/common/g++-base.conf:
/usr/lib64/qt5/mkspecs/common/g++-unix.conf:
/usr/lib64/qt5/mkspecs/qconfig.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3danimation.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3danimation_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dcore.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dcore_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dextras.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dextras_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dinput.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dinput_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dlogic.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dlogic_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquick.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquick_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickanimation.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickextras.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickextras_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickinput.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickinput_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickrender.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickrender_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickscene2d.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3drender.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_3drender_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_core.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_egl_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_fb_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_glx_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_gui.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_input_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_kms_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_location.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_location_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_network.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_packetprotocol_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_positioning.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_positioning_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qml.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qml_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qmldebug_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quick.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quick_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_sensors.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_sensors_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_service_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_sql.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_svg.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_svg_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_theme_support_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xml.pri:
/usr/lib64/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib64/qt5/mkspecs/features/qt_functions.prf:
/usr/lib64/qt5/mkspecs/features/qt_config.prf:
/usr/lib64/qt5/mkspecs/linux-g++/qmake.conf:
/usr/lib64/qt5/mkspecs/features/spec_post.prf:
.qmake.stash:
/usr/lib64/qt5/mkspecs/features/exclusive_builds.prf:
/usr/lib64/qt5/mkspecs/features/toolchain.prf:
/usr/lib64/qt5/mkspecs/features/default_pre.prf:
/usr/lib64/qt5/mkspecs/features/resolve_config.prf:
/usr/lib64/qt5/mkspecs/features/default_post.prf:
/usr/lib64/qt5/mkspecs/features/warn_on.prf:
/usr/lib64/qt5/mkspecs/features/qmake_use.prf:
/usr/lib64/qt5/mkspecs/features/file_copies.prf:
/usr/lib64/qt5/mkspecs/features/testcase_targets.prf:
/usr/lib64/qt5/mkspecs/features/exceptions.prf:
/usr/lib64/qt5/mkspecs/features/yacc.prf:
/usr/lib64/qt5/mkspecs/features/lex.prf:
subdirs.pro:
qmake: FORCE
	@$(QMAKE) -o Makefile subdirs.pro

qmake_all: sub-src-qmake_all FORCE

make_first: sub-src-make_first  FORCE
all: sub-src-all  FORCE
clean: sub-src-clean  FORCE
distclean: sub-src-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash
install_subtargets: sub-src-install_subtargets FORCE
uninstall_subtargets: sub-src-uninstall_subtargets FORCE

sub-src-check:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) -o Makefile /home/rick/Projects/mastermind/src/src.pro ) && $(MAKE) -f Makefile check
check: sub-src-check

sub-src-benchmark:
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) -o Makefile /home/rick/Projects/mastermind/src/src.pro ) && $(MAKE) -f Makefile benchmark
benchmark: sub-src-benchmark
install:install_subtargets  FORCE

uninstall: uninstall_subtargets FORCE

FORCE:

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: sub-src-distdir FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents /usr/lib64/qt5/mkspecs/features/spec_pre.prf /usr/lib64/qt5/mkspecs/common/unix.conf /usr/lib64/qt5/mkspecs/common/linux.conf /usr/lib64/qt5/mkspecs/common/sanitize.conf /usr/lib64/qt5/mkspecs/common/gcc-base.conf /usr/lib64/qt5/mkspecs/common/gcc-base-unix.conf /usr/lib64/qt5/mkspecs/common/g++-base.conf /usr/lib64/qt5/mkspecs/common/g++-unix.conf /usr/lib64/qt5/mkspecs/qconfig.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3danimation.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3danimation_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dcore.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dcore_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dextras.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dextras_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dinput.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dinput_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dlogic.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dlogic_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquick.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquick_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickanimation.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickanimation_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickextras.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickextras_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickinput.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickinput_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickrender.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickrender_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickscene2d.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3dquickscene2d_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3drender.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_3drender_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_concurrent_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_core.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_core_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_dbus.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_dbus_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_egl_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_fb_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_glx_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_gui.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_gui_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_input_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_kms_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_location.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_location_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_multimedia_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_multimediawidgets_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_network.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_network_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_opengl.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_opengl_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_packetprotocol_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_positioning.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_positioning_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_printsupport_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qml.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qml_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qmldebug_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qmltest_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_quick.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_quick_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_sensors.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_sensors_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_service_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_sql.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_sql_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_svg.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_svg_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_testlib.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_testlib_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_theme_support_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_widgets.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_widgets_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_xml.pri /usr/lib64/qt5/mkspecs/modules/qt_lib_xml_private.pri /usr/lib64/qt5/mkspecs/features/qt_functions.prf /usr/lib64/qt5/mkspecs/features/qt_config.prf /usr/lib64/qt5/mkspecs/linux-g++/qmake.conf /usr/lib64/qt5/mkspecs/features/spec_post.prf .qmake.stash /usr/lib64/qt5/mkspecs/features/exclusive_builds.prf /usr/lib64/qt5/mkspecs/features/toolchain.prf /usr/lib64/qt5/mkspecs/features/default_pre.prf /usr/lib64/qt5/mkspecs/features/resolve_config.prf /usr/lib64/qt5/mkspecs/features/default_post.prf /usr/lib64/qt5/mkspecs/features/warn_on.prf /usr/lib64/qt5/mkspecs/features/qmake_use.prf /usr/lib64/qt5/mkspecs/features/file_copies.prf /usr/lib64/qt5/mkspecs/features/testcase_targets.prf /usr/lib64/qt5/mkspecs/features/exceptions.prf /usr/lib64/qt5/mkspecs/features/yacc.prf /usr/lib64/qt5/mkspecs/features/lex.prf subdirs.pro $(DISTDIR)/

sub-src-distdir: FORCE
	@test -d src/ || mkdir -p src/
	cd src/ && ( test -e Makefile || $(QMAKE) -o Makefile /home/rick/Projects/mastermind/src/src.pro ) && $(MAKE) -e -f Makefile distdir DISTDIR=$(DISTDIR)/src

