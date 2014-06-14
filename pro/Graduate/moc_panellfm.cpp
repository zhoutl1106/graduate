/****************************************************************************
** Meta object code from reading C++ file 'panellfm.h'
**
** Created: Wed Jun 13 20:31:26 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "panels/panellfm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panellfm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PanelLFM[] = {

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

static const char qt_meta_stringdata_PanelLFM[] = {
    "PanelLFM\0\0parametersChanged()\0"
    "on_toolButtonFreqLow_clicked()\0"
    "on_toolButtonK_clicked()\0"
    "on_toolButtonAmp_clicked()\0"
    "on_toolButtonTau_clicked()\0arg1\0"
    "on_spinFreqLow_valueChanged(int)\0"
    "on_spinK_valueChanged(int)\0"
    "on_spinAmp_valueChanged(int)\0"
    "on_spinTau_valueChanged(int)\0"
};

void PanelLFM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PanelLFM *_t = static_cast<PanelLFM *>(_o);
        switch (_id) {
        case 0: _t->parametersChanged(); break;
        case 1: _t->on_toolButtonFreqLow_clicked(); break;
        case 2: _t->on_toolButtonK_clicked(); break;
        case 3: _t->on_toolButtonAmp_clicked(); break;
        case 4: _t->on_toolButtonTau_clicked(); break;
        case 5: _t->on_spinFreqLow_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_spinK_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinAmp_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinTau_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PanelLFM::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PanelLFM::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PanelLFM,
      qt_meta_data_PanelLFM, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PanelLFM::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PanelLFM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PanelLFM::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PanelLFM))
        return static_cast<void*>(const_cast< PanelLFM*>(this));
    return QWidget::qt_metacast(_clname);
}

int PanelLFM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void PanelLFM::parametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
