#ifndef QTANDROID_GLOBAL_H
#define QTANDROID_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTANDROID_LIBRARY)
#  define QTANDROID_EXPORT Q_DECL_EXPORT
#else
#  define QTANDROID_EXPORT Q_DECL_IMPORT
#endif

#endif // QTANDROID_GLOBAL_H
