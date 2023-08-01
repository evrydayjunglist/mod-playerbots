/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU GPL v2 license, you may redistribute it and/or modify it under version 2 of the License, or (at your option), any later version.
 */

#include "GrindingStrategy.h"
#include "Playerbots.h"

NextAction** GrindingStrategy::getDefaultActions()
{
    return nullptr;
}

void GrindingStrategy::InitTriggers(std::vector<TriggerNode*>& triggers)
{
    triggers.push_back(new TriggerNode("medium mana", NextAction::array(0, new NextAction("drink", 7.0f), nullptr)));
    triggers.push_back(new TriggerNode("medium health", NextAction::array(0, new NextAction("food", 6.0f), nullptr)));
    triggers.push_back(new TriggerNode("no target", NextAction::array(0, new NextAction("attack anything", 5.0f), nullptr)));
}

void MoveRandomStrategy::InitTriggers(std::vector<TriggerNode*>& triggers)
{
    triggers.push_back(new TriggerNode(
        "often",
        NextAction::array(0, new NextAction("move random", 1.5f), NULL)));
}