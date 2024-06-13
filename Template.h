#pragma once

template <typename Type1,typename Type2>

	class TemplateClass
	{
	public:
		TemplateClass(Type1 number1, Type2 number2) : number1(number1), number2(number2) {}

		Type1 Min()
		{
			if (number1 < number2)
			{
				return static_cast<Type1>(number1);
			}
			else {
				return static_cast<Type2>(number2);
			}
		};
	private:
		Type1 number1;
		Type2 number2;
	};



