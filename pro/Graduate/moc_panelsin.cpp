/****************************************************************************
** Meta object code from reading C++ file 'panelsin.h'
**
** Created: Wed Jun 13 20:31:24 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "panels/panelsin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelsin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PanelSin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,    9,    9,    9, 0x08,
      58,    9,    9,    9, 0x08,
      85,    9,    9,    9, 0x08,
     114,    9,    9,    9, 0x08,
     149,  144,    9,    9, 0x08,
     179,  144,    9,    9, 0x08,
     208,  144,    9,    9, 0x08,
     239,  144,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PanelSin[] = {
    "PanelSin\0\0parametersChanged()\0"
    "on_toolButtonFreq_clicked()\0"
    "on_toolButtonAmp_clicked()\0"
    "on_toolButtonPhase_clicked()\0"
    "on_toolButtonOffset_clicked()\0arg1\0"
    "on_spinFreq_valueChanged(int)\0"
    "on_spinAmp_valueChanged(int)\0"
    "on_spinPhase_valueChanged(int)\0"
    "on_spinOffset_valueChanged(int)\0"
};

void PanelSin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PanelSin *_t = static_cast<PanelSin *>(_o);
        switch (_id) {
        case 0: _t->parametersChanged(); break;
        case 1: _t->on_toolButtonFreq_clicked(); break;
        case 2: _t->on_toolButtonAmp_clicked(); break;
        case 3: _t->on_toolButtonPhase_clicked(); break;
        case 4: _t->on_toolButtonOffset_clicked(); break;
        case 5: _t->on_spinFreq_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_spinAmp_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinPhase_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinOffset_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PanelSin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PanelSin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PanelSin,
      qt_meta_data_PanelSin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PanelSin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PanelSin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PanelSin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PanelSin))
        return static_cast<void*>(const_cast< PanelSin*>(this));
    return QWidget::qt_metacast(_clname);
}

int PanelSin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PanelSin::parametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
