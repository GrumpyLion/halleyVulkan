#include "game_stage.h"

void GameStage::init()
{
	world = createWorld("stages/game_world");
	auto factory = EntityFactory(*world, getResources());
	factory.createScene(getResource<Scene>("Test"), true);
}

void GameStage::onVariableUpdate(Time t)
{
	world->step(TimeLine::FixedUpdate, t);
}

void GameStage::onRender(RenderContext& rc) const
{
	world->render(rc);
}
