/****************************************************************************
** Meta object code from reading C++ file 'settingsexportcsv.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/fucucoin/settings/settingsexportcsv.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsexportcsv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsExportCSV_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsExportCSV_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsExportCSV_t qt_meta_stringdata_SettingsExportCSV = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SettingsExportCSV"
QT_MOC_LITERAL(1, 18, 16), // "selectFileOutput"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "isTxExport"
QT_MOC_LITERAL(4, 47, 10), // "exportTxes"
QT_MOC_LITERAL(5, 58, 8), // "filename"
QT_MOC_LITERAL(6, 67, 11) // "exportAddrs"

    },
    "SettingsExportCSV\0selectFileOutput\0\0"
    "isTxExport\0exportTxes\0filename\0"
    "exportAddrs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsExportCSV[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void SettingsExportCSV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsExportCSV *_t = static_cast<SettingsExportCSV *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectFileOutput((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->exportTxes((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->exportAddrs((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SettingsExportCSV::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_SettingsExportCSV.data,
      qt_meta_data_SettingsExportCSV,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsExportCSV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsExportCSV::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsExportCSV.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int SettingsExportCSV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
