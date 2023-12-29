/*
 [C++ 개발 규칙]
 1. main.cpp 파일은 Cpp 프로젝트의 진입점에 해당하며, main 함수가 존재합니다.
 2. main.cpp 외의 모든 소스코드 파일들은 src 폴더 안에 존재하며, 빌드 결과물은 .build 폴더 안에 생성됩니다.
 3. 서브 폴더는 소문자 스네이크 패턴으로 작명하면 됩니다. 개발 코드와 관계 없는 파일들을 저장하는 폴더는 앞에 . 를 붙여주세요.
 4. 모듈단위 프로젝트 구현을 의식 하세요. main.cpp 는 모듈단위로 만든 다른 코드 파일들을 모아 실행시키는 역할입니다.
	결과적으로, main.cpp 는 라이브러리를 사용하는 역할이고, 다른 모든 소스 코드는 각각의 라이브러리로 분리가 가능하도록 하는 것입니다.
 5. JAVA 스타일의 객체지향 코드 작성을 지향 하세요.
	기능은 객체로 묶고, 객체는 클래스로 구현을 하며, 파일 속에 클래스를 하나 담아 만듭니다.
	클래스 cpp 파일은 h 파일을 가지고 있습니다.
	h 파일은 해당 파일이 담당하는 클래스를 선언하고, 설명을 주석으로 달며, 그 클래스가 사용하는 라이브러리를 include 하는 역할을 합니다.
	cpp 파일은 h 파일의 인터페이스를 구현하는 역할을 합니다.
	전역번수는 사용하지 않으며, 대신 클래스 내에 static 변수를 선언하여 사용합니다.
 6. 기본 폴더 설명
	루트 폴더 : 서브 폴더 외에는 main.cpp 파일만이 존재합니다.
	.a_template : 템플릿용 파일들을 저장해둡니다.
	.build : 빌드 결과물을 저장하는 폴더입니다.
	.temp : 코드 실행 결과 생성되는 임시 파일을 저장하는 폴더입니다.
	.vscode : Visual Studio Code 설정 파일을 저장하는 폴더입니다.
 7. Visual Studio Code 단축키
	코드 정렬 : Shift + Alt + F
	컴파일 : Ctrl + Alt + c
	실행 : Ctrl + Alt + r
*/

#include "src/template.h"

int main()
{
	// static 변수 출력
	std::cout << ns_template::Template::sampleInt << std::endl;

	// 클래스 함수 실행
	ns_template::Template templateObj = ns_template::Template();
	templateObj.sampleFunc("테스트1", "test2");

	return 0;
}