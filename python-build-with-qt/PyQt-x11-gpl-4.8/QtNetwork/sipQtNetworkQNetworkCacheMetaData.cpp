/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:29 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtNetwork.h"

#line 153 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qabstractnetworkcache.sip"
#include <qabstractnetworkcache.h>
#line 39 "sipQtNetworkQNetworkCacheMetaData.cpp"

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qabstractnetworkcache.sip"
#include <qhash.h>
#include <qnetworkrequest.h>
#include <qvariant.h>
#line 45 "sipQtNetworkQNetworkCacheMetaData.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qnetworkrequest.sip"
#include <qnetworkrequest.h>
#line 48 "sipQtNetworkQNetworkCacheMetaData.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "sipQtNetworkQNetworkCacheMetaData.cpp"
#line 343 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 54 "sipQtNetworkQNetworkCacheMetaData.cpp"
#line 205 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 58 "sipQtNetworkQNetworkCacheMetaData.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 61 "sipQtNetworkQNetworkCacheMetaData.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 64 "sipQtNetworkQNetworkCacheMetaData.cpp"


extern "C" {static PyObject *meth_QNetworkCacheMetaData_isValid(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_url(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            QUrl *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->url());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_url, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_setUrl(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl * a0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, sipType_QUrl, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUrl(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setUrl, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_rawHeaders(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_rawHeaders(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            QNetworkCacheMetaData::RawHeaderList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkCacheMetaData::RawHeaderList(sipCpp->rawHeaders());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0600QPair_0100QByteArray_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_rawHeaders, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_setRawHeaders(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setRawHeaders(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData::RawHeaderList * a0;
        int a0State = 0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, sipType_QList_0600QPair_0100QByteArray_0100QByteArray,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRawHeaders(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QNetworkCacheMetaData::RawHeaderList *>(a0),sipType_QList_0600QPair_0100QByteArray_0100QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setRawHeaders, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_lastModified(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_lastModified(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            QDateTime *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDateTime(sipCpp->lastModified());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_lastModified, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_setLastModified(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setLastModified(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime * a0;
        int a0State = 0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLastModified(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setLastModified, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_expirationDate(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_expirationDate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            QDateTime *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDateTime(sipCpp->expirationDate());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_expirationDate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_setExpirationDate(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setExpirationDate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime * a0;
        int a0State = 0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setExpirationDate(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setExpirationDate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_saveToDisk(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_saveToDisk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->saveToDisk();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_saveToDisk, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_setSaveToDisk(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setSaveToDisk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSaveToDisk(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setSaveToDisk, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_attributes(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_attributes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            QNetworkCacheMetaData::AttributesMap *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkCacheMetaData::AttributesMap(sipCpp->attributes());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QHash_0100QNetworkRequest_Attribute_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_attributes, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkCacheMetaData_setAttributes(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setAttributes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData::AttributesMap * a0;
        int a0State = 0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, sipType_QHash_0100QNetworkRequest_Attribute_0100QVariant,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttributes(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QNetworkCacheMetaData::AttributesMap *>(a0),sipType_QHash_0100QNetworkRequest_Attribute_0100QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setAttributes, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QNetworkCacheMetaData___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkCacheMetaData___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkCacheMetaData *sipCpp = reinterpret_cast<QNetworkCacheMetaData *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkCacheMetaData));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkCacheMetaData, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkCacheMetaData::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkCacheMetaData,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkCacheMetaData___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkCacheMetaData___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkCacheMetaData *sipCpp = reinterpret_cast<QNetworkCacheMetaData *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkCacheMetaData));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkCacheMetaData, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkCacheMetaData::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkCacheMetaData,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkCacheMetaData(void *, const sipTypeDef *);}
static void *cast_QNetworkCacheMetaData(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QNetworkCacheMetaData)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkCacheMetaData(void *, int);}
static void release_QNetworkCacheMetaData(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkCacheMetaData *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QNetworkCacheMetaData(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkCacheMetaData(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkCacheMetaData *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkCacheMetaData *>(sipSrc);
}


extern "C" {static void *array_QNetworkCacheMetaData(SIP_SSIZE_T);}
static void *array_QNetworkCacheMetaData(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkCacheMetaData[sipNrElem];
}


extern "C" {static void *copy_QNetworkCacheMetaData(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkCacheMetaData(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkCacheMetaData(reinterpret_cast<const QNetworkCacheMetaData *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkCacheMetaData(sipSimpleWrapper *);}
static void dealloc_QNetworkCacheMetaData(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkCacheMetaData(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QNetworkCacheMetaData(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QNetworkCacheMetaData(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkCacheMetaData *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkCacheMetaData();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QNetworkCacheMetaData * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkCacheMetaData, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkCacheMetaData(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkCacheMetaData[] = {
    {(void *)slot_QNetworkCacheMetaData___ne__, ne_slot},
    {(void *)slot_QNetworkCacheMetaData___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkCacheMetaData[] = {
    {SIP_MLNAME_CAST(sipName_attributes), meth_QNetworkCacheMetaData_attributes, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_expirationDate), meth_QNetworkCacheMetaData_expirationDate, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QNetworkCacheMetaData_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lastModified), meth_QNetworkCacheMetaData_lastModified, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_rawHeaders), meth_QNetworkCacheMetaData_rawHeaders, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_saveToDisk), meth_QNetworkCacheMetaData_saveToDisk, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setAttributes), meth_QNetworkCacheMetaData_setAttributes, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setExpirationDate), meth_QNetworkCacheMetaData_setExpirationDate, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setLastModified), meth_QNetworkCacheMetaData_setLastModified, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setRawHeaders), meth_QNetworkCacheMetaData_setRawHeaders, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setSaveToDisk), meth_QNetworkCacheMetaData_setSaveToDisk, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setUrl), meth_QNetworkCacheMetaData_setUrl, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_url), meth_QNetworkCacheMetaData_url, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkCacheMetaData = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkCacheMetaData,
        {0}
    },
    {
        sipNameNr_QNetworkCacheMetaData,
        {0, 0, 1},
        13, methods_QNetworkCacheMetaData,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkCacheMetaData,
    init_QNetworkCacheMetaData,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QNetworkCacheMetaData,
    assign_QNetworkCacheMetaData,
    array_QNetworkCacheMetaData,
    copy_QNetworkCacheMetaData,
    release_QNetworkCacheMetaData,
    cast_QNetworkCacheMetaData,
    0,
    0,
    0
},
    0,
    0,
    0
};
