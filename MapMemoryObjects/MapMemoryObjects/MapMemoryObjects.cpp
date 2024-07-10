#include <iostream>
#include <deque>
#include "MapMemoryObjects.h"

using namespace std;

int main(){
    MapMemoryObjects mapper = MapMemoryObjects();
    PSYSTEM_HANDLE_INFORMATION mappedObjects = mapper.MapMemoryHandlers();
    deque<HANDLE> handles = mapper.FilterThreads(mappedObjects);
    return 0;
}
