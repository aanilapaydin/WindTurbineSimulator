/****************************************************************************
** Meta object code from reading C++ file 'CSE495_Wind_Turbine_Simulator.h'
**
** Created: Mon 22. Dec 06:03:10 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CSE495_Wind_Turbine_Simulator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSE495_Wind_Turbine_Simulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CSE495_Wind_Turbine_Simulator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x08,
      51,   30,   30,   30, 0x08,
      70,   30,   30,   30, 0x08,
      85,   30,   30,   30, 0x08,
      99,   30,   30,   30, 0x08,
     117,   30,   30,   30, 0x08,
     134,   30,   30,   30, 0x08,
     147,   30,   30,   30, 0x08,
     162,   30,   30,   30, 0x08,
     176,   30,   30,   30, 0x08,
     194,   30,   30,   30, 0x08,
     211,   30,   30,   30, 0x08,
     224,   30,   30,   30, 0x08,
     239,   30,   30,   30, 0x08,
     253,   30,   30,   30, 0x08,
     271,   30,   30,   30, 0x08,
     288,   30,   30,   30, 0x08,
     301,   30,   30,   30, 0x08,
     317,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CSE495_Wind_Turbine_Simulator[] = {
    "CSE495_Wind_Turbine_Simulator\0\0"
    "startButton_click()\0helpButton_click()\0"
    "minus1_click()\0plus1_click()\0"
    "bigminus1_click()\0bigplus1_click()\0"
    "fit1_click()\0minus2_click()\0plus2_click()\0"
    "bigminus2_click()\0bigplus2_click()\0"
    "fit2_click()\0minus3_click()\0plus3_click()\0"
    "bigminus3_click()\0bigplus3_click()\0"
    "fit3_click()\0windDatasSlot()\0"
    "saveButton_click()\0"
};

void CSE495_Wind_Turbine_Simulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSE495_Wind_Turbine_Simulator *_t = static_cast<CSE495_Wind_Turbine_Simulator *>(_o);
        switch (_id) {
        case 0: _t->startButton_click(); break;
        case 1: _t->helpButton_click(); break;
        case 2: _t->minus1_click(); break;
        case 3: _t->plus1_click(); break;
        case 4: _t->bigminus1_click(); break;
        case 5: _t->bigplus1_click(); break;
        case 6: _t->fit1_click(); break;
        case 7: _t->minus2_click(); break;
        case 8: _t->plus2_click(); break;
        case 9: _t->bigminus2_click(); break;
        case 10: _t->bigplus2_click(); break;
        case 11: _t->fit2_click(); break;
        case 12: _t->minus3_click(); break;
        case 13: _t->plus3_click(); break;
        case 14: _t->bigminus3_click(); break;
        case 15: _t->bigplus3_click(); break;
        case 16: _t->fit3_click(); break;
        case 17: _t->windDatasSlot(); break;
        case 18: _t->saveButton_click(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CSE495_Wind_Turbine_Simulator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CSE495_Wind_Turbine_Simulator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CSE495_Wind_Turbine_Simulator,
      qt_meta_data_CSE495_Wind_Turbine_Simulator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSE495_Wind_Turbine_Simulator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSE495_Wind_Turbine_Simulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSE495_Wind_Turbine_Simulator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSE495_Wind_Turbine_Simulator))
        return static_cast<void*>(const_cast< CSE495_Wind_Turbine_Simulator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CSE495_Wind_Turbine_Simulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
