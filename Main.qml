import QtQuick
import QtQuick.Controls.Material

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Calling C++ from QML")

    Column {
        spacing: 10
        anchors {
            left: parent.left
            leftMargin: 10
        }

        Text {
            text: qsTr("Regular method")
        }
        Button {
            text: "Call C++ method"
            onClicked: function() {
                cppWorker.regularMethod()
            }
        }
        MyItem {
            date: currentDateTime
        }
    }
}
