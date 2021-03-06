/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSURLDownload.h> // Unknown library
#import "WebKit-Structs.h"

@class WebDownloadInternal;

@interface WebDownload : NSURLDownload {
	WebDownloadInternal *_webInternal;	// 8 = 0x8
}
- (id)init;	// 0x3080a20d
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x3080a2c1
- (id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x3080a379
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x3080a315
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x3080a3dd
- (void)_setRealDelegate:(id)delegate;	// 0x3080a1a9
- (void)connection:(id)connection willStopBufferingData:(id)data;	// 0x3080a435
- (void)dealloc;	// 0x3080a275
@end

