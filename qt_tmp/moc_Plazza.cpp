/****************************************************************************
** Meta object code from reading C++ file 'Plazza.hh'
**
** Created: Sat Sep 21 21:31:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../class/headers/Plazza.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Plazza.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Plazza[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      28,    7,    7,    7, 0x0a,
      41,    7,    7,    7, 0x0a,
      58,    7,    7,    7, 0x0a,
      78,   73,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Plazza[] = {
    "Plazza\0\0showCommandDialog()\0quitPlazza()\0"
    "refreshKitchen()\0quitRequests()\0item\0"
    "changed(QListWidgetItem*)\0"
};

void Plazza::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Plazza *_t = static_cast<Plazza *>(_o);
        switch (_id) {
        case 0: _t->showCommandDialog(); break;
        case 1: _t->quitPlazza(); break;
        case 2: _t->refreshKitchen(); break;
        case 3: _t->quitRequests(); break;
        case 4: _t->changed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Plazza::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Plazza::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Plazza,
      qt_meta_data_Plazza, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Plazza::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Plazza::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Plazza::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Plazza))
        return static_cast<void*>(const_cast< Plazza*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Plazza::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
