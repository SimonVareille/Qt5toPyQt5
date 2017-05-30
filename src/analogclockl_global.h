#ifndef MYLABEL_GLOBAL_H
#define MYLABEL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ANALOGCLOCK_LIBRARY)
#  define ANALOGCLOCKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define ANALOGCLOCKSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MYLABEL_GLOBAL_H