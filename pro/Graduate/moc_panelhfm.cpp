/****************************************************************************
** Meta object code from reading C++ file 'panelhfm.h'
**
** Created: Wed Jun 13 20:31:27 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "panels/panelhfm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelhfm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PanelHFM[] = {

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
      61,    9,    9,    9, 0x08,
      86,    9,    9,    9, 0x08,
     113,    9,    9,    9, 0x08,
     145,  140,    9,    9, 0x08,
     178,  140,    9,    9, 0x08,
     205,  140,    9,    9, 0x08,
     234,  140,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PanelHFM[] = {
    "PanelHFM\0\0parametersChanged()\0"
    "on_toolButtonFreqLow_clicked()\0"
    "on_toolButtonM_clicked()\0"
    "on_toolButtonAmp_clicked()\0"
    "on_toolButtonTau_clicked()\0arg1\0"
    "on_spinFreqLow_valueChanged(int)\0"
    "on_spinM_valueChanged(int)\0"
    "on_spinAmp_valueChanged(int)\0"
    "on_spinTau_valueChanged(int)\0"
};

void PanelHFM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PanelHFM *_t = static_cast<PanelHFM *>(_o);
        switch (_id) {
        case 0: _t->parametersChanged(); break;
        case 1: _t->on_toolButtonFreqLow_clicked(); break;
        case 2: _t->on_toolButtonM_clicked(); break;
        case 3: _t->on_toolButtonAmp_clicked(); break;
        case 4: _t->on_toolButtonTau_clicked(); break;
        case 5: _t->on_spinFreqLow_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_spinM_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinAmp_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinTau_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PanelHFM::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PanelHFM::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PanelHFM,
      qt_meta_data_PanelHFM, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PanelHFM::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PanelHFM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PanelHFM::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PanelHFM))
        return static_cast<void*>(const_cast< PanelHFM*>(this));
    return QWidget::qt_metacast(_clname);
}

int PanelHFM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void PanelHFM::parametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
