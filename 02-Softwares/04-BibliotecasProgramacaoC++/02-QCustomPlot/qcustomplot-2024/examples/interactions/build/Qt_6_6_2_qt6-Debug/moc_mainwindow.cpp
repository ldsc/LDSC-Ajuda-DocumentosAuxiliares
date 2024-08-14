/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "titleDoubleClick",
    "",
    "QMouseEvent*",
    "event",
    "axisLabelDoubleClick",
    "QCPAxis*",
    "axis",
    "QCPAxis::SelectablePart",
    "part",
    "legendDoubleClick",
    "QCPLegend*",
    "legend",
    "QCPAbstractLegendItem*",
    "item",
    "selectionChanged",
    "mousePress",
    "mouseWheel",
    "addRandomGraph",
    "removeSelectedGraph",
    "removeAllGraphs",
    "contextMenuRequest",
    "pos",
    "moveLegend",
    "graphClicked",
    "QCPAbstractPlottable*",
    "plottable",
    "dataIndex"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x08,    1 /* Private */,
       5,    2,   89,    2, 0x08,    3 /* Private */,
      10,    2,   94,    2, 0x08,    6 /* Private */,
      15,    0,   99,    2, 0x08,    9 /* Private */,
      16,    0,  100,    2, 0x08,   10 /* Private */,
      17,    0,  101,    2, 0x08,   11 /* Private */,
      18,    0,  102,    2, 0x08,   12 /* Private */,
      19,    0,  103,    2, 0x08,   13 /* Private */,
      20,    0,  104,    2, 0x08,   14 /* Private */,
      21,    1,  105,    2, 0x08,   15 /* Private */,
      23,    0,  108,    2, 0x08,   17 /* Private */,
      24,    2,  109,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, QMetaType::Int,   26,   27,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'titleDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'axisLabelDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAxis *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAxis::SelectablePart, std::false_type>,
        // method 'legendDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPLegend *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAbstractLegendItem *, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mousePress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mouseWheel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addRandomGraph'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeSelectedGraph'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeAllGraphs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contextMenuRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'moveLegend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'graphClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAbstractPlottable *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleDoubleClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 1: _t->axisLabelDoubleClick((*reinterpret_cast< std::add_pointer_t<QCPAxis*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCPAxis::SelectablePart>>(_a[2]))); break;
        case 2: _t->legendDoubleClick((*reinterpret_cast< std::add_pointer_t<QCPLegend*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCPAbstractLegendItem*>>(_a[2]))); break;
        case 3: _t->selectionChanged(); break;
        case 4: _t->mousePress(); break;
        case 5: _t->mouseWheel(); break;
        case 6: _t->addRandomGraph(); break;
        case 7: _t->removeSelectedGraph(); break;
        case 8: _t->removeAllGraphs(); break;
        case 9: _t->contextMenuRequest((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 10: _t->moveLegend(); break;
        case 11: _t->graphClicked((*reinterpret_cast< std::add_pointer_t<QCPAbstractPlottable*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::SelectablePart >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractLegendItem* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPLegend* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractPlottable* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
