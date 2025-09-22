#include <iostream>


class Logger{
    public:
    int ot;
        Logger(int otstup): ot(otstup){}

        template <typename T>
        void log(T arg){
            std::cout<< std::string(ot, ' ')<<arg << std::endl;
        }


        template <typename T, typename... Args>
        void log(T start, Args... rest){
            std::cout<< std::string(ot, ' ')<<start<< std::endl;
            log(rest...);

        }


    


};

int main(){
    Logger loger(4);
    loger.log(1, "3", 45, 2);
    return 0;
}