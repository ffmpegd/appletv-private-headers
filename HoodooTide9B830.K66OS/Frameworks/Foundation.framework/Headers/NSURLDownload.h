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
@private
	NSURLDownloadInternal *_internal;	// 4 = 0x4
}
@property(assign) BOOL deletesFileUponFailure;	// G=0x31636fa1; S=0x31636f7d; converted property
+ (id)_downloadWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x31636895
+ (id)_downloadWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x316366cd
+ (id)_downloadWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x31636959
+ (BOOL)_isEncodingMIMETypeResumable:(id)resumable;	// 0x3163703d
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)encodingMIMEType;	// 0x31636fc9
- (id)init;	// 0x316363ad
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x31636421
- (id)initWithResumeData:(id)resumeData delegate:(id)delegate path:(id)path;	// 0x31636ba1
- (id)_delegate;	// 0x31589501
- (BOOL)_deletesFileAfterFailure;	// 0x31636f55
- (id)_directoryPath;	// 0x31637055
- (BOOL)_downloadActive;	// 0x315894e1
- (id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x31636721
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x31636609
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x316368e9
- (id)_initWithResumeInformation:(id)resumeInformation delegate:(id)delegate path:(id)path;	// 0x316369a1
- (id)_originatingURL;	// 0x3163716d
- (id)_resumeInformation;	// 0x31636da1
- (void)_setDelegate:(id)delegate;	// 0x316370a5
- (void)_setDeletesFileAfterFailure:(BOOL)failure;	// 0x31636f31
- (void)_setDirectoryPath:(id)path;	// 0x31637101
- (void)_setOriginatingURL:(id)url;	// 0x31637149
- (void)cancel;	// 0x31636e29
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x31636295
- (void)cleanupChallenges;	// 0x3163614d
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x31636235
- (void)dealloc;	// 0x31589a41
// converted property getter: - (BOOL)deletesFileUponFailure;	// 0x31636fa1
- (void)releaseDelegate;	// 0x31589a01
- (id)request;	// 0x31636e65
- (id)resumeData;	// 0x31636de5
- (BOOL)sendCanAuthenticateAgainstProtectionSpace:(CFURLProtectionSpaceRef)space;	// 0x31637695
- (void)sendDecideDestinationWithSuggestedObjectName:(CFStringRef)suggestedObjectName;	// 0x316375a5
- (void)sendDidCreateDestination:(CFURLRef)send;	// 0x3158964d
- (void)sendDidFail:(CFErrorRef)send;	// 0x31637611
- (void)sendDidFinish;	// 0x31589875
- (void)sendDidReceiveChallenge:(CFURLAuthChallengeRef)send;	// 0x316373b5
- (void)sendDidReceiveData:(long)send;	// 0x3158976d
- (void)sendDidReceiveResponse:(CFURLResponseRef)send;	// 0x31589521
- (void)sendDidStart:(CFURLDownloadRef)send;	// 0x316371b1
- (unsigned char)sendDownloadShouldUseCredentialStorage;	// 0x31637341
- (bool)sendShouldDecodeDataOfMIMEType:(CFStringRef)send;	// 0x31637529
- (void)sendWillResumeWithResponse:(CFURLResponseRef)send startingByte:(unsigned long long)byte;	// 0x3163748d
- (CFURLRequestRef)sendWillSendRequest:(CFURLRequestRef)send redirectResponse:(CFURLResponseRef)response;	// 0x3163722d
// converted property setter: - (void)setDeletesFileUponFailure:(BOOL)failure;	// 0x31636f7d
- (void)setDestination:(id)destination allowOverwrite:(BOOL)overwrite;	// 0x31636ed9
- (id)url;	// 0x31636fd9
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x316361bd
@end

