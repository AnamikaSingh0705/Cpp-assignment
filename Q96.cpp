#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Network {
private:
    queue<string> packetQueue;

public:
    void sendPacket(const string& packet) {
        cout << "Sending packet: " << packet << endl;
        packetQueue.push(packet);
    }

    void receivePacket() {
        if (!packetQueue.empty()) {
            string packet = packetQueue.front();
            packetQueue.pop();
            cout << "Received packet: " << packet << endl;
        } else {
            cout << "No packets to receive." << endl;
        }
    }

    void showQueueSize() const {
        cout << "Packets in queue: " << packetQueue.size() << endl;
    }
};
