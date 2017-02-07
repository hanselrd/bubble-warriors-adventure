#include "PlayState.hpp"
#include "StateHandler.hpp"

bwa::PlayState::PlayState(StateHandler& stateHandler, sf::RenderWindow& window)
	: GameState(stateHandler) {
	_gui.setWindow(window);

	auto lblName = std::make_shared<tgui::Label>();
	lblName->setText("PlayState");
	lblName->setTextSize(40);
	lblName->setPosition(0, 300);
	_gui.add(lblName, "lblName");

	auto btnGoBack = std::make_shared<tgui::Button>();
	btnGoBack->setPosition(300, 300);
	btnGoBack->setText("Main Menu");
	btnGoBack->connect("pressed", [&] { _stateHandler.popState(); });
	_gui.add(btnGoBack, "btnGoBack");
}

void bwa::PlayState::handleEvents(sf::Event& e) {
	_gui.handleEvent(e);
}

void bwa::PlayState::update(float delta) {
}

void bwa::PlayState::draw(sf::RenderWindow& window) {
	_gui.draw();
}
