import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Controls 1.4 as C1


Item {
    id: element

    Window {
        id: displaywindow
        width: mainwindow.width
        height: mainwindow.height
        color: "#3c3c3c"
        visible: true

        C1.SplitView {
            anchors.fill: parent

            Item {
                id: core1
                width: parent.width/2
                GridLayout {
                    anchors.margins: 10
                    Text { text: my_cores.setProcessor(0) }
                    Text { text: my_cores.setProcessor(1) }

                }

            }

            Item {
                id: core2
                width: parent.width/2
            }

        }

    }

}

