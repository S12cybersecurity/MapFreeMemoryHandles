#include <iostream>
#include <deque>
#include "MapMemoryObjects.h"

using namespace std;

int main(){
    MapMemoryObjects mapper = MapMemoryObjects();
    PSYSTEM_HANDLE_INFORMATION mappedObjects = mapper.MapMemoryHandlers();
	// Filter the mapped objects
    deque<HANDLE> handles = mapper.FilterRegisterKeys(mappedObjects);
    HANDLE hkey = mapper.FindRegistryKeyHandle(mappedObjects, L"DisableBehaviorMonitoring");
	if (hkey != NULL) {
		cout << "Key found" << endl;
	}
    else {
		cout << "Key not found" << endl;
	}
    return 0;
}
