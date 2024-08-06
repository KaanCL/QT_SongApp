cmake_minimum_required(VERSION 3.16)

project(SongApp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick Multimedia)

qt_standard_project_setup()

qt_add_executable(appSongApp
    main.cpp
    playerController.cpp
)

qt_add_qml_module(appSongApp
    URI SongApp
    VERSION 1.0
    QML_FILES
        Main.qml
        QML_FILES AudioInfoBox.qml
        QML_FILES TextButton.qml

        SOURCES
        audioinfo.cpp audioinfo.h

        RESOURCES
        assets/ab67616d0000b27325cd7dfef168e72ac4555a1c.jpeg
        assets/angle-left.png
        assets/angle-right.png
        assets/Kötü_insanları_tanıma_senesi.jpg
        assets/play.png
        assets/song.png
        assets/stop.png
        assets/menu-burger.png
        assets/trash.png
        assets/plus.png
        assets/search.png


        assets/f1.mp4
        assets/Kötü-İnsanları-Tanıma-Senesi.mp3
        assets/bir-sana-yandım-ben.mp4
        assets/Ben-Hüsrana-Komşuyum.mp3


        SOURCES playercontroller.h playercontroller.cpp
        SOURCES audioinfo.h audioinfo.cpp
        QML_FILES PlaylistPanel.qml
        SOURCES audiosearchmodel.h audiosearchmodel.cpp
        QML_FILES SearchPanel.qml
        QML_FILES SearchField.qml




)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appSongApp PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appSongApp
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appSongApp
    PRIVATE Qt6::Quick Qt6::Multimedia
)

include(GNUInstallDirs)
install(TARGETS appSongApp
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
