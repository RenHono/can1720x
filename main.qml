import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 800
    height: 600
    title: qsTr("GV1720 TEST")



    Rectangle{

        width: parent.width
        height: parent.height

        color: "#aaffcc"

        Text {
            id: test
            text: qsTr("text")

        }

    }
}
