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
            Repeater {
                model: my_cores.setNumberCpuCores();
                Item {
                    width: parent.width/my_cores.setNumberCpuCores()
                    anchors.margins: 10
                    GridLayout {
                        Text { text: my_cores.setProcessor(index) }
                        Text { text: "Anzahl Kerne: "+my_cores.setNumberCpuCores() }
                    }

                }
            }
        }
    }
}

