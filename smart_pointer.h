#ifndef SMART_POINTER_H_INCLUDED
#define SMART_POINTER_H_INCLUDED


template <typename T>
class SmartPointer {

    T* ptr;
    int *number;

    public:
        SmartPointer(SmartPointer const&);
        T* operator->()const
        {
            return ptr;
        }
        T& operator* ()const
        {
            return *ptr;
        }

        SmartPointer(T* p = 0)
        {
            ptr = p;
            if(!isNull())
            {
                number = 0;
            }
            else
                number = new int(1);
        }

        ~SmartPointer()
        {
            reset();
        }

        bool isNull()
        {
            return ptr? false : true;
        }

        void reset()
        {
            if(!isNull())
            {
                if(!(--(*number)))
                {
                    delete ptr;
                    delete number;
                }
                number = 0;
                ptr = 0;
            }
        }

        SmartPointer<T> &operator = (SmartPointer const &original)
        {
            this->reset();
            number = original.number;
            ptr = original.ptr;
            if(!isNull())
            {
                ++(*number);
            }
            return *this;
        }


        SmartPointer(SmartPointer const& original)
        {
            number = original.number;
            ptr = original.ptr;
            if(!isNull())
            {
                ++(*number);
            }
        }
};

#endif // SMART_POINTER_H_INCLUDED
