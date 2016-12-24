import QtQuick 1.1
import QtGraphicalEffects 1.0

Item {

    Image {
        id: bg
        source: "background.jpg"
        sourceSize: Qt.size(parent.width, parent.height)
        smooth: true
        visible: false
    }

    GaussianBlur {
        anchors.fill: bg
        source: bg
        radius: 8
        samples: 16
    }
}

