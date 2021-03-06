/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebSecurityOriginPrivate;
@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
@private
	WebSecurityOriginPrivate *_private;	// 4 = 0x4
	id<WebQuotaManager> _applicationCacheQuotaManager;	// 8 = 0x8
	id<WebQuotaManager> _databaseQuotaManager;	// 12 = 0xc
}
@property(assign) unsigned long long quota;	// G=0x3458cf35; S=0x3458cf55; converted property
- (id)initWithURL:(id)url;	// 0x3458cd31
- (SecurityOrigin *)_core;	// 0x3458c745
- (id)_initWithWebCoreSecurityOrigin:(SecurityOrigin *)webCoreSecurityOrigin;	// 0x345329a9
- (id)applicationCacheQuotaManager;	// 0x3458c765
- (id)databaseIdentifier;	// 0x3458c9cd
- (id)databaseQuotaManager;	// 0x3458c7b1
- (void)dealloc;	// 0x345329f5
- (id)domain;	// 0x3458c755
- (void)finalize;	// 0x3458c7fd
- (id)host;	// 0x3458cad9
- (BOOL)isEqual:(id)equal;	// 0x3458c855
- (unsigned short)port;	// 0x3458c731
- (id)protocol;	// 0x3458cc05
// converted property getter: - (unsigned long long)quota;	// 0x3458cf35
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x3458cf55
- (id)toString;	// 0x3458c8c1
- (unsigned long long)usage;	// 0x3458cf15
@end

