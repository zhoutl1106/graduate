/****************************************************************************
** Meta object code from reading C++ file 'panelnoise.h'
**
** Created: Wed Jun 13 20:31:28 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "panels/panelnoise.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelnoise.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PanelNoise[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   11,   11,   11, 0x08,
      63,   11,   11,   11, 0x08,
      95,   11,   11,   11, 0x08,
     122,   11,   11,   11, 0x08,
     152,  147,   11,   11, 0x08,
     185,  147,   11,   11, 0x08,
     219,  147,   11,   11, 0x08,
     248,  147,   11,   11, 0x08,
     281,  275,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PanelNoise[] = {
    "PanelNoise\0\0parametersChanged()\0"
    "on_toolButtonFreqLow_clicked()\0"
    "on_toolButtonFreqHigh_clicked()\0"
    "on_toolButtonAmp_clicked()\0"
    "on_toolButtonN_clicked()\0arg1\0"
    "on_spinFreqLow_valueChanged(int)\0"
    "on_spinFreqHigh_valueChanged(int)\0"
    "on_spinAmp_valueChanged(int)\0"
    "on_spinN_valueChanged(int)\0index\0"
    "on_comboBoxWindow_currentIndexChanged(int)\0"
};

void PanelNoise::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PanelNoise *_t = static_cast<PanelNoise *>(_o);
        switch (_id) {
        case 0: _t->parametersChanged(); break;
        case 1: _t->on_toolButtonFreqLow_clicked(); break;
        case 2: _t->on_toolButtonFreqHigh_clicked(); break;
        case 3: _t->on_toolButtonAmp_clicked(); break;
        case 4: _t->on_toolButtonN_clicked(); break;
        case 5: _t->on_spinFreqLow_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_spinFreqHigh_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinAmp_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinN_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_comboBoxWindow_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PanelNoise::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PanelNoise::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PanelNoise,
      qt_meta_data_PanelNoise, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PanelNoise::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PanelNoise::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PanelNoise::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PanelNoise))
        return static_cast<void*>(const_cast< PanelNoise*>(this));
    return QWidget::qt_metacast(_clname);
}

int PanelNoise::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void PanelNoise::parametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
