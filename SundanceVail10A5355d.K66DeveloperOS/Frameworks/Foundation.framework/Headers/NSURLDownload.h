/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSURLAuthenticationChallengeSender.h"

@class NSURLDownloadInternal;

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {
	NSURLDownloadInternal *_internal;	// 4 = 0x4
}
@property(assign) BOOL deletesFileUponFailure;	// G=0x34709cf9; S=0x34709cd5; converted property
+ (id)_downloadWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x347095ed
+ (id)_downloadWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x34709419
+ (id)_downloadWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x347096b1
+ (BOOL)_isEncodingMIMETypeResumable:(id)resumable;	// 0x34709d95
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)encodingMIMEType;	// 0x34709d21
- (id)init;	// 0x34709105
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x34709179
- (id)initWithResumeData:(id)resumeData delegate:(id)delegate path:(id)path;	// 0x347098f9
- (id)_delegate;	// 0x34655899
- (BOOL)_deletesFileAfterFailure;	// 0x34709cad
- (id)_directoryPath;	// 0x34709dad
- (BOOL)_downloadActive;	// 0x34655879
- (id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x3470946d
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x34709355
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x34709641
- (id)_initWithResumeInformation:(id)resumeInformation delegate:(id)delegate path:(id)path;	// 0x347096f9
- (id)_originatingURL;	// 0x34709ec5
- (id)_resumeInformation;	// 0x34709af9
- (void)_setDelegate:(id)delegate;	// 0x34709dfd
- (void)_setDeletesFileAfterFailure:(BOOL)failure;	// 0x34709c89
- (void)_setDirectoryPath:(id)path;	// 0x34709e55
- (void)_setOriginatingURL:(id)url;	// 0x34709ea1
- (void)cancel;	// 0x34709b81
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x34708ff1
- (void)cleanupChallenges;	// 0x34708eb1
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x34708f91
- (void)dealloc;	// 0x34655dfd
// converted property getter: - (BOOL)deletesFileUponFailure;	// 0x34709cf9
- (void)releaseDelegate;	// 0x34655dc1
- (id)request;	// 0x34709bb9
- (id)resumeData;	// 0x34709b3d
- (BOOL)sendCanAuthenticateAgainstProtectionSpace:(CFURLProtectionSpaceRef)space;	// 0x3470a3e1
- (void)sendDecideDestinationWithSuggestedObjectName:(CFStringRef)suggestedObjectName;	// 0x3470a2e9
- (void)sendDidCreateDestination:(CFURLRef)send;	// 0x346559f1
- (void)sendDidFail:(CFErrorRef)send;	// 0x3470a359
- (void)sendDidFinish;	// 0x34655c2d
- (void)sendDidReceiveChallenge:(CFURLAuthChallengeRef)send;	// 0x3470a109
- (void)sendDidReceiveData:(long)send;	// 0x34655b21
- (void)sendDidReceiveResponse:(CFURLResponseRef)send;	// 0x346558b9
- (void)sendDidStart:(CFURLDownloadRef)send;	// 0x34709f09
- (unsigned char)sendDownloadShouldUseCredentialStorage;	// 0x3470a099
- (bool)sendShouldDecodeDataOfMIMEType:(CFStringRef)send;	// 0x3470a275
- (void)sendWillResumeWithResponse:(CFURLResponseRef)send startingByte:(unsigned long long)byte;	// 0x3470a1e1
- (CFURLRequestRef)sendWillSendRequest:(CFURLRequestRef)send redirectResponse:(CFURLResponseRef)response;	// 0x34709f89
// converted property setter: - (void)setDeletesFileUponFailure:(BOOL)failure;	// 0x34709cd5
- (void)setDestination:(id)destination allowOverwrite:(BOOL)overwrite;	// 0x34709c2d
- (id)url;	// 0x34709d31
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x34708f19
@end

