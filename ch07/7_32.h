#pragma once
#include <string>
#include <vector>
#include <iostream>


class Window_mgr { //???? ????
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	inline void clear(ScreenIndex);
private:
	std::vector<Screen> screens{ Screen(24, 80, ' ') };
};

class Screen {
	friend void Window_mgr::clear(ScreenIndex);
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht* wd, ' ') {}
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht* wd, c) {}
	char get() const { return contents[cursor]; }
	inline char get(pos ht, pos wd) const;
	inline Screen& move(pos r, pos c);
	inline Screen& set(char c);
	inline Screen& set(pos r, pos c, char ch);

	Screen& display(std::ostream& os) { do_display(os); return *this; }
	const Screen& display(std::ostream& os) const { do_display(os); return *this; }
	pos size() const;
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	void do_display(std::ostream& os) const { os << contents; }
};

Screen& Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

inline char Screen::get(pos r, pos c) const {
	pos row = r * width;
	return contents[row + c];
}

inline Screen& Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}
inline Screen& Screen::set(pos r, pos c, char ch) {
	contents[r * width + c] = ch;
	return *this;

}

inline void Window_mgr::clear(ScreenIndex i ) {
	Screen& s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

Screen::pos Screen::size() const {
	return height * width;
}