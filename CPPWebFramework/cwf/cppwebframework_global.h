#ifndef CPPWEBFRAMEWORK_GLOBAL_H
#define CPPWEBFRAMEWORK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CPPWEBFRAMEWORK_LIBRARY)
#  define CPPWEBFRAMEWORKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CPPWEBFRAMEWORKSHARED_EXPORT Q_DECL_IMPORT
#endif

#define CWF_BEGIN_NAMESPACE namespace CWF {
#define CWF_END_NAMESPACE }

#endif // CPPWEBFRAMEWORK_GLOBAL_H