/****************************************************************************
** Meta object code from reading C++ file 'playercontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../playercontroller.h"
#include <QtNetwork/QSslError>
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
    "playingChanged",
    "",
    "currentSongChanged",
    "switchToPreviousSong",
    "switchToNextSong",
    "playPause",
    "changeAudioSource",
    "source",
    "addAudio",
    "title",
    "authorName",
    "audioSource",
    "imageSource",
    "videoSource",
    "removeAudio",
    "index",
    "switchToAudioByIndex",
    "currentSong",
    "AudioInfo*",
    "playing"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPlayerControllerENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[17];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[21];
    char stringdata5[17];
    char stringdata6[10];
    char stringdata7[18];
    char stringdata8[7];
    char stringdata9[9];
    char stringdata10[6];
    char stringdata11[11];
    char stringdata12[12];
    char stringdata13[12];
    char stringdata14[12];
    char stringdata15[12];
    char stringdata16[6];
    char stringdata17[21];
    char stringdata18[12];
    char stringdata19[11];
    char stringdata20[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPlayerControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPlayerControllerENDCLASS_t qt_meta_stringdata_CLASSPlayerControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "PlayerController"
        QT_MOC_LITERAL(17, 14),  // "playingChanged"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 18),  // "currentSongChanged"
        QT_MOC_LITERAL(52, 20),  // "switchToPreviousSong"
        QT_MOC_LITERAL(73, 16),  // "switchToNextSong"
        QT_MOC_LITERAL(90, 9),  // "playPause"
        QT_MOC_LITERAL(100, 17),  // "changeAudioSource"
        QT_MOC_LITERAL(118, 6),  // "source"
        QT_MOC_LITERAL(125, 8),  // "addAudio"
        QT_MOC_LITERAL(134, 5),  // "title"
        QT_MOC_LITERAL(140, 10),  // "authorName"
        QT_MOC_LITERAL(151, 11),  // "audioSource"
        QT_MOC_LITERAL(163, 11),  // "imageSource"
        QT_MOC_LITERAL(175, 11),  // "videoSource"
        QT_MOC_LITERAL(187, 11),  // "removeAudio"
        QT_MOC_LITERAL(199, 5),  // "index"
        QT_MOC_LITERAL(205, 20),  // "switchToAudioByIndex"
        QT_MOC_LITERAL(226, 11),  // "currentSong"
        QT_MOC_LITERAL(238, 10),  // "AudioInfo*"
        QT_MOC_LITERAL(249, 7)   // "playing"
    },
    "PlayerController",
    "playingChanged",
    "",
    "currentSongChanged",
    "switchToPreviousSong",
    "switchToNextSong",
    "playPause",
    "changeAudioSource",
    "source",
    "addAudio",
    "title",
    "authorName",
    "audioSource",
    "imageSource",
    "videoSource",
    "removeAudio",
    "index",
    "switchToAudioByIndex",
    "currentSong",
    "AudioInfo*",
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
      10,   14, // methods
       2,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    3 /* Public */,
       3,    0,   75,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   76,    2, 0x0a,    5 /* Public */,
       5,    0,   77,    2, 0x0a,    6 /* Public */,
       6,    0,   78,    2, 0x0a,    7 /* Public */,
       7,    1,   79,    2, 0x0a,    8 /* Public */,
       9,    5,   82,    2, 0x0a,   10 /* Public */,
       9,    4,   93,    2, 0x2a,   16 /* Public | MethodCloned */,
      15,    1,  102,    2, 0x0a,   21 /* Public */,
      17,    1,  105,    2, 0x0a,   23 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QUrl,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QUrl, QMetaType::QUrl,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,

 // properties: name, type, flags
      18, 0x80000000 | 19, 0x0001590b, uint(1), 0,
      20, QMetaType::Bool, 0x00015801, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlayerController::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlayerControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlayerControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPlayerControllerENDCLASS_t,
        // property 'currentSong'
        QtPrivate::TypeAndForceComplete<AudioInfo*, std::true_type>,
        // property 'playing'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlayerController, std::true_type>,
        // method 'playingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentSongChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToPreviousSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToNextSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playPause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeAudioSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'addAudio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'addAudio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'removeAudio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'switchToAudioByIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void PlayerController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlayerController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->playingChanged(); break;
        case 1: _t->currentSongChanged(); break;
        case 2: _t->switchToPreviousSong(); break;
        case 3: _t->switchToNextSong(); break;
        case 4: _t->playPause(); break;
        case 5: _t->changeAudioSource((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 6: _t->addAudio((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[5]))); break;
        case 7: _t->addAudio((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[4]))); break;
        case 8: _t->removeAudio((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->switchToAudioByIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlayerController::*)();
            if (_t _q_method = &PlayerController::playingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlayerController::*)();
            if (_t _q_method = &PlayerController::currentSongChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioInfo* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlayerController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AudioInfo**>(_v) = _t->currentSong(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->playing(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PlayerController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentSong(*reinterpret_cast< AudioInfo**>(_v)); break;
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
    return QAbstractListModel::qt_metacast(_clname);
}

int PlayerController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PlayerController::playingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlayerController::currentSongChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
