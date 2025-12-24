cmake_minimum_required(VERSION 3.31)
project(OOP_RPG)

set(CMAKE_CXX_STANDARD 20)

set(SFML_DIR "C:/Users/petru/Documents/SFML-3.0.2/lib/cmake/SFML")

find_package(SFML CONFIG REQUIRED
        COMPONENTS
        Graphics
        Window
        System
        Audio
)

add_executable(OOP_RPG
        main.cpp
        core/Game.h
        core/Game.cpp
        core/GameState.h
        core/World.h
        core/World.cpp
        core/SaveSystem.h
        core/SaveSystem.cpp
        entities/Entity.h
        entities/Entity.cpp
        entities/Stats.h
        entities/Player.h
        entities/Player.cpp
        entities/Enemy.h
        entities/Enemy.cpp
        entities/Boss.h
        entities/Boss.cpp
        entities/NPC.h
        entities/NPC.cpp
        combat/CombatSystem.h
        combat/CombatSystem.cpp
        combat/StatusEffect.h
        combat/DamageType.h
        items/Item.h
        items/Weapon.h
        items/Weapon.cpp
        items/Armor.h
        items/Armor.cpp
        items/Consumable.h
        items/Consumable.cpp
        items/Upgrade.h
        items/Enchantment.h
        lore/LoreEntry.h
        lore/Deity.h
        lore/Ending.h
        systems/InputSystem.h
        systems/InputSystem.cpp
        systems/EventSystem.h
        systems/EventSystem.cpp
        systems/DialogueSystem.h
        systems/DialogueSystem.cpp
        rendering/Renderer.h
        rendering/ConsoleRenderer.h
        rendering/ConsoleRenderer.cpp
        rendering/TileRenderer.h
        rendering/TileRenderer.cpp
)

target_link_libraries(OOP_RPG
        SFML::Graphics
        SFML::Window
        SFML::System
        SFML::Audio
)
