/****************************************************************************
** Meta object code from reading C++ file 'Gra.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Gra.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Gra.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN3GraE_t {};
} // unnamed namespace

template <> constexpr inline auto Gra::qt_create_metaobjectdata<qt_meta_tag_ZN3GraE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Gra",
        "uaktualnijObrazWisielca",
        "",
        "liczbaBledow",
        "uaktualnijOdgadnieteSlowo",
        "odgadnieteSLowo",
        "uaktualnijStanGrySignal",
        "stanGry",
        "uaktualnijKategoria",
        "kategoria",
        "komunikatWygranejSignal",
        "komunikatPrzegranejSignal"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'uaktualnijObrazWisielca'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'uaktualnijOdgadnieteSlowo'
        QtMocHelpers::SignalData<void(QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'uaktualnijStanGrySignal'
        QtMocHelpers::SignalData<void(QString)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'uaktualnijKategoria'
        QtMocHelpers::SignalData<void(QString)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'komunikatWygranejSignal'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'komunikatPrzegranejSignal'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Gra, qt_meta_tag_ZN3GraE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Gra::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3GraE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3GraE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3GraE_t>.metaTypes,
    nullptr
} };

void Gra::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Gra *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->uaktualnijObrazWisielca((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->uaktualnijOdgadnieteSlowo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->uaktualnijStanGrySignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->uaktualnijKategoria((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->komunikatWygranejSignal(); break;
        case 5: _t->komunikatPrzegranejSignal(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Gra::*)(int )>(_a, &Gra::uaktualnijObrazWisielca, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Gra::*)(QString )>(_a, &Gra::uaktualnijOdgadnieteSlowo, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Gra::*)(QString )>(_a, &Gra::uaktualnijStanGrySignal, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Gra::*)(QString )>(_a, &Gra::uaktualnijKategoria, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Gra::*)()>(_a, &Gra::komunikatWygranejSignal, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Gra::*)()>(_a, &Gra::komunikatPrzegranejSignal, 5))
            return;
    }
}

const QMetaObject *Gra::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gra::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3GraE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gra::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Gra::uaktualnijObrazWisielca(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Gra::uaktualnijOdgadnieteSlowo(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Gra::uaktualnijStanGrySignal(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Gra::uaktualnijKategoria(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Gra::komunikatWygranejSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Gra::komunikatPrzegranejSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
