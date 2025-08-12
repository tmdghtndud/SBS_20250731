#include <iostream>

enum class EShape {Space, Diamond, Heart, Clover, Max};
struct Card
{
	EShape shape;
	int number;
};

void Draw(Card card)
{
	switch (card.shape)
	{
	case EShape::Space:
		printf("♤");
		break;
	case EShape::Diamond:
		printf("◆");
		break;
	case EShape::Heart:
		printf("♥");
		break;
	case EShape::Clover:
		printf("♧");
		break;
	default:
		printf("Error");
		break;
	}

	switch (card.number)
	{
	case 1:
		printf("A");
		break;
	case 11:
		printf("J");
		break;
	case 12:
		printf("Q");
		break;
	case 13:
		printf("K");
		break;
	default:
		printf("%d", card.number);
		break;
	}
}

int main()
{
	// 카드 52장을 만들어줄겁니다.
	Card card[52] = {};

	for (int i = 0; i < 52; i++)
	{
		// 0 ~ 12 => Space
		// 13 ~ 25 => Diamond 
		// ... 생략
		card[i].shape = (EShape)(i / 13);

		// 0 ~ 12 => 1 ~ 13
		// 13 ~ 25 => 1 ~ 13
		// ... 생략
		card[i].number = i % 13 + 1;
	}

	for (int i = 0; i < 10000; i++)
	{
		int index1 = rand() % 52;
		int index2 = rand() % 52;

		Card temp = card[index1];
		card[index1] = card[index2];
		card[index2] = temp;
	}

	for (int i = 0; i < 52; i++)
	{
		Draw(card[i]);
		printf("\n");
	}

	// 숙제
	// 하이로우세븐

	// 52장을 섞은후에
	// 4장을 테이블에 보여줍니다.
	// 1장을 ?? 상태로 덮어둡니다.

	// 유저는 10000원을 들고시작하고
	// ?? 카드를 맞추는거에요
	// 0 : 하이 (??카드가 7보다 크다)
	// 1 : 로우 (??카드가 7보다 작다)
	// 2 : 세븐 (??카드가 7이랑 같다)
	// 추가로 베팅금을 냅니다.

	// 하이, 로우를 맞췄을때는 2배금액으로 리턴
	// 세븐을 맞추면 10배로 유저한테 돌려줌

	// 52장을 다쓰면 다시 카드패를 섞습니다.



	return 0;
}