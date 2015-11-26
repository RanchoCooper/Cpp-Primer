/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-09 19:46:23
**  
**  @status  solved
**  @brief
**  
**/

class Message {
    friend class Folder;
public:
    Message();
    ~Message();
    
private:
    std::string contents;       // 实际消息文本
    std::set<Folder*> folders;  // 包含本massage的Folder
};