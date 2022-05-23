#ifndef POINTERS_H
#define POINTERS_H

template <class T>
class weakPtr;

template<class T>
class uniquePtr;

template<class T>
class sharedPtr;

template<class T>
class sharedPtr
{
private:
    friend class weakPtr<T>;

    T* ptr = nullptr;
    int* count =  nullptr;
    int* countWeak = nullptr;

    template<typename U, typename...Args>
    friend sharedPtr<U> make_shared(Args&&... args);

public:
    friend class weakPtr<T>;
    sharedPtr(T* ptr = nullptr) : ptr(ptr), count(new int(1)), countWeak(new int(0)) {}

    sharedPtr (const sharedPtr<T>& other) : ptr(other.ptr), count(other.count), countWeak(other.countWeak){
        if (ptr == nullptr || !(*countWeak))
            return;

        ++*count;
        ++*countWeak;
    }

    sharedPtr(sharedPtr<T>&& other) : ptr(other.ptr), count(other.count), countWeak(other.countWeak) {
        if (ptr == nullptr)
            return;

        other.ptr = nullptr;
        other.count = nullptr;
        other.countWeak = nullptr;
    }

    sharedPtr (weakPtr<T>& other) : ptr(other.ptr), count(other.count), countWeak(other.countWeak) {
        ++*count;
    }


    void reset(T* ptr = nullptr) noexcept {
        delete this->ptr;
        delete this->count;
        delete this->countWeak;

        count = new int(1);
        countWeak = new int(0);
        this->ptr = ptr;
    }

    T* release() noexcept {
        T* tmp = ptr;
        ptr = nullptr;
        return tmp;
    }

    void swap(sharedPtr& ptr){
        T* tmp = this->ptr;
        this->ptr = ptr.ptr;
        ptr.ptr = tmp;
    }

    int use_count() const noexcept
    {
        return *count;
    }

    int use_count_weak() const noexcept
    {
        return *countWeak;
    }

    T* get() const noexcept
    {
        return ptr;
    }

    T* operator->() const
    {
        return ptr;
    }

    T& operator*() const
    {
        return *ptr;
    }

    operator bool() const noexcept
    {
        return static_cast<bool>(ptr);
    }

    sharedPtr& operator=(sharedPtr<T>& other) noexcept
    {
        ptr = other.ptr;
        count = other.count;

        return *this;
    }

    ~sharedPtr(){
        if(ptr == nullptr || count == nullptr)
            return;

        if (*count>0){
            --*count;
            --*countWeak;
            return;
        }

        delete ptr;
        delete count;
        delete countWeak;
    }
};

template<class T>
class uniquePtr
{
private:
    T* ptr;

    template<typename U, typename ...Args>
    friend uniquePtr<U> make_shared(Args&& ... args);

public:
    uniquePtr(T* ptr = nullptr) : ptr(ptr) {}
    uniquePtr (uniquePtr&& other) : ptr(other.release()) {}

    void reset(T* ptr = nullptr) noexcept {
        delete this->ptr;
        this->ptr = ptr;
    }

    T* release() noexcept {
        T* tmp = ptr;
        ptr = nullptr;
        return tmp;
    }

    void swap(uniquePtr& ptr){
        T* tmp = this->ptr;
        this->ptr = ptr.ptr;
        ptr.ptr = tmp;
    }

    T* get() const {
        return ptr;
    }

    T* operator->() const {
        return ptr;
    }

    T& operator*() const {
        return *ptr;
    }

    uniquePtr& operator=(uniquePtr&& other) noexcept {
        reset(other.release());
        return* this;
    }

    operator bool() const noexcept {
        return static_cast<bool>(ptr);
    }

    ~uniquePtr() {
       delete ptr;
    }
};


template<class T>
class weakPtr
{
private:
    T* ptr = nullptr;
    int* count =  nullptr;
    int* countWeak = nullptr;

public:
    friend class sharedPtr<T>;

    weakPtr(T* ptr = nullptr) : ptr(ptr), count(new int(0)), countWeak(new int(1)) {}

    weakPtr(const weakPtr<T>& other) : ptr(other.ptr), count(other.count), countWeak(other.countWeak) {
        if (ptr == nullptr)
            return;

        ++*countWeak;
    }

    weakPtr(sharedPtr<T>& other) : ptr(other.ptr), count(other.count), countWeak(other.countWeak) {
        if (ptr == nullptr)
            return;

        ++*countWeak;
    }

    void reset(T* ptr) {
        if (this->ptr == nullptr || this->countWeak == nullptr)
            return;

        delete this->countWeak;
        delete this->ptr;

        this->countWeak = 1;
        this->ptr = ptr;

    }

    bool expired() {
        if (ptr == nullptr || countWeak == nullptr)
            return true;
        else
            return false;
    }

    void swap(weakPtr<T>& ptr) {
        T* tmp = this->ptr;
        this->ptr=  ptr.ptr;
        ptr.ptr = tmp;
    }

    int use_count() const noexcept
    {
        return *count;
    }

    sharedPtr<T> lock() {
        sharedPtr<T>* tmp = new sharedPtr<T>;
        if (*(this->countWeak)){
            tmp->ptr = this->ptr;
            tmp->count = this->count;
            tmp->countWeak = this->countWeak;

            ++(*(tmp->count));
            ++(*(tmp->countWeak));
        }

        return *tmp;
    }

    weakPtr& operator=(weakPtr<T>&& other) noexcept
    {
        ptr = other.ptr;
        count = other.count;

        return *this;
    }

    operator bool() const noexcept
    {
        return static_cast<bool>(ptr);
    }

    ~weakPtr() {
        if (ptr == nullptr || countWeak == nullptr)
            return;

        if (*countWeak > 0) {
            --*countWeak;
            return;
        }

        delete ptr;
        delete count;
        delete countWeak;
    }
};

#endif // POINTERS_H
