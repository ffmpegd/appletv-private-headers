/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLCredential, NSURL, NSError, NSData, NSString, NSURLConnection, NSHTTPURLResponse, NSMutableData, NSMutableDictionary;

@interface MMRequest : XXUnknownSuperclass {
	NSData *_messageBody;	// 4 = 0x4
	NSString *_method;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSURL *_originalUrl;	// 16 = 0x10
	NSMutableDictionary *_requestHeaders;	// 20 = 0x14
	NSHTTPURLResponse *_response;	// 24 = 0x18
	NSMutableData *_responseData;	// 28 = 0x1c
	NSURLCredential *_credentials;	// 32 = 0x20
	NSError *_error;	// 36 = 0x24
	NSURLConnection *_connection;	// 40 = 0x28
	BOOL _requestStarted;	// 44 = 0x2c
	BOOL _requestCompleted;	// 45 = 0x2d
}
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x84b771; S=0x84b781; @synthesize=_connection
@property(retain, nonatomic) NSURLCredential *credentials;	// G=0x84b731; S=0x84b741; @synthesize=_credentials
@property(retain, nonatomic) NSError *error;	// G=0x84b751; S=0x84b761; @synthesize=_error
@property(retain, nonatomic) NSData *messageBody;	// G=0x84b651; S=0x84b661; @synthesize=_messageBody
@property(retain, nonatomic) NSString *method;	// G=0x84b671; S=0x84b681; @synthesize=_method
@property(retain, nonatomic) NSURL *originalUrl;	// G=0x84b6b1; S=0x84b6c1; @synthesize=_originalUrl
@property(assign, nonatomic) BOOL requestCompleted;	// G=0x84b7b1; S=0x84b7c1; @synthesize=_requestCompleted
@property(retain, nonatomic) NSMutableDictionary *requestHeaders;	// G=0x84b6d1; S=0x84b6e1; @synthesize=_requestHeaders
@property(assign, nonatomic) BOOL requestStarted;	// G=0x84b791; S=0x84b7a1; @synthesize=_requestStarted
@property(retain, nonatomic) NSHTTPURLResponse *response;	// G=0x84b6f1; S=0x84b701; @synthesize=_response
@property(assign, nonatomic) NSMutableData *responseData;	// G=0x84b711; S=0x84b721; @synthesize=_responseData
@property(retain, nonatomic) NSURL *url;	// G=0x84b691; S=0x84b6a1; @synthesize=_url
- (id)initWithMessage:(id)message usingMethod:(id)method headers:(id)headers url:(id)url;	// 0x84adb9
- (void)_cleanUpConnection;	// 0x84b399
- (void)_runRequestThread;	// 0x84b0b1
- (id)_urlRequest;	// 0x84b2a5
// declared property getter: - (id)connection;	// 0x84b771
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x84b57d
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x84b431
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x84b4fd
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x84b569
- (void)connectionDidFinishLoading:(id)connection;	// 0x84b62d
// declared property getter: - (id)credentials;	// 0x84b731
- (void)dealloc;	// 0x84af11
// declared property getter: - (id)error;	// 0x84b751
- (int)httpStatusCode;	// 0x84b1bd
// declared property getter: - (id)messageBody;	// 0x84b651
// declared property getter: - (id)method;	// 0x84b671
// declared property getter: - (id)originalUrl;	// 0x84b6b1
// declared property getter: - (BOOL)requestCompleted;	// 0x84b7b1
// declared property getter: - (id)requestHeaders;	// 0x84b6d1
// declared property getter: - (BOOL)requestStarted;	// 0x84b791
// declared property getter: - (id)response;	// 0x84b6f1
// declared property getter: - (id)responseData;	// 0x84b711
- (id)result;	// 0x84b1ed
- (void)sendAsynchronously;	// 0x84b015
- (void)sendSynchronously;	// 0x84b051
// declared property setter: - (void)setConnection:(id)connection;	// 0x84b781
// declared property setter: - (void)setCredentials:(id)credentials;	// 0x84b741
// declared property setter: - (void)setError:(id)error;	// 0x84b761
// declared property setter: - (void)setMessageBody:(id)body;	// 0x84b661
// declared property setter: - (void)setMethod:(id)method;	// 0x84b681
// declared property setter: - (void)setOriginalUrl:(id)url;	// 0x84b6c1
// declared property setter: - (void)setRequestCompleted:(BOOL)completed;	// 0x84b7c1
// declared property setter: - (void)setRequestHeaders:(id)headers;	// 0x84b6e1
// declared property setter: - (void)setRequestStarted:(BOOL)started;	// 0x84b7a1
// declared property setter: - (void)setResponse:(id)response;	// 0x84b701
// declared property setter: - (void)setResponseData:(id)data;	// 0x84b721
// declared property setter: - (void)setUrl:(id)url;	// 0x84b6a1
- (void)setUsername:(id)username andPassword:(id)password;	// 0x84b239
- (void)setValue:(id)value forHeader:(id)header;	// 0x84b1fd
// declared property getter: - (id)url;	// 0x84b691
@end
