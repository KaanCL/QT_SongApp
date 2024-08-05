import QtQuick

Item {
    id:root

    property color colors:"#333333"
    property alias source:buttonImage.source

    signal clicked()


    Rectangle{
       id:background
        radius: Screen.width * 0.03
       anchors.fill: parent

     color:if (buttonMouseArea.containsPress){
                return Qt.lighter(root.color)}
             else if(buttonMouseArea.containsMouse){
                 return Qt.darker(root.color)}
             else{
                return colors
             }

    }

    Image{
      id:buttonImage
      width: Screen.width * 0.02 ; height: Screen.width * 0.02
      anchors.centerIn: parent

    }

    MouseArea{
      id:buttonMouseArea

      anchors.fill: parent

      hoverEnabled: true

      onClicked: {
        root.clicked()
     }


    }

}
