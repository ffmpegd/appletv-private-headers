/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"
#import "DAEAS-Structs.h"

@class NSMutableDictionary, NSError, NSString;

@interface ASAutodiscoverTask : ASTask {
	NSString *_serverURL;	// 104 = 0x68
	NSString *_emailAddress;	// 108 = 0x6c
	NSString *_redirectEmail;	// 112 = 0x70
	NSMutableDictionary *_accountInfo;	// 116 = 0x74
	NSError *_discoveryError;	// 120 = 0x78
}
- (id)initWithURL:(id)url emailAddress:(id)address;	// 0x3185ac29
- (id)_HTTPMethodForRequest:(id)request;	// 0x3185ad91
- (id)_easVersion;	// 0x3185ad7d
- (void)_handleActionNode:(xmlNode *)node;	// 0x3185b385
- (void)_handleErrorNode:(xmlNode *)node;	// 0x3185b20d
- (void)_handleServerNode:(xmlNode *)node;	// 0x3185af55
- (void)_handleUserNode:(xmlNode *)node;	// 0x3185b479
- (id)_policyKey;	// 0x3185ad81
- (void)_setAccountInfoFromAutoDiscoveryXML:(id)autoDiscoveryXML;	// 0x3185b4e9
- (BOOL)_shouldRedirectToHTTPForRequest:(id)request;	// 0x3185ae39
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x3185adf5
- (id)_url;	// 0x3185ad45
- (id)contentType;	// 0x3185ad85
- (void)dealloc;	// 0x3185ac9d
- (void)didProcessContext:(id)context;	// 0x3185b89d
- (BOOL)expectsWBXML;	// 0x3185adf1
- (void)finishWithError:(id)error;	// 0x3185b8f9
- (id)localizedErrorStringForCertificateErrorCode:(int)certificateErrorCode host:(id)host;	// 0x3185aeb1
- (BOOL)processContext:(id)context;	// 0x3185aead
- (id)requestBody;	// 0x3185ae3d
- (BOOL)requiresEASVersionInformaton;	// 0x3185ba49
- (BOOL)shouldHandlePasswordErrors;	// 0x3185b8f5
- (BOOL)shouldLogIncomingData;	// 0x3185ba4d
- (double)timeoutInterval;	// 0x3185ad39
@end

