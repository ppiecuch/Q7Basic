CONFIG-=debug
CONFIG+=warn_off

CONFIG(c++11): C11 = -c11
CONFIG(debug, debug|release): DBG = dbg
else: DBG = rel

DESTDIR = build-$$[QMAKE_SPEC]
OBJECTS_DIR = build-$$[QMAKE_SPEC]/$${TARGET}.$$DBG/obj
MOC_DIR = build-$$[QMAKE_SPEC]/$${TARGET}.$$DBG/ui
UI_DIR = build-$$[QMAKE_SPEC]/$${TARGET}.$$DBG/ui
RCC_DIR = build-$$[QMAKE_SPEC]/$${TARGET}.$$DBG/ui
