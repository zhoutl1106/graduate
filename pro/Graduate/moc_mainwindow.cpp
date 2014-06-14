/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Jun 13 20:31:20 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x05,
      41,   11,   11,   11, 0x05,
      63,   11,   11,   11, 0x05,
      86,   11,   11,   11, 0x05,
     108,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     160,  131,   11,   11, 0x0a,
     197,  189,   11,   11, 0x0a,
     217,   11,  213,   11, 0x08,
     228,   11,   11,   11, 0x08,
     243,   11,   11,   11, 0x08,
     265,  258,   11,   11, 0x08,
     280,   11,   11,   11, 0x08,
     294,   11,   11,   11, 0x08,
     307,   11,   11,   11, 0x08,
     321,   11,   11,   11, 0x08,
     335,   11,   11,   11, 0x08,
     351,   11,   11,   11, 0x08,
     368,   11,   11,   11, 0x08,
     382,   11,   11,   11, 0x08,
     395,   11,   11,   11, 0x08,
     409,   11,   11,   11, 0x08,
     423,   11,   11,   11, 0x08,
     439,   11,   11,   11, 0x08,
     456,   11,   11,   11, 0x08,
     488,  482,   11,   11, 0x08,
     517,  482,   11,   11, 0x08,
     562,  482,   11,   11, 0x08,
     592,  482,   11,   11, 0x08,
     630,   11,   11,   11, 0x08,
     666,   11,   11,   11, 0x08,
     701,   11,   11,   11, 0x08,
     736,  731,   11,   11, 0x08,
     771,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0,\0parameterChanged(int,int*)\0"
    "ampDevideChanged(int)\0timeDevideChanged(int)\0"
    "ampOffsetChanged(int)\0timeOffsetChanged(int)\0"
    "samplingRate,maxFreq,divisor\0"
    "settingsChanged(int,int,int)\0maxFreq\0"
    "setMaxFreq(int)\0int\0openFile()\0"
    "openSettings()\0valueChanged()\0length\0"
    "setLength(int)\0sinSelected()\0cwSelected()\0"
    "lfmSelected()\0hfmSelected()\0noiseSelected()\0"
    "customSelected()\0generateSin()\0"
    "generateCW()\0generateLFM()\0generateHFM()\0"
    "generateNoise()\0generateCustom()\0"
    "on_outputButton_clicked()\0value\0"
    "on_dialAmp_valueChanged(int)\0"
    "on_verticalSliderAmpOffset_valueChanged(int)\0"
    "on_dialTime_valueChanged(int)\0"
    "on_horizontalSlider_valueChanged(int)\0"
    "on_pushButtonHSliderMinus_clicked()\0"
    "on_pushButtonHSliderPlus_clicked()\0"
    "on_toolButtonLength_clicked()\0arg1\0"
    "on_spinBoxLength_valueChanged(int)\0"
    "on_pushButtonQuit_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2]))); break;
        case 1: _t->ampDevideChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->timeDevideChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ampOffsetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->timeOffsetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->settingsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->setMaxFreq((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: { int _r = _t->openFile();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->openSettings(); break;
        case 9: _t->valueChanged(); break;
        case 10: _t->setLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->sinSelected(); break;
        case 12: _t->cwSelected(); break;
        case 13: _t->lfmSelected(); break;
        case 14: _t->hfmSelected(); break;
        case 15: _t->noiseSelected(); break;
        case 16: _t->customSelected(); break;
        case 17: _t->generateSin(); break;
        case 18: _t->generateCW(); break;
        case 19: _t->generateLFM(); break;
        case 20: _t->generateHFM(); break;
        case 21: _t->generateNoise(); break;
        case 22: _t->generateCustom(); break;
        case 23: _t->on_outputButton_clicked(); break;
        case 24: _t->on_dialAmp_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_verticalSliderAmpOffset_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_dialTime_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_pushButtonHSliderMinus_clicked(); break;
        case 29: _t->on_pushButtonHSliderPlus_clicked(); break;
        case 30: _t->on_toolButtonLength_clicked(); break;
        case 31: _t->on_spinBoxLength_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_pushButtonQuit_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::parameterChanged(int _t1, int * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::ampDevideChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::timeDevideChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::ampOffsetChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::timeOffsetChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
