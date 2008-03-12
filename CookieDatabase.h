
class CookieDatabase {

public:
	CookieDatabase();
	~CookieDatabase();
	void Init( std::wstring& databasePath, ULONGLONG et, int hl );
	COSIGNSTATUS CheckCookie( std::string& cookie, CosignServiceInfo* csi );
	COSIGNSTATUS CheckCookie( std::wstring& cookie, CosignServiceInfo* csi );
	COSIGNSTATUS StoreCookie( std::string& cookie, CosignServiceInfo* csi );
	COSIGNSTATUS StoreCookie( std::wstring& cookie, CosignServiceInfo* csi );
	COSIGNSTATUS UpdateCookie( std::string& cookie );
	COSIGNSTATUS UpdateCookie( std::wstring& cookie );

private:

	static const int READBUFFERSIZE = 1024;
	std::wstring path;
	ULONGLONG expireTime;
	int	hashLength;

};