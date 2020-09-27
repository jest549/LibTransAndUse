#include <iostream>
#include "MyTest.pb.h"
int MakeData(char *outPutData)
{
    MyTest::AllMessage allmsg;
    allmsg.set_all_id(123);
    allmsg.set_all_state(234);
    #if 0
    /*不能用静态分配的TestMessage类，需要用new分配*/
    MyTest::TestMessage testmsg;
    testmsg.set_id(345);
    testmsg.set_state(567);
    testmsg.set_name("HelloWorld");
    allmsg.set_allocated_testmsg(&testmsg);
    #endif
    MyTest::TestMessage *testmsg=new MyTest::TestMessage;
    testmsg->set_id(345);
    testmsg->set_state(567);
    testmsg->set_name("HelloWorld");
    allmsg.set_allocated_testmsg(testmsg);
    int len=allmsg.ByteSize();
    if(allmsg.SerializePartialToArray(outPutData,len))
        return len;
    else
        return -1;

}
void DeData(char *inputData,int len)
{
    MyTest::AllMessage allmsg;
    if(allmsg.ParseFromArray(inputData,len))
    {
        std::cout<<"all_id="<<allmsg.all_id()<<std::endl;
        std::cout<<"all_state="<<allmsg.all_state()<<std::endl;
        std::cout<<"testmsg.id="<<allmsg.testmsg().id()<<std::endl;
        std::cout<<"testmsg.state="<<allmsg.testmsg().state()<<std::endl;
        std::cout<<"testmsg.name="<<allmsg.testmsg().name()<<std::endl;
    }
    else
    {
        std::cout<<"parse data is error"<<std::endl;
    }
}
int main()
{
    char buf[1024];
    int len=MakeData(buf);
    if (len>0)
    {
        DeData(buf,len);
    }
    return 0;
}