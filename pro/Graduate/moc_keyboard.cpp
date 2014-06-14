/****************************************************************************
** Meta object code from reading C++ file 'keyboard.h'
**
** Created: Wed Jun 13 20:31:21 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "keyboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Keyboard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,    9,    9,    9, 0x08,
      54,    9,    9,    9, 0x08,
      78,    9,    9,    9, 0x08,
     109,    9,    9,    9, 0x08,
     137,    9,    9,    9, 0x08,
     165,    9,    9,    9, 0x08,
     193,    9,    9,    9, 0x08,
     221,    9,    9,    9, 0x08,
     249,    9,    9,    9, 0x08,
     277,    9,    9,    9, 0x08,
     305,    9,    9,    9, 0x08,
     333,    9,    9,    9, 0x08,
     361,    9,    9,    9, 0x08,
     389,    9,    9,    9, 0x08,
     419,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Keyboard[] = {
    "Keyboard\0\0num\0finishEdit(int)\0"
    "on_buttonBox_accepted()\0on_buttonBox_rejected()\0"
    "on_pushButtonNumBack_clicked()\0"
    "on_pushButtonNum0_clicked()\0"
    "on_pushButtonNum1_clicked()\0"
    "on_pushButtonNum2_clicked()\0"
    "on_pushButtonNum3_clicked()\0"
    "on_pushButtonNum4_clicked()\0"
    "on_pushButtonNum5_clicked()\0"
    "on_pushButtonNum6_clicked()\0"
    "on_pushButtonNum7_clicked()\0"
    "on_pushButtonNum8_clicked()\0"
    "on_pushButtonNum9_clicked()\0"
    "on_pushButtonNum000_clicked()\0"
    "on_pushButtonC_clicked()\0"
};

void Keyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Keyboard *_t = static_cast<Keyboard *>(_o);
        switch (_id) {
        case 0: _t->finishEdit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_buttonBox_rejected(); break;
        case 3: _t->on_pushButtonNumBack_clicked(); break;
        case 4: _t->on_pushButtonNum0_clicked(); break;
        case 5: _t->on_pushButtonNum1_clicked(); break;
        case 6: _t->on_pushButtonNum2_clicked(); break;
        case 7: _t->on_pushButtonNum3_clicked(); break;
        case 8: _t->on_pushButtonNum4_clicked(); break;
        case 9: _t->on_pushButtonNum5_clicked(); break;
        case 10: _t->on_pushButtonNum6_clicked(); break;
        case 11: _t->on_pushButtonNum7_clicked(); break;
        case 12: _t->on_pushButtonNum8_clicked(); break;
        case 13: _t->on_pushButtonNum9_clicked(); break;
        case 14: _t->on_pushButtonNum000_clicked(); break;
        case 15: _t->on_pushButtonC_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Keyboard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Keyboard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Keyboard,
      qt_meta_data_Keyboard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Keyboard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Keyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Keyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Keyboard))
        return static_cast<void*>(const_cast< Keyboard*>(this));
    return QWidget::qt_metacast(_clname);
}

int Keyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Keyboard::finishEdit(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
