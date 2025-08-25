/****************************************************************************
** Meta object code from reading C++ file 'WprowadzHasloDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WprowadzHasloDialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WprowadzHasloDialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6DialogE_t {};
} // unnamed namespace

template <> constexpr inline auto Dialog::qt_create_metaobjectdata<qt_meta_tag_ZN6DialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Dialog",
        "hasloWprowadzone",
        "",
        "haslo",
        "kategoria",
        "kategoriaWprowadzone",
        "hasloPuste",
        "kategoriaPuste",
        "on_buttonOK_clicked",
        "on_lineEditHaslo_returnPressed",
        "closeEvent",
        "QCloseEvent*",
        "event",
        "losujKategorieKraje",
        "losujKategorieStolice",
        "losujKategorieZwierzeta",
        "losujKategorieFilmy",
        "losujKategorieSporty",
        "losujKategorieZawody",
        "losujKategorieJedzenie",
        "losujKategorieAuta"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'hasloWprowadzone'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QString, 4 },
        }}),
        // Signal 'kategoriaWprowadzone'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QString, 4 },
        }}),
        // Signal 'hasloPuste'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'kategoriaPuste'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_buttonOK_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lineEditHaslo_returnPressed'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'closeEvent'
        QtMocHelpers::SlotData<void(QCloseEvent *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'losujKategorieKraje'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'losujKategorieStolice'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'losujKategorieZwierzeta'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'losujKategorieFilmy'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'losujKategorieSporty'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'losujKategorieZawody'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'losujKategorieJedzenie'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'losujKategorieAuta'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Dialog, qt_meta_tag_ZN6DialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6DialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6DialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6DialogE_t>.metaTypes,
    nullptr
} };

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Dialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->hasloWprowadzone((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->kategoriaWprowadzone((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->hasloPuste(); break;
        case 3: _t->kategoriaPuste(); break;
        case 4: _t->on_buttonOK_clicked(); break;
        case 5: _t->on_lineEditHaslo_returnPressed(); break;
        case 6: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 7: _t->losujKategorieKraje(); break;
        case 8: _t->losujKategorieStolice(); break;
        case 9: _t->losujKategorieZwierzeta(); break;
        case 10: _t->losujKategorieFilmy(); break;
        case 11: _t->losujKategorieSporty(); break;
        case 12: _t->losujKategorieZawody(); break;
        case 13: _t->losujKategorieJedzenie(); break;
        case 14: _t->losujKategorieAuta(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)(const QString & , const QString & )>(_a, &Dialog::hasloWprowadzone, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)(const QString & , const QString & )>(_a, &Dialog::kategoriaWprowadzone, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)()>(_a, &Dialog::hasloPuste, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)()>(_a, &Dialog::kategoriaPuste, 3))
            return;
    }
}

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6DialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Dialog::hasloWprowadzone(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void Dialog::kategoriaWprowadzone(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void Dialog::hasloPuste()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Dialog::kategoriaPuste()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
