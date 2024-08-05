/****************************************************************************
** Meta object code from reading C++ file 'playercontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../playercontroller.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playercontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPlayerControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPlayerControllerENDCLASS = QtMocHelpers::stringData(
    "PlayerController",
    "currentSongIndexChanged",
    "",
    "songCountChanged",
    "playingChanged",
    "switchToPreviousSong",
    "switchToNextSong",
    "playPause",
    "changeAudioSource",
    "source",
    "currentSongIndex",
    "songCount",
    "playing"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPlayerControllerENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[17];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[15];
    char stringdata5[21];
    char stringdata6[17];
    char stringdata7[10];
    char stringdata8[18];
    char stringdata9[7];
    char stringdata10[17];
    char stringdata11[10];
    char stringdata12[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPlayerControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPlayerControllerENDCLASS_t qt_meta_stringdata_CLASSPlayerControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "PlayerController"
        QT_MOC_LITERAL(17, 23),  // "currentSongIndexChanged"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 16),  // "songCountChanged"
        QT_MOC_LITERAL(59, 14),  // "playingChanged"
        QT_MOC_LITERAL(74, 20),  // "switchToPreviousSong"
        QT_MOC_LITERAL(95, 16),  // "switchToNextSong"
        QT_MOC_LITERAL(112, 9),  // "playPause"
        QT_MOC_LITERAL(122, 17),  // "changeAudioSource"
        QT_MOC_LITERAL(140, 6),  // "source"
        QT_MOC_LITERAL(147, 16),  // "currentSongIndex"
        QT_MOC_LITERAL(164, 9),  // "songCount"
        QT_MOC_LITERAL(174, 7)   // "playing"
    },
    "PlayerController",
    "currentSongIndexChanged",
    "",
    "songCountChanged",
    "playingChanged",
    "switchToPreviousSong",
    "switchToNextSong",
    "playPause",
    "changeAudioSource",
    "source",
    "currentSongIndex",
    "songCount",
    "playing"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPlayerControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   65, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    4 /* Public */,
       3,    0,   57,    2, 0x06,    5 /* Public */,
       4,    0,   58,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   59,    2, 0x0a,    7 /* Public */,
       6,    0,   60,    2, 0x0a,    8 /* Public */,
       7,    0,   61,    2, 0x0a,    9 /* Public */,
       8,    1,   62,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    9,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00015903, uint(0), 0,
      11, QMetaType::Int, 0x00015903, uint(1), 0,
      12, QMetaType::Bool, 0x00015903, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlayerController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlayerControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlayerControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPlayerControllerENDCLASS_t,
        // property 'currentSongIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'songCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'playing'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlayerController, std::true_type>,
        // method 'currentSongIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'songCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToPreviousSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToNextSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeAudioSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>
    >,
    nullptr
} };

void PlayerController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlayerController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentSongIndexChanged(); break;
        case 1: _t->songCountChanged(); break;
        case 2: _t->playingChanged(); break;
        case 3: _t->switchToPreviousSong(); break;
        case 4: _t->switchToNextSong(); break;
        case 5: _t->playPause(); break;
        case 6: _t->changeAudioSource((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlayerController::*)();
            if (_t _q_method = &PlayerController::currentSongIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlayerController::*)();
            if (_t _q_method = &PlayerController::songCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlayerController::*)();
            if (_t _q_method = &PlayerController::playingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlayerController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentSongIndex(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->songCount(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->playing(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PlayerController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentSongIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setSongCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setPlaying(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *PlayerController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPlayerControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlayerController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PlayerController::currentSongIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlayerController::songCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlayerController::playingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
