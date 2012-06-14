/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSURL, NSData, NSMutableData, NSError, NSURLConnection, NSHTTPURLResponse, NSURLCredential, NSString;

__attribute__((visibility("hidden")))
@interface MMRequest : NSObject {
@private
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
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x32bc81d5; S=0x32bc851d; @synthesize=_connection
@property(retain, nonatomic) NSURLCredential *credentials;	// G=0x32bc81f5; S=0x32bc84cd; @synthesize=_credentials
@property(retain, nonatomic) NSError *error;	// G=0x32bc81e5; S=0x32bc84f5; @synthesize=_error
@property(retain, nonatomic) NSData *messageBody;	// G=0x32bc8275; S=0x32bc83dd; @synthesize=_messageBody
@property(retain, nonatomic) NSString *method;	// G=0x32bc8265; S=0x32bc8405; @synthesize=_method
@property(retain, nonatomic) NSURL *originalUrl;	// G=0x32bc8245; S=0x32bc8455; @synthesize=_originalUrl
@property(assign, nonatomic) BOOL requestCompleted;	// G=0x32bc8195; S=0x32bc81a5; @synthesize=_requestCompleted
@property(retain, nonatomic) NSMutableDictionary *requestHeaders;	// G=0x32bc8235; S=0x32bc847d; @synthesize=_requestHeaders
@property(assign, nonatomic) BOOL requestStarted;	// G=0x32bc81b5; S=0x32bc81c5; @synthesize=_requestStarted
@property(retain, nonatomic) NSHTTPURLResponse *response;	// G=0x32bc8225; S=0x32bc84a5; @synthesize=_response
@property(assign, nonatomic) NSMutableData *responseData;	// G=0x32bc8205; S=0x32bc8215; @synthesize=_responseData
@property(retain, nonatomic) NSURL *url;	// G=0x32bc8255; S=0x32bc842d; @synthesize=_url
- (id)initWithMessage:(id)message usingMethod:(id)method headers:(id)headers url:(id)url;	// 0x32bc8285
- (void)_cleanUpConnection;	// 0x32bc8755
- (void)_runRequestThread;	// 0x32bc89d5
- (id)_urlRequest;	// 0x32bc87e9
// declared property getter: - (id)connection;	// 0x32bc81d5
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x32bc8569
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x32bc8691
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x32bc8629
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x32bc8615
- (void)connectionDidFinishLoading:(id)connection;	// 0x32bc8545
// declared property getter: - (id)credentials;	// 0x32bc81f5
- (void)dealloc;	// 0x32bc8b89
// declared property getter: - (id)error;	// 0x32bc81e5
- (int)httpStatusCode;	// 0x32bc89a5
// declared property getter: - (id)messageBody;	// 0x32bc8275
// declared property getter: - (id)method;	// 0x32bc8265
// declared property getter: - (id)originalUrl;	// 0x32bc8245
// declared property getter: - (BOOL)requestCompleted;	// 0x32bc8195
// declared property getter: - (id)requestHeaders;	// 0x32bc8235
// declared property getter: - (BOOL)requestStarted;	// 0x32bc81b5
// declared property getter: - (id)response;	// 0x32bc8225
// declared property getter: - (id)responseData;	// 0x32bc8205
- (id)result;	// 0x32bc8995
- (void)sendAsynchronously;	// 0x32bc8b49
- (void)sendSynchronously;	// 0x32bc8aed
// declared property setter: - (void)setConnection:(id)connection;	// 0x32bc851d
// declared property setter: - (void)setCredentials:(id)credentials;	// 0x32bc84cd
// declared property setter: - (void)setError:(id)error;	// 0x32bc84f5
// declared property setter: - (void)setMessageBody:(id)body;	// 0x32bc83dd
// declared property setter: - (void)setMethod:(id)method;	// 0x32bc8405
// declared property setter: - (void)setOriginalUrl:(id)url;	// 0x32bc8455
// declared property setter: - (void)setRequestCompleted:(BOOL)completed;	// 0x32bc81a5
// declared property setter: - (void)setRequestHeaders:(id)headers;	// 0x32bc847d
// declared property setter: - (void)setRequestStarted:(BOOL)started;	// 0x32bc81c5
// declared property setter: - (void)setResponse:(id)response;	// 0x32bc84a5
// declared property setter: - (void)setResponseData:(id)data;	// 0x32bc8215
// declared property setter: - (void)setUrl:(id)url;	// 0x32bc842d
- (void)setUsername:(id)username andPassword:(id)password;	// 0x32bc88f1
- (void)setValue:(id)value forHeader:(id)header;	// 0x32bc895d
// declared property getter: - (id)url;	// 0x32bc8255
@end
