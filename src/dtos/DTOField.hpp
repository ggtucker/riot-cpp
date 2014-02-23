#ifndef DTO_FIELD_HPP
#define DTO_FIELD_HPP

#include <ostream>

namespace Riot
{
	template<typename T>
	class DTOField
	{
	public:
		DTOField();
		DTOField(const DTOField<T>& field);
		DTOField(const T& data);

		T& data();
		const T& data() const;
		bool isValid() const;

		DTOField<T>& operator=(const DTOField<T>& field);
		DTOField<T>& operator=(const T& data);

	private:
		T d; // data
		bool v; // valid
	};

	template <typename T>
	DTOField<T>::DTOField()
	{
		v = false;
	}

	template <typename T>
	DTOField<T>::DTOField(const DTOField<T>& field)
	{
		d = field.d;
		v = field.v;
	}

	template <typename T>
	DTOField<T>::DTOField(const T& data)
	{
		d = data;
		v = true;
	}

	template <typename T>
	T& DTOField<T>::data()
	{
		return d;
	}

	template <typename T>
	const T& DTOField<T>::data() const
	{
		return d;
	}

	template <typename T>
	bool DTOField<T>::isValid() const
	{
		return v;
	}

	template <typename T>
	DTOField<T>& DTOField<T>::operator=(const DTOField<T>& field)
	{
		this->d = field.d;
		this->v = field.v;
		return *this;
	}

	template <typename T>
	DTOField<T>& DTOField<T>::operator=(const T& data)
	{
		this->d = data;
		this->v = true;
		return *this;
	}

	template <typename T>
	std::ostream& operator<<(std::ostream& out, const DTOField<T>& field)
	{
		if(field.isValid())
		{
			out << field.data();
		}
		return out;
	}
}

#endif // DTO_FIELD_HPP