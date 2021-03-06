/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class NSCountedSet, SSURLRequestProperties, SSMutableURLRequestProperties, NSURLConnection, SSAuthenticationContext, ISDataProvider, NSURLRequest, NSURLResponse, NSMutableData;
@protocol ISURLOperationDelegate;

__attribute__((visibility("hidden")))
@interface ISURLOperation : ISOperation {
@private
	NSURLRequest *_activeURLRequest;	// 60 = 0x3c
	SSAuthenticationContext *_authenticationContext;	// 64 = 0x40
	NSURLConnection *_connection;	// 68 = 0x44
	NSMutableData *_dataBuffer;	// 72 = 0x48
	ISDataProvider *_dataProvider;	// 76 = 0x4c
	int _networkRetryCount;	// 80 = 0x50
	NSCountedSet *_redirectURLs;	// 84 = 0x54
	SSMutableURLRequestProperties *_requestProperties;	// 88 = 0x58
	NSURLResponse *_response;	// 92 = 0x5c
	BOOL _shouldSetCookies;	// 96 = 0x60
}
@property(assign, getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies;	// G=0x3682e5e9; S=0x3682e5f9; @synthesize
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x3682e541; S=0x3682e555; @synthesize=_authenticationContext
@property(retain) ISDataProvider *dataProvider;	// G=0x3682e579; S=0x3682e58d; @synthesize=_dataProvider
@property(assign) id<ISURLOperationDelegate> delegate;	// @dynamic
@property(retain) id request;	// G=0x3682b091; S=0x3682b16d; converted property
@property(copy) SSURLRequestProperties *requestProperties;	// G=0x3682b10d; S=0x3682b1e1; 
@property(retain) NSURLResponse *response;	// G=0x3682e5b1; S=0x3682e5c5; @synthesize=_response
+ (id)copyUserAgent;	// 0x3682ac7d
- (id)init;	// 0x3682ab45
- (id)_accountIdentifier;	// 0x3682c2b1
- (id)_activeURL;	// 0x3682ced1
- (id)_copyAcceptLanguageString;	// 0x3682cef1
- (id)_copyAuthenticationContext;	// 0x3682c359
- (id)_copyConnectionProperties;	// 0x3682d02d
- (id)_copyQueryStringDictionaryForRedirect:(id)redirect;	// 0x3682d0e5
- (id)_errorWithDefaultStringsForError:(id)error;	// 0x3682d1f1
- (id)_errorWithDomain:(id)domain code:(int)code;	// 0x3682d2ad
- (void)_handleFinishedLoading;	// 0x3682c3e1
- (void)_handleReceivedData:(id)data;	// 0x3682c695
- (void)_handleReceivedResponse:(id)response;	// 0x3682c781
- (id)_handleRedirectRequest:(id)request response:(id)response;	// 0x3682ccf9
- (void)_logRequest:(id)request;	// 0x3682d4b5
- (void)_logResponseBody:(id)body;	// 0x3682d655
- (id)_requestProperties;	// 0x3682c381
- (void)_retry;	// 0x3682d785
- (void)_run;	// 0x3682d925
- (BOOL)_runRequestWithURL:(id)url;	// 0x3682d9e9
- (id)_sanitizedStringForString:(id)string;	// 0x3682dfd5
- (id)_sanitizedURLForURL:(id)url;	// 0x3682e055
- (void)_sendContentLengthToDelegate:(long long)delegate;	// 0x3682e0e9
- (void)_sendOutputToDelegate:(id)delegate;	// 0x3682e1ad
- (void)_sendRequestToDelegate:(id)delegate;	// 0x3682e229
- (void)_sendResponseToDelegate:(id)delegate;	// 0x3682e281
- (void)_setActiveURLRequest:(id)request;	// 0x3682e2fd
// declared property setter: - (void)_setShouldSetCookies:(BOOL)_set;	// 0x3682e5f9
// declared property getter: - (BOOL)_shouldSetCookies;	// 0x3682e5e9
- (void)_stopConnection;	// 0x3682e341
- (void)_updateProgress;	// 0x3682e37d
- (BOOL)_validateContentLength:(long long)length error:(id *)error;	// 0x3682e49d
// declared property getter: - (id)authenticationContext;	// 0x3682e541
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3682bce5
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3682bd85
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3682bd99
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x3682bdad
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3682bfe1
- (void)connectionDidFinishLoading:(id)connection;	// 0x3682c2a1
// declared property getter: - (id)dataProvider;	// 0x3682e579
- (void)dealloc;	// 0x3682abb9
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider;	// 0x3682b515
- (void)handleResponse:(id)response;	// 0x3682b689
- (id)newRequestWithURL:(id)url;	// 0x3682b68d
// converted property getter: - (id)request;	// 0x3682b091
// declared property getter: - (id)requestProperties;	// 0x3682b10d
// declared property getter: - (id)response;	// 0x3682e5b1
- (void)run;	// 0x3682b249
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x3682e555
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x3682e58d
// converted property setter: - (void)setRequest:(id)request;	// 0x3682b16d
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x3682b1e1
// declared property setter: - (void)setResponse:(id)response;	// 0x3682e5c5
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x3682bcd9
@end

