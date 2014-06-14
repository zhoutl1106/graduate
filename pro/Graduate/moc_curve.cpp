/****************************************************************************
** Meta object code from reading C++ file 'curve.h'
**
** Created: Wed Jun 13 20:31:22 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "curve.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'curve.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Curve[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,    7,    6,    6, 0x0a,
      53,   43,    6,    6, 0x0a,
      82,   71,    6,    6, 0x0a,
     111,  101,    6,    6, 0x0a,
     140,  129,    6,    6, 0x0a,
     168,  159,    6,    6, 0x0a,
     192,  190,    6,    6, 0x0a,
     215,  208,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Curve[] = {
    "Curve\0\0length,data\0setParameters(int,int*)\0"
    "ampDevide\0setAmpDevide(int)\0timeDevide\0"
    "setTimeDevide(int)\0ampOffset\0"
    "setAmpOffset(int)\0timeOffset\0"
    "setTimeOffset(int)\0rr,gg,bb\0"
    "setColor(int,int,int)\0n\0setPeroids(int)\0"
    "points\0setPointsPerPixel(int)\0"
};

void Curve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Curve *_t = static_cast<Curve *>(_o);
        switch (_id) {
        case 0: _t->setParameters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2]))); break;
        case 1: _t->setAmpDevide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setTimeDevide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setAmpOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setTimeOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->setPeroids((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setPointsPerPixel((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Curve::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Curve::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Curve,
      qt_meta_data_Curve, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Curve::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Curve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Curve::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Curve))
        return static_cast<void*>(const_cast< Curve*>(this));
    return QWidget::qt_metacast(_clname);
}

int Curve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
