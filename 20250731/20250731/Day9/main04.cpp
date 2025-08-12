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


	return 0;
}