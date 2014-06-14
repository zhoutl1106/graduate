/****************************************************************************
** Meta object code from reading C++ file 'dialogsettings.h'
**
** Created: Wed Jun 13 20:31:23 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogs/dialogsettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   16,   15,   15, 0x05,
     100,   94,   15,   15, 0x05,
     124,  122,   15,   15, 0x05,
     140,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     163,   15,   15,   15, 0x08,
     187,   15,   15,   15, 0x08,
     217,  211,   15,   15, 0x08,
     256,  211,   15,   15, 0x08,
     295,  211,   15,   15, 0x08,
     334,   15,   15,   15, 0x08,
     358,   15,   15,   15, 0x08,
     384,  211,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogSettings[] = {
    "DialogSettings\0\0samplingRate,maxFreq,devisor\0"
    "setSamplingRateAndMaxFreqAndDivisor(int,int,int)\0"
    "r,g,b\0setColor(int,int,int)\0n\0"
    "setPeroids(int)\0setPointsPerPixel(int)\0"
    "on_buttonBox_accepted()\0on_buttonBox_rejected()\0"
    "value\0on_horizontalSliderR_valueChanged(int)\0"
    "on_horizontalSliderG_valueChanged(int)\0"
    "on_horizontalSliderB_valueChanged(int)\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_horizontalSliderFs_valueChanged(int)\0"
};

void DialogSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogSettings *_t = static_cast<DialogSettings *>(_o);
        switch (_id) {
        case 0: _t->setSamplingRateAndMaxFreqAndDivisor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->setColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->setPeroids((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setPointsPerPixel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_buttonBox_accepted(); break;
        case 5: _t->on_buttonBox_rejected(); break;
        case 6: _t->on_horizontalSliderR_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_horizontalSliderG_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_horizontalSliderB_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_pushButton_2_clicked(); break;
        case 11: _t->on_horizontalSliderFs_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogSettings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogSettings,
      qt_meta_data_DialogSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogSettings))
        return static_cast<void*>(const_cast< DialogSettings*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void DialogSettings::setSamplingRateAndMaxFreqAndDivisor(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DialogSettings::setColor(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DialogSettings::setPeroids(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DialogSettings::setPointsPerPixel(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
