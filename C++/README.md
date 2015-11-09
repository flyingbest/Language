# C++
---

### 포인터

변수는 선언되면 할당된 메모리 공간이 컴파일 타임에 선택된다. 프로그램이 실행 중일 때는 이 메모리 공간을 변경하거나 기존 메모리 공간에 더 많은 공간을 추가할 수 없다는 뜻.

> 스택

> 힙(heap)

흔히 자유 저장소라고 부르는 메모리 영역.

힙은 미할당 메모리로서, 요청에 따라 필요한 공간이 할당된다. 힙은 운영체제가 관리. 일정 공간이 할당되면 메모리를 할당한 원래 코드, 또는 메모리 할당기로부터 해당 주소를 제공받은 코드가 사용한다. 포인터를 사용하면 이 메모리에 접근 가능.

반환해야 하는 메모리를 그때그때 제대로 반환하지 않아서 생기는 현상 = 메모리 누수(memory leak).

포인터 기호 표.

동작|필요한 기호|예시
포인터 선언|\*|int \*px;
포인터에 담긴 주소 가져오기|없음|cout << px;
포인터에 담긴 주소 설정하기|없음|int \*px; px=주소;
해당 주소에 있는 값 가져오기|\*|cout << \*px;
해당 주소에 새로운 값 설정하기|\*|\*px=5;
변수 선언하기|없음|int x;
변수에 저장된 값 가져오기|없음|int x; cout << x;
변수에 저장된 값 설정하기|없음|int x; x=5;
변수의 주소 가져오기|&|int x; int\* px; px=&x;
변수의 주소 설정하기|가능하지 않음|변수는 주소를 변경할 수 없음.


